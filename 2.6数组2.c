#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//数组名是数组首元素的地址（有两个例外）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//例外1 sizeof（数组名）-数组名表示整个数组  sizeof（数组名）计算的是整个数组的大小 单位是字节
//	//例外2 &数组名  数组名代表整个数组，&数组名 取出的是整个数组的地址
//	printf("%p\n", arr);//%p 打印地址
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);//数组的地址
//
//	return 0;
//}

//int main()//数组名
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);
//	printf("%p\n",&arr[0]);//输出结果相同
//	printf("%d\n", *arr);//*arr  解地址，结果应该是1
//	return 0;
//}

//void bubble_sort(int arr[],int sz)//有弊端就是就算是顺序也要继续算一遍
////冒泡排序就是两两相邻的函数比较  10 9 8 7 6 5 4 3 2 1 
//{//确定冒泡排序的趟数 n个元素，n-1趟
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//这里不能算元素个数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int flag = 1;//假设这一趟要排序的数据已经有序 为了提升代码执行效率
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j]> arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()//数组作为函数参数  冒泡函数，将整型数组进行排序
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	bubble_sort(arr,sz);//冒泡函数 对arr进行传参，传过去的是首元素的地址
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
