#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()//���������Ľϴ�ֵ  �ú�������  (�Զ��庯��)
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	max=Max(num1,num2);
	printf("max=%d\n", max);
	return 0;
}


//int main()//���������Ľϴ�ֵ
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("�ϴ�ֵ��%d\n", num1);
//	else
//		printf("�ϴ�ֵ��%d\n", num2);
//	return 0;
//}