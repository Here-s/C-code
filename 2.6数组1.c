#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//�����ʼ�����ڴ���ʱ�����������һЩ�����ʼֵ����ʼ����
//��ά������˳��洢��

int main() //��ά����Ĵ���
{
	//int arr[3][4];//�������������е�Ԫ��
	//char ch[5][6];
	//int arr[3][4] = { 1,2,3,4,5 };//��ά���鲻��ȫ��ʼ����ʱ��ʣ�µ�Ҳ��0
	//int arr[3][4] = { {1,2,3},{4,5} };//��123���ڵ�һ�� 45���ڵڶ���
	//int arr[][] = { 1,2,3,4,5,6,7,8 };//�������ԣ���Ϊȱ���±�  �п���ʡ�� ��һ������ʡ�ԣ����ܶ�����
	//int arr[2][4] = { {1,2,3,4},{5,6,7,8} };
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)//�е��±���i
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n",i,j &arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

//int main()//һά�������ڴ��еĴ洢  �������ڴ�����������ŵ�
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);//��ӡ��ַ %p
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "zxcvbn";//[z][x][c][v][b][n][\0]
//	//printf("%c\n", arr[3]);%c��ӡ�ַ�  %d������
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//15 �����ֵ����ΪҪ�ҵ�\0
//
//}
//
//int main()//������һ����ͬ����Ԫ�صļ���
////type_t��ָԪ�����ͣ� arr_name��ָ��������  [const_n]��һ���������ʽ������ָ�������С
//{
//	//����Ӧ��������10������
//	int arr[10] = { 1,2,3 };//�����ǲ���ȫ��ʼ��  ʣ�µ�Ԫ�� Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5];//char ��������ַ�  ��������ŵ��ǳ����������Ǳ���
//	char arr3[] = "dsfcds";//δָ����С �����ʼ�� ���һ���ַ�����\0
//	printf("%d\n", sizeof(arr3));//sizeof ���� ���� ���� ���͵Ĵ�С����λ���Լ�
//	printf("%d\n", strlen(arr3));//strlenֻ���ַ����й� �⺯�� Ҫ��ͷ�ļ�
//	return 0;
//}
