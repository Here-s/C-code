#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
extern int Add(int, int);
int main()//static �������κ���,Ҳ�Ǹı��˺�����������-˵����׼ȷ��Ӧ��������
//static���κ����ı��˺�������������
//��ͨ�ĺ������ⲿ�������ԣ���static����֮��ͱ���ڲ����������ˣ�����������
{
	int a = 10;
	int b = 20;
	int sum =Add(a, b);//��Add�����������Ҫ�����ⲿ����
	printf("sum=%d\n", sum);
	return 0;
}

//int main()//static����ȫ�ֱ������ı���������-�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
////����Դ�ļ��Ͳ���ʹ����
//
//{
//	//extern-�����ⲿ����
//	extern int g_var;
//	printf("g_var =%d\n", g_var);
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a�Ǿֲ�����,����static���Ǿ�̬�ľֲ������ˣ�a�����٣��ϴε���ֵ����
//	a++;
//	printf("a=%d\n", a);
//}
//int main()//�ؼ���static ���ξֲ��������ֲ��������������ڱ䳤����������������
//{
//	int i= 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()//typedef-���Ͷ���-�����ض���
//{
//	typedef unsigned int u_int;
//	unsigned int num = 20;//����unsigned int ̫����������typedef�ض���Ϊu_int
//	u_int num2 = 20;
//
//	return 0;
//}
//�ؼ��ֲ������������ͻ
//int main()//
//{
//	//register int a = 10;//�ֲ�����-�Զ�����-auto   ����a����ɼĴ�������
//	int a = -10;
//	a = -2;
//	//int ����ı������з��ŵ�  int=signed int
//	//signed int;
//	unsigned int num = 0;//�޷���������ʹ�Ÿ�-1������Ҳ������������
//	//struct-�ṹ��ؼ���
//	//union-������/������
//
//	return 0;
//}

