#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//���д�������н����     1 2 3 4 5 5 5 5 5 5 ��ѭ��
//��Ϊÿ�ζ��Ƕ� i ��ֵ ����һֱ��ѭ��Ϊ5
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


//д����ʵ�����������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int t = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	//����  �����ֵ�ŵ� a �ѵڶ���ķŵ� b  ������ķŵ� c 
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


//дһ�����룬��ӡ 1-100֮������ 3 �ı���������
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



//���д����ִ�н����
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) 
//	{
//	case 1://����1 
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");//��Ϊy��3 ����ִ�����
//		}
//	case 2://��Ϊ�����case 1 û��break ���Լ���ִ�����case 2
//		printf("third");
//	}
//	return 0;
//}



//�������������
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)//b��1 ������ 0 �� 1   
//		{						//b = 1  4  7  10  13  16  19  22(break)
//			b = b + 3;			//a = 1  2  3  4   5   6   7   8
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//


//����������  ���������������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//�����������Լ�� Ҳ�������������н�С����һ����
//	//���԰����� Ȼ��һ����һ������-1 ֱ�����
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
//}//���������������С������ ��С�ľ������������еĽϴ�ֵ Ȼ�����ǵ�����+1 ֱ���ҵ�


//����������  ���������������Լ��
//int main()//����һ��д�� շת�����  ����  �ýϴ��%��С�� Ȼ����ģ������ ����С����ģ 
////����0������
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b)//����ģ�Ľ��Ϊ 0 ֮�� �������b
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}


//��ӡ1000-2000��֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ���� �ǵĻ� �ʹ�ӡ  
//		//�ж�������� 1�ܱ�4���� ���ܱ�100����   2 �ܱ�400����
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
//��������д
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


//дһ������ �ж�100-200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж� i�Ƿ�Ϊ����   ֻ�ܱ�1������������
//		int j = 0;
//		int flag = 1;//flag ��1 ����i������
//		for (j = 2; j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)//���flag ����1 ��˵�� ������
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n  %d", count);
//	return 0;
//}

//�Ż�����
//int main()//��� m = a*b  �Ǿ�˵�� a��b����������һ������ <=����m 
////��ôһ������ 2-����m֮���ҵ�һ����������m ����ֻҪѭ��������m�ͺ���
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

//���ܼ����Ż�  �����϶�����ż�� ��Ϊ�����ż���Ļ� �ͱ�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)//����ÿ�ε� i ����������
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

//��д������һ��   1-100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//���λ
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


//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
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


//�� 10�������е����ֵ
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


//����Ļ����� 9*9 �˷���
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{//%xd  x��ָ��ӡ�����
			printf("%d * %d = %d\t", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}