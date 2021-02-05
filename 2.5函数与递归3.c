#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//递归与迭代
//递归会有溢出


void test(int n)
{
	if (n < 10000)//溢出了，所以没结果
	{
		test(n + 1);
	}
}
int main()
{
	test(1);
	return 0;
}

//int Fib(int n)//鉴于上次的情况，这次可以考虑从1 2 这样一直往后加，算起来就要好算好多，所以用循环
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//这里的意思是执行n-2次
//	}
//	return c;
//}
//int main()//求第n个斐波那契数列  1 1 2 3 5 8 13....
////当数太大时 算的时间就很长   求到40个的时候，数值为一亿多，3就被计算了3千9百万次，效率低 所以用递归就不合适了
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD - 测试驱动开发  就是先写出函数，再写怎么用
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//int count = 0;
//Fib(int n)
//{
//	if (n == 3)//测试第3个斐波那契数列计算的次数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()//求第n个斐波那契数列  1 1 2 3 5 8 13....
////当数太大时 算的时间就很长   求到40个的时候，数值为一亿多，3就被计算了3千9百万次，效率低 所以用递归就不合适了
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD - 测试驱动开发  就是先写出函数，再写怎么用
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	printf("count=%d\n", count);
//	return 0;
//}

//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);//这里是数学方法求阶乘
//}
//int main()//求n的阶乘  不考虑溢出
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//这里用递归的方式
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i<= n; i++)
//	{
//		ret *= i;//ret乘的是i
//	}
//	return ret;
//}
//int main()//求n的阶乘  不考虑溢出
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=Fac1(n);//循环的方式
//	printf("%d\n", ret);
//
//	return 0;
//}
