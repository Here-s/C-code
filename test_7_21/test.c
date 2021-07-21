#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//下列代码的运行结果是     1 2 3 4 5 5 5 5 5 5 死循环
//因为每次都是对 i 赋值 所以一直死循环为5
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//写代码实现三个整数从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int t = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	//调整  把最大值放到 a 把第二大的放到 b  第三大的放到 c 
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//写一个代码，打印 1-100之间所有 3 的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//下列代码的执行结果是
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) 
//	{
//	case 1://进了1 
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");//因为y是3 所以执行这个
//		}
//	case 2://因为上面的case 1 没有break 所以继续执行这个case 2
//		printf("third");
//	}
//	return 0;
//}



//程序的输出结果是
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)//b是1 所以商 0 余 1   
//		{						//b = 1  4  7  10  13  16  19  22(break)
//			b = b + 3;			//a = 1  2  3  4   5   6   7   8
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//


//给定两个数  求这两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//两个数的最大公约数 也就是两个数当中较小的那一个数
//	//可以把最大的 然后一个数一个数的-1 直到求出
//	int min = a < b ? a : b;
//	int max = 0;
//	for (max = min; max >= 1; max--)
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			printf("%d", max);
//			break;
//		}
//	}
//	return 0;
//}//如果求两个数的最小公倍数 最小的就是两个数当中的较大值 然后大的那的依次+1 直到找到


//给定两个数  求这两个数的最大公约数
//int main()//另外一种写法 辗转相除法  就是  用较大的%较小的 然后用模的余数 再拿小的来模 
////等于0就行了
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b)//这样模的结果为 0 之后 结果就是b
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}


//打印1000-2000年之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年 是的话 就打印  
//		//判断闰年规则 1能被4整除 不能被100整除   2 能被400整除
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//				count++;
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n  %d", count);
//	return 0;
//}
//或者这样写
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n  %d", count);
//	return 0;
//
//}


//写一个代码 判断100-200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断 i是否为素数   只能被1和它自身整除
//		int j = 0;
//		int flag = 1;//flag 是1 假设i是素数
//		for (j = 2; j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)//如果flag 还是1 就说明 是素数
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n  %d", count);
//	return 0;
//}

//优化方法
//int main()//如果 m = a*b  那就说明 a和b当中至少有一个数字 <=根号m 
////那么一定能在 2-根号m之间找到一个因子整除m 所以只要循环到根号m就好了
//{
//		int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i) ;j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n  %d", count);
//	return 0;
//}

//还能继续优化  素数肯定不是偶数 因为如果是偶数的话 就被整除了
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)//这样每次的 i 就是奇数了
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i) ;j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n  %d", count);
//	return 0;
//}

//编写程序数一下   1-100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//求个位
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


//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (1.0 / i) * flag;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求 10个整数中的最大值
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-78 };
//	int i = 0;
//	int max = arr[i];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//在屏幕上输出 9*9 乘法表
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{//%xd  x是指打印的域宽
			printf("%d * %d = %d\t", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}