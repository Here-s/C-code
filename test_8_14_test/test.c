#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
int judge(char* arr1, char* arr2, int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len; i++)
	{
		int tmp = arr1[0];
		for (j = 0; j < len - 1; j++)
		{
			arr1[j] = arr1[j+1];
		}
		//���ַ��������ĵط������ʼ������
		arr1[j] = tmp;
		if (strcmp(arr1, arr2) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char arr[] = "ABCDEF";
	int len = strlen(arr);
	char arr2[] = "ABCDEF";
	int ret = judge(arr, arr2, len);
	printf("%d\n", ret);
	return 0;
}


//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//int main()
//{
//	char arr[] = "ABCDEF";
//	int len = strlen(arr);
//	int k = 0;
//	scanf("%d", &k);
//	k %= len;
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		int tmp = arr[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j+1];
//		}
//		//���ַ��������ĵط������ʼ������
//		arr[j] = tmp;
//	}
//	printf("%s\n", arr);
//	return 0;
//}