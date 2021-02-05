#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//递归的两个必要条件
//1.存在限制条件，当满足这个限制条件的时候，递归便不再继续
//2.每次递归调用之后越来越接近这个限制条件



int my_strlen(char* str)//传过来的是地址所以应该放在char*这样的指针变量当中去 因为返回值是整形 所以是int str是指针变量
//用递归的方式把大事化小
//my_strlen("bit");
//1+my_strlen("it");  前面1是字符串长度
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0=3
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);//str+1就是i的地址
	else
		return 0;
}

int main()//编写函数不允许创建临时变量，求字符串的长度
{
	char arr[] = "byte";
	//int len =strlen(arr);
	//printf("%d\n",len);
	int len = my_strlen(arr);//arr是数组，数组传参，传过去的是第一个元素的地址
	printf("len=%d\n", len);

	return 0;
}


//int my_strlen(char* str)//传过来的是地址所以应该放在char*这样的指针变量当中去 因为返回值是整形 所以是int str是指针变量
//{//计算字符串的长度
//	int count = 0;//这里是创建变量的
//	while(*str != '\0')
//	{
//		count++;//因为这里统计的是str的第一个子符
//		str++;//因为要循环上去
//	}
//
//	return count;
//}
//
//int main()//编写函数，求字符串的长度
//{
//	char arr[] = "byte";
//	//int len =strlen(arr);
//	//printf("%d\n",len);
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的是第一个元素的地址
//	printf("len=%d\n", len);
//
//	return 0;
//}

//void print(int n)//这里就是一个递归,递归的时候一定要满足一个条件
//{
//	if (n > 9)//说明至少是两位一下的数字
//	{
//		print(n/10);//这里打印的是123  printf内部调用print
//	}
//	printf("%d ", n%10);//这里打印的是4
//}
//int main()//练习一接受一个整形（无符号），按照顺序打印它的每一位。例如：输入 1234 输出 1234
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234  
//	//拆成先打印1234的1 再打印2 然后3 最后4
//	print(num);//这里不是打印 所以没f
//	return 0;
//}

//stackoverflow  程序员的知乎   赞多就有人找你
//int main()//递归 一个函数自己调用自己 主要思考方式为:把大事化小
////把大型复杂问题转化为相似的规模较小的问题，少量代码可以多次计算
////史上最简单的递归
//{
//	printf("hehe");//当一直打印，就会存在溢出，溢出的话就不打印了，程序就挂了
//	//每次调用一次函数都会向内存申请空间
//	main();//这就是递归
//	return 0;
//}


//int main()//函数的声明
////在头文件里面声明 进行模块儿化的时候应该这样
////#ifndef __ADD_H__
////#define __ADD_H__
////
////int Add(int x, int y);//函数的声明
////
////#endif
//{
//	int a = 10;
//	int b = 20;
//	int sum =Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}