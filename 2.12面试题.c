#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���ܴ�����������������ʱ��������ʵ����������Ľ���


int main()//���ķ���  �����ǲ�һ���Ļ�����1 ����1�Ļ�����0  �������  ִ��Ч�ʲ��� �ɶ��Բ�ǿ
{
	int a = 3;
	int b = 5;
	a = a ^ b;//a=6
	b = a ^ b;//b=3
	a = a ^ b;//a=5
	printf("a=%d b=%d\n", a, b);
	return 0;
}

//int main()//�Ӽ���  ��Ϊ�����ͣ����Ի����
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()//���������ķ�ʽ
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