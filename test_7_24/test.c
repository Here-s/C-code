#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>



//��ӡ100-200֮�������
//int main()//����һ ȫ������
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
//������ ���һ������������ ��ô�����������ӿ϶�С�ڵ���������Ŀ�ƽ��
//����ѭ���жϵ�ʱ�� ֻҪС�ڿ�ƽ���ͺ���  (��Ȼ ���ɶ���֮һҲ���� ��������)
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


//���������� �����Լ��
//int main()//����һ
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = b;
//	//շת�����  ���ǰ����������ʣ�µ����������� ֱ��������Ϊֹ
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", c);
//	return 0;
//}
//int main()//������  �Ӵ�С��һȡģ ��ȡģΪ 0 ʱ ������������
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


//�������һ��1-100�������������г��ֶ���9
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



//���� 1/1-1/2+1/3-1/4+1/5.....+1/99-1/100
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