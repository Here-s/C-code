#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//��������������Ԫ�صĵ�ַ�����������⣩
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//����1 sizeof����������-��������ʾ��������  sizeof�������������������������Ĵ�С ��λ���ֽ�
//	//����2 &������  �����������������飬&������ ȡ��������������ĵ�ַ
//	printf("%p\n", arr);//%p ��ӡ��ַ
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);//����ĵ�ַ
//
//	return 0;
//}

//int main()//������
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);
//	printf("%p\n",&arr[0]);//��������ͬ
//	printf("%d\n", *arr);//*arr  ���ַ�����Ӧ����1
//	return 0;
//}

//void bubble_sort(int arr[],int sz)//�б׶˾��Ǿ�����˳��ҲҪ������һ��
////ð����������������ڵĺ����Ƚ�  10 9 8 7 6 5 4 3 2 1 
//{//ȷ��ð����������� n��Ԫ�أ�n-1��
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//���ﲻ����Ԫ�ظ���
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������
//		int flag = 1;//������һ��Ҫ����������Ѿ����� Ϊ����������ִ��Ч��
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j]> arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//������������ݲ���ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()//������Ϊ��������  ð�ݺ����������������������
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr���������ų�����
//	bubble_sort(arr,sz);//ð�ݺ��� ��arr���д��Σ�����ȥ������Ԫ�صĵ�ַ
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
