#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
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
		//把字符串最后面的地方换成最开始的字面
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


//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
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
//		//把字符串最后面的地方换成最开始的字面
//		arr[j] = tmp;
//	}
//	printf("%s\n", arr);
//	return 0;
//}