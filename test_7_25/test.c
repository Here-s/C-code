#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//�ػ�����
//int main()
//{
//	char arr[30] = "������";
//	system("shutdown -s -t 60");
//again:
//	printf("��ĵ��Խ���һ�����ڹػ��������롰��������ȡ���ػ�\n");
//	scanf("%s", arr);
//	if (strcmp(arr, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//��������Ϸ

//void menu()
//{
//	printf("***************************\n");
//	printf("****  1. play  0. exit  ***\n");
//	printf("***************************\n");
//}
//void game()
//{
//	printf("��������Ϸ\n");
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("������Ҫ�µ�����\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;	
//	do
//	{	menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		}
//	} while (input);
//	return 0;
//}


//���ֲ���
//int binary(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��� �±��� %d", ret);
//	}
//	return 0;
//}