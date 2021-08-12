#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//本题要求编写程序，使用指针方式实现两个字符串的连接(不能使用strcat函数），并将连接后的字符串输出。
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


//本题要求你帮助某网站的用户注册模块写一个密码合法性检查的小功能。
//该网站要求用户设置的密码必须由不少于6个字符组成，并且只能有英文字母、数字和小数点.
//还必须既有字母也有数字。
//如果密码合法，输出Your password is wan mei.；
//如果密码太短，不论合法与否，都输出Your password is tai duan le.；
//如果密码长度合法，但存在不合法字符，则输出Your password is tai luan le.；
//如果密码长度合法，但只有字母没有数字，则输出Your password needs shu zi.；
//如果密码长度合法，但只有数字没有字母，则输出Your password needs zi mu.。
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