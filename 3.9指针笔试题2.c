#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };//4个字符串 每个都是char* 都是指向首元素地址
	char** cp[] = { c + 3,c + 2,c + 1,c };//这里是将元素从前到后换了一遍
	char*** cpp = cp;//是二级指针变量的地址  cpp的元素类型是char*** 
	printf("%s\n", **++cpp);//POINT  因为先++所以是指向第二个c+2 所以是POINT
	printf("%s\n", *--*++cpp+3);//ER   又++所以指向c+1 又解引用拿到的是c+1 又-- 所以就变成c了 就是ENTER 拿到的是E的地址 +3指向TER的E 所以从
	//从E开始往后打印字符串 所以是ER 
	printf("%s\n", *cpp[-2]+3);//ST  cpp-2又指向了c+3 每次加了之后不会还原 再解引用得到F的地址 在+3 指向S 所以打印结果是ST
	printf("%s\n", cpp[-1][-1]+1);//EW  cpp[-1][-1]==*(*(cpp-1)-1) 所以这里是*(*(cpp-1)-1)+1 上次计算cpp没变化所以还是指向c+1 但是-1得到
	//得到的是c+2 再-1 得到c+1 解引用得到NEW 然后+1 就是从E开始打印 所以是EW
	return 0;
}

//int main()//阿里面试题
//{
//	char* a[] = { "work","at","alibaba" };//a数组 每个元素是char* 都是存放的字符指针 内存布局是work  at  alibaba 三个字符串 都是char* 
//	//a[]表示首元素地址  
//	char** pa = a;//pa是指针变量   char*的地址就应该是char** 
//	pa++;//跳过一个char*指针变量 指向第二个元素 所以是at
//	printf("%s\n", *pa);//%s 打印字符  答案是at  因为以a[]为开头跳过一个 打印的就是at
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//这里面地址是放的a的地址
//
//	return 0;
//}