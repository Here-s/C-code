#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
int main()
{
	char arr[] = "ABCDEF";
	int len = strlen(arr);
	int k = 0;
	scanf("%d", &k);
	k %= len;
	char* arr1 = (char*)malloc(k * sizeof(char));
	int i = 0;
	//把旋转的放到另外一个数组里面
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


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
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