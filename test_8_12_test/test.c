#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//����Ҫ���д����ʹ��ָ�뷽ʽʵ�������ַ���������(����ʹ��strcat���������������Ӻ���ַ��������
void print(char* arr1, char* arr2)
{
	int i = 0;
	printf("%s", arr1);
	printf("%s", arr2);
}
int main()
{
	char arr1[40] = { 0 };
	char arr2[40] = { 0 };
	gets(arr1);
	gets(arr2);
	print(arr1, arr2);
	return 0;
}


//����Ҫ�������ĳ��վ���û�ע��ģ��дһ������Ϸ��Լ���С���ܡ�
//����վҪ���û����õ���������ɲ�����6���ַ���ɣ�����ֻ����Ӣ����ĸ�����ֺ�С����.
//�����������ĸҲ�����֡�
//�������Ϸ������Your password is wan mei.��
//�������̫�̣����ۺϷ���񣬶����Your password is tai duan le.��
//������볤�ȺϷ��������ڲ��Ϸ��ַ��������Your password is tai luan le.��
//������볤�ȺϷ�����ֻ����ĸû�����֣������Your password needs shu zi.��
//������볤�ȺϷ�����ֻ������û����ĸ�������Your password needs zi mu.��
//int main()
//{
//	int N = 0;
//	char arr[80] = { 0 };
//	scanf("%d", &N);
//	getchar();
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		gets(arr);
//		if (strlen(arr) < 6)
//		{
//			printf("Your password is tai duan le.\n");
//		}
//		else
//		{
//			int count = 0;
//			int digit = 0;
//			int word = 0;
//			int complex = 0;
//			for (int j = 0; j < strlen(arr); j++)
//			{
//					if (arr[j] >= 48 && arr[j] <= 57)
//					{
//						count++;
//						digit++;
//					}	
//					else if ((arr[j] >= 65 && arr[j] <= 90) || (arr[j] >= 97 && arr[j] <= 122))
//					{
//						count++;
//						word++;
//					}
//					else if (arr[j] == 46)
//					{
//						count++;
//					}
//					else
//					{
//						complex++;
//					}
//			}
//			if (digit == 0)
//			{
//				printf("Your password needs shu zi.\n");
//			}
//			else if (word == 0)
//			{
//				printf("Your password needs zi mu.\n");
//			}	
//			else if (complex != 0)
//			{
//				printf("Your password is tai luan le.\n");
//			}
//			else if (count == strlen(arr))
//			{
//				printf("Your password is wan mei.\n");
//			}
//		}
//	}
//	return 0;
//}