#include<stdio.h>

int Max(int x, int y)//函数的实现
{
	if (x > y)
		return x;
	else//else表否则
		return y;
}
#define MAX(X,Y) (X>Y?X:Y)//宏的定义
int main()//define可以定义宏-带参数

{
	int a = 10;
	int b = 20;
	//函数方式
	int max = Max(a, b);
	printf("max=%d\n",max);
	//宏的方式
	max = MAX(a, b);
	//max=(a>b?a:b)
	printf("max=%d\n", max);
	return 0;
}
//#define MAX 100//define定义标识符常量
//int main()
//
//{
//	int a = MAX;
//	return 0;
//}
