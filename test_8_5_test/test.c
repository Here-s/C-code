#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>



//ʵ��strcpy ����
char* my_strcpy(char* arr2, const char* arr1)
{
	assert(arr2 != NULL);
	assert(arr1 != NULL);
	char* dest = arr2;
	while (*arr2++ = *arr1++)
	{
		;
	}
	return dest;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[10] = { 0 };
	char* ret = my_strcpy(arr2, arr1);
	printf("%s\n", ret);
	return 0;
}


//ʵ��strlen ����
//unsigned int my_strlen(const char* arr)
//{
//	assert(arr != NULL);
//	int count = 0;
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//�������������ͼ��
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		//�ո��� 2i-1
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			if (i == 0 || i == n - 1)
//			{
//				for (j = 0; j <= i; j++)
//				{
//					printf("* ");
//				}
//				printf("\n");
//			}
//			else
//			{
//				for (j = 0; j < 2*(i+1) - 1; j++)
//				{
//					if (j == 0 || j == 2 * i)
//					{
//						printf("*");
//					}
//					else
//					{
//						printf(" ");
//					}
//				}
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}