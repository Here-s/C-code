#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>



//打印100-200之间的素数
//int main()//方法一 全部遍历
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("  %d", count);
//	return 0;
//}
//方法二 如果一个数不是素数 那么它的两个因子肯定小于等于这个数的开平方
//所以循环判断的时候 只要小于开平方就好了  (当然 换成二分之一也可以 这样更快)
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("  %d", count);
//	return 0;
//}


//给定两个数 求最大公约数
//int main()//方法一
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = b;
//	//辗转相除法  就是把两个数相除剩下的余数继续除 直到能整除为止
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", c);
//	return 0;
//}
//int main()//方法二  从大到小减一取模 当取模为 0 时 就满足条件了
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//	for (i = a; i > 0; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}


//变程序数一下1-100的所有整数当中出现多少9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}



//计算 1/1-1/2+1/3-1/4+1/5.....+1/99-1/100
int main()
{
	int a = 0;
	int flag = 1;
	double sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum += (1.0 / i) * flag;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}