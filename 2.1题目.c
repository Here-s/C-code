#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()//����Ļ�����9*9�˷��ھ���
{
	int i = 0;
	for (i = 1; i<= 9; i++)
	{
		//ȷ����ӡ9�У�ÿһ�ν�����ӡһ��
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);//���ڽ����û�ж��룬���Ըĳ�%2d ��˼��һ�δ�ӡ��������
		}
		printf("\n");
	}
	return 0;
}

//int main()//��10�����������ֵ
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };//����������������0
//	int max =arr[0];//��˼��arr��������ĵ�һ����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//��Ԫ�ظ���
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


//int main()//��10�����������ֵ
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;//���ֵ   ���������⣬���ȫ��-�ģ���ô�������0������Ϊ�Ĺ���
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//��Ԫ�ظ���
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

//int main()//����1/1-1/2+1/3-1/4.....+1/99-1/100   �����ǼӼ�����
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;//��flagÿ�α��ʱ��Ϳ�����
//		flag = -flag;
//
//
//	}
//	printf("%lf\n", sum);//lf  ����Ϊ�����Ǹ�����
//	return 0;
//}


//int main()//����1/1+1/2+1/3+1/4.....+1/99+1/100  ����ȫ��+
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i<= 100; i++)//Ϊ�˲���1-100�ķ�ĸ
//	{
//		sum+=1.0/ i;//�����ݼ���ȥ�ٸ���sum   ������С���������ͣ����Եñ�֤�������˱�����һ��������
//		//��Ϊi�Ѿ��������ˣ�����Ҫд��1.0,����sumҲӦ���Ǹ����ͣ�����Ӧ��double
//
//
//	}
//	printf("%lf\n", sum);//lf  ����Ϊ�����Ǹ�����
//	return 0;
//}

//int main()//����룬��1-100�ж��ٸ�9
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)///��Ϊ����99��99������9�����Ե�����if���ж�
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()//��b�����ڶ���
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

//int main()//�����¡���������n�־��硷
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)//����3 ż��������������������һ��+2
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//sqrt�ǿ�ƽ������˼����һ����ѧ�⺯��   �������֮һҲ����
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

//int main()//����2��i=a*b ��ô������������ֻҪ�ҳ�a������   a��b��������һ������<=��ƽ��i
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//sqrt�ǿ�ƽ������˼����һ����ѧ�⺯��   �������֮һҲ����
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

//int main()//��ӡ100-200֮�������
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ�������жϹ��� 1�Գ���������ֻ�ܱ�1����������������2-(i-1)����������
//		//����Ҫ����2��i-1������
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)//���������Բ�������
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

//int main()//��ӡ1000��-2000��֮�������
//{
//	int year = 0;
//	int count = 0;//�����ж��ٸ�����
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year��������Ƿ�Ϊ����  �ж�1���ܱ�4���� ���Ҳ��ܱ�100����  2���ܱ�400����������
//		
//		if (year % 4 == 0 && year % 100 != 0)//&&���ҵ���˼
//		{
//			printf("%d  ", year);
//			count++;
//		}
//		else if (year %400 == 0)
//		{
//			printf("%d  ", year);
//			count++;
//		}
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))//�ڶ��ַ���
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

//int main()//���������������Լ��
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);//�����������ݣ�
//	while (r= m % n)
//	{
//		//r = m % n;//���������һ�Σ����Կ��Լ�Ϊ��������
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//int main()//���������������Լ��
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}//��Ϊ������r=0��0Ϊ�٣���������ѭ��
//	printf("%d\n", n);
//	return 0;
//}

//int main()//��ӡ3�ı��� ��1-100�����е�3�ı���
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

//int main()//�Ӵ�С�����λ��
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);//����ֵ��2 1 3   ���ǰ�������ж��ţ���ô�����ֵ�ʱ��ҲҪ���붺��
//	if (a < b)//�㷨ʵ�� a�з���� b�зŶ��� c�з���С
//	{
//		int tmp = a;//tmp ��һ����ʱ����  tmp��ֵΪ2
//		a = b;//��b��ֵ��ֵ��a  ���Դ�ʱa=1
//		b = tmp;  //��ʱb��ֵ=2
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
//	//printf("%d %d %d\n", c, a, b);//����ֻ�ǰѽ�����򣬲����ܴﵽҪ��
//	return 0;
//
//}
