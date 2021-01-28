#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
//题目：给定一个非空整数数组，其余元素均出现两次，找出那个只出现了一次的元素
//样例：int a[]={1,2,3,4,5,1,2,3,4},该数组中只有5出现一次，其他数字都是成对出现的，要找出5
int main()//优化方法，可以考虑异或，0^a=a ,3^3^5=5, 3^5^3=5
//所以1 1 2 2 3 3 4 4 5 异或之后为5，即1^1^2^2^3^3^4^4^5=5
{
	int arr[] = { 1,2,3,4,5,1,2,3,4, };
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("单的:%d\n", ret);
	return 0;
}
//int main()//下面是暴力求解
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,};//
//	//找出单的，把每个元素出现几次统计出来
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	for (i = 0; i < sz; i++)
//	{
//		//统计arr[i]在arr数组中出现了几次；count++
//		int count = 0;//计数器
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单的：%d\n", arr[i]); 
//			break;//break-跳出循环,break所在的循环里面不能有；号 不然就意味着循环结束了
//		}
//	}
//
//	return 0;
//}
