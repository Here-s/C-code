#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()//在屏幕上输出9*9乘法口诀表
{
	int i = 0;
	for (i = 1; i<= 9; i++)
	{
		//确定打印9行，每一次进来打印一行
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);//由于结果并没有对齐，所以改成%2d 意思是一次打印两个格子
		}
		printf("\n");
	}
	return 0;
}

//int main()//求10个整数的最大值
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };//如果这样算出来就是0
//	int max =arr[0];//意思是arr数组里面的第一个数
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求元素个数
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()//求10个整数的最大值
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;//最大值   这里有问题，如果全是-的，那么结果就是0，上面为改过的
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求元素个数
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()//计算1/1-1/2+1/3-1/4.....+1/99-1/100   这里是加减交替
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;//当flag每次变的时候就可以了
//		flag = -flag;
//
//
//	}
//	printf("%lf\n", sum);//lf  是因为这里是浮点型
//	return 0;
//}


//int main()//计算1/1+1/2+1/3+1/4.....+1/99+1/100  这里全是+
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i<= 100; i++)//为了产生1-100的分母
//	{
//		sum+=1.0/ i;//把数据加上去再赋给sum   这里是小数，浮点型，所以得保证符号两端必须有一个浮点数
//		//因为i已经是整形了，所以要写成1.0,赋给sum也应该是浮点型，所以应该double
//
//
//	}
//	printf("%lf\n", sum);//lf  是因为这里是浮点型
//	return 0;
//}

//int main()//编代码，数1-100有多少个9
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)///因为还有99，99是两个9，所以得两个if都判断
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()//算b最后等于多少
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()//有文章《素数求解的n种境界》
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)//方法3 偶数不可能是素数，所以一次+2
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//sqrt是开平方的意思，是一个数学库函数   这里二分之一也可以
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
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//int main()//方法2；i=a*b 那么它不是素数，只要找出a就行了   a和b中至少有一个数字<=开平方i
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//sqrt是开平方的意思，是一个数学库函数   这里二分之一也可以
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//int main()//打印100-200之间的素数
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数，判断规则 1试除法（素数只能被1和它本身整除）试2-(i-1)的所有数字
//		//所以要产生2到i-1的数字
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)//能整除所以不是素数
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//int main()//打印1000年-2000年之间的闰年
//{
//	int year = 0;
//	int count = 0;//计算有多少个闰年
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year这个变量是否为闰年  判断1；能被4整除 并且不能被100整除  2：能被400整除是闰年
//		
//		if (year % 4 == 0 && year % 100 != 0)//&&并且的意思
//		{
//			printf("%d  ", year);
//			count++;
//		}
//		else if (year %400 == 0)
//		{
//			printf("%d  ", year);
//			count++;
//		}
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))//第二种方法
//		{
//			printf("%d ", year);
//			count++;
//
//		}
//	}
//	printf("\n count=%d\n", count);
//	
//	return 0; 
//}

//int main()//给定两个数求最大公约数
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);//输入两组数据，
//	while (r= m % n)
//	{
//		//r = m % n;//这里多算了一次，所以可以简化为上面这样
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//int main()//给定两个数求最大公约数
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}//因为最后算成r=0，0为假，所以跳出循环
//	printf("%d\n", n);
//	return 0;
//}

//int main()//打印3的倍数 ，1-100内所有的3的倍数
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//
//	}
//	return 0;
//}

//int main()//从大到小输出三位数
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);//假设值是2 1 3   如果前面输入有逗号，那么输数字的时候也要输入逗号
//	if (a < b)//算法实现 a中放最大 b中放二大 c中放最小
//	{
//		int tmp = a;//tmp 是一个临时变量  tmp的值为2
//		a = b;//把b的值赋值于a  所以此时a=1
//		b = tmp;  //此时b的值=2
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a,b,c);
//	//printf("%d %d %d\n", c, a, b);//这样只是把结果排序，并不能达到要求
//	return 0;
//
//}
