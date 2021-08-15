#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个
//函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。时间复杂度 O(row + col)
void judge()
{
	int k = 0;
	scanf("%d", &k);
	int arr[256][256] = { 0 };
	int i = 0;
	for (i = 0; i < k; i++)
	{
		int j = 0;
		for (j = 0; j < k; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int a = 0;
	printf("请输入查找的数\n");
	int flag = 0;
	for (i = 0; i < k; i++)
	{
		int j = 0;
		for (j = 0; j < k; j++)
		{
			if (arr[i][j] == a)
			{
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1)
	{
		printf("含有该整数\n");
	}
	else
	{
		printf("不含有该整数\n");
	}
}
int main()
{
	judge();
	return 0;
}



//下面程序的运行结果是什么
//int main()
//{
//	int i, j, a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)//只有结果为0 的时候才不会执行 当为1 的时候 就break掉
//				break;
//			a++;
//		}
//		a++;
//	}
//	printf("%d\n", a);//4 因为if的判断是所有的非0 表示真
//	return 0;
//}


//下列代码的运行结果是什么
//int main()
//{
//	int a[] = { 2,4,6,8,10,12,14,16,18,20,22,24 }, * q[4], k;
//	int i, j = 0;
//	for (k = 0; k < 4; k++) 
//	{
//		q[k] = &a[k * 3];
//	}
//	printf("%d\n", q[3][1]);//输出22 因为q[3][1] 的结果是这个值往后移一位。
//	return 0;
//}
