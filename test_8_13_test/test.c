#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
int main()
{
	char arr[] = "ABCDEF";
	int len = strlen(arr);
	int k = 0;
	scanf("%d", &k);
	k %= len;
	char* arr1 = (char*)malloc(k * sizeof(char));
	int i = 0;
	//����ת�ķŵ�����һ����������
	for (i = 0; i < k; i++)
	{
		arr1[i] = arr[i];
	}
	for (i = 0; i < len - k; i++)
	{
		arr[i] = arr[k + i];
	}
	for (i = 0; i < k; i++)
	{
		arr[len - k + i] = arr1[i];
	}
	printf("%s\n", arr);
	return 0;
}


//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) && ((e == 4) + (a == 1) == 1))
//						{
//							if ((a * b * c * d * e) == 120)
//							{
//								printf("%d %d %d %d %d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}