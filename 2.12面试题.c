#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//不能创建第三个变量（临时变量），实现两个数组的交换


int main()//异或的方法  异或就是不一样的话就是1 都是1的话就是0  不会溢出  执行效率不高 可读性不强
{
	int a = 3;
	int b = 5;
	a = a ^ b;//a=6
	b = a ^ b;//b=3
	a = a ^ b;//a=5
	printf("a=%d b=%d\n", a, b);
	return 0;
}

//int main()//加减法  因为是整型，所以会溢出
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()//创建变量的方式
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//	printf("before:a=%d b=%d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("after:a=%d b=%d\n", a, b);
//	return 0;
//}