#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Swap2(int* pa,int* pb)//拿指针来接受地址   因为不需要返回值，所以是void
{
	int tmp = 0;//这里是用指针方法解决这个问题：交换两个变量的值
	tmp=*pa;
	*pa=*pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	Swap2(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}