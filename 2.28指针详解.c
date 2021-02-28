#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//指针的进阶  1 字符指针  2 指针数组  4 数组指针    4 数组传参和指针传参  5 函数指针  6 函数指针数组  7 指向函数指针数组的指针
//  8 回调函数  9 指针和数组面试题的解析




// 指针数组
// int* arr1[10];  整型指针的数组
//char* arr2[4];   一级字符指针的数组
//char** arr3[5];  二级字符指针的数组

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[] = { arr1,arr2,arr3 };//将arr1 2 3 的地址的首元素地址存进去  
	// parr数组有三个元素，类型是int*   第一个元素是arr1指向{ 1,2,3,4,5 }   剩下两个类似， 所以只要找到arr1首元素的地址，就能打印这个数组
	//
	int i = 0;
	for (i = 0; i < 3; i++)//这里是有关parr的循环，三个元素，因为是下标的方式，所以是i<3 
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i] + j));//parr[i] 就是那三个数组的地址，找到首元素地址，在+一个j，向后偏移一个数，所以假设arr1 解引用 首元素就找到了
			// 找到首元素，然后加一个数就是后面的一个数j是1，就是2，j是3，结果就是4
		}
		printf("\n");
	}
	return 0;
}

//int main()// 但指针数组不是这样用的
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };// 将这四个值的地址放进去了
//	int i = 0;
//	for (i=0;i<4;i++)// 因为是下标 所以小于4也行
//	{
//		printf("%d ", *(arr[i]));// 解引用 然后打印
//	}
//	return 0;
//}

//int main()// 指针数组，其实是数组，存放数组
//{
//	int arr[10] = { 0 };// 整型数组
//	char ch[5] = { 0 };// 字符数组
//	int* parr[4];// 存放整型指针的数组  简称指针数组
//	char* pch[5];// 存放字符指针的数组  指针数组
//	return 0;
//}

//int main()// 一道面试题  来源《剑指offer》 有电子版 重要   牛客网也不错
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//常量字符串  p1和p2 是两个不同的变量 两个存的地址是一样的，所以改变p1，p2 互不影响
//	const char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("byte\n");// 打印的是byte 因为是常量字符串 不可被修改 而且一模一样，所以没必要在内存中存两份 为了节省内存空间 所以都指向同一块位置
//	}
//	else
//	{
//		printf("dance\n");
//	}
//	//if (arr1 == arr2)
//	//{
//	//	printf("byte\n");
//	//}
//	//else
//	//{
//	//	printf("dance\n");// 输出是 dance 因为arr1和arr2 是两个空间 两个不同的数组，地址不一样，空间不一样，所以值也不一样，所以打印dance
//	//}
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";// 意思是 内存当作放七个字符串 是常量字符串 其实是把a的地址赋给p  指针是来维护这个字符串的
//	//*p = 'w';//因为上面是常量字符串，所以不能更改，所以代码会崩溃  在前面加上const，对*p进行限定 p的内容就改不了了 
//	printf("%s\n", p);//打印不出来，代码会崩溃
//    //printf("%c\n", *p);// %c 打印一个字符
//	//printf("%s\n", p);// %s打印字符串
//	return 0;
//}

//int main()// 字符指针   还有一种方法
//{
//	char arr[] = "abcdef";// 将字符串abcdef 放到arr里面
//	char* pc = arr;//数组名是首元素地址
//	printf("%s\n", arr);// %s打印字符串
//	printf("%s\n", pc);// 指向的内容一样，所以打印结果一样
//	return 0;
//}

//int main()// 字符指针   还有另外一种用法，上面写
//{
//	char ch = 'w';// 字符指针变量ch
//	char* pc = &ch;// 把ch的地址取出来，放到pc里面，pc就是字符指针，类型是char*
//
//	return 0;
//}

//void test(int arr[])// 因为在这里计算完就行了，不需要返回，所以是void   传过来的是数组首元素地址，是指针，大小是4个字节 一个整型元素的大小是4个字节，
////所以结果是1  因为32位的指针大小是4 
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n",sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}