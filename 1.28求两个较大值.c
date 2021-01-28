#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()//求两个数的较大值  用函数方法  (自定义函数)
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	max=Max(num1,num2);
	printf("max=%d\n", max);
	return 0;
}


//int main()//求两个数的较大值
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值：%d\n", num1);
//	else
//		printf("较大值：%d\n", num2);
//	return 0;
//}