#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ݹ������
//�ݹ�������


void test(int n)
{
	if (n < 10000)//����ˣ�����û���
	{
		test(n + 1);
	}
}
int main()
{
	test(1);
	return 0;
}

//int Fib(int n)//�����ϴε��������ο��Կ��Ǵ�1 2 ����һֱ����ӣ���������Ҫ����ö࣬������ѭ��
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//�������˼��ִ��n-2��
//	}
//	return c;
//}
//int main()//���n��쳲���������  1 1 2 3 5 8 13....
////����̫��ʱ ���ʱ��ͺܳ�   ��40����ʱ����ֵΪһ�ڶ࣬3�ͱ�������3ǧ9����Σ�Ч�ʵ� �����õݹ�Ͳ�������
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD - ������������  ������д����������д��ô��
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//int count = 0;
//Fib(int n)
//{
//	if (n == 3)//���Ե�3��쳲��������м���Ĵ���
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()//���n��쳲���������  1 1 2 3 5 8 13....
////����̫��ʱ ���ʱ��ͺܳ�   ��40����ʱ����ֵΪһ�ڶ࣬3�ͱ�������3ǧ9����Σ�Ч�ʵ� �����õݹ�Ͳ�������
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD - ������������  ������д����������д��ô��
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
//		return n * Fac2(n - 1);//��������ѧ������׳�
//}
//int main()//��n�Ľ׳�  ���������
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//�����õݹ�ķ�ʽ
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
//		ret *= i;//ret�˵���i
//	}
//	return ret;
//}
//int main()//��n�Ľ׳�  ���������
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=Fac1(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//
//	return 0;
//}
