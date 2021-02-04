#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>//使用sqrt函数的头文件


void Add(int*p)//不需要返回值，所以是void
{
	(*p)++;//这里的++是作用于p，不是*p，所以应该括起来
}
int main()
{
	//写一个函数，每调用一次这个函数，就会将num的值+1
	int num = 0;
	Add(&num);//因为要增加1，所以拿这个函数操作外面的数值，传址方式
	printf("num=%d\n", num);//1
	Add(&num);
	printf("num=%d\n", num);//2
	return 0;
}

//int binary_search(int arr[],int k,int sz)//设计binary_search  函数  本质上这里的arr是个智障，因为指针才能接受地址
//{
//	//算法的实现  根据下标  二分法来算 左右下标
//	//int sz = sizeof(arr) / sizeof(arr[0]);//因为是指针，所以sizeof(arr) 的指针大小是4，除的那个也是4，所以结果是1，不能求得元素个数
//	//因为传进函数不能算，所以就外面算元数个数
//	int left = 0;
//	int right = sz-1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;//中间元素下标
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
//		}
//	}
//	return -1;//因为找完也没找到，所以返回-1
//}

//int main()//写一个函数，实现一个整形有序数组的二分查找
//{//二分查找是在一个有序数组中查找具体的某个数 如果找到了，返回这个数的下标，找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//这里传递过去的是数组首元素的地址
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);//二分查找  binary是二进制的意思   从arr数组中查找，找k   用int ret 接受返回值
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);//因为ret 接受了返回值
//	}
//	return 0;
//}

//int is_leap_year(int y)//不要在这种函数里面打印
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))//&&并且的意思 || 或者的意思
//		return 1;
//	else
//		return 0; 
//}
//int main()//写一个函数判断一年是不是闰年
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//先判断year是否为闰年
//		if (is_leap_year(year) == 1)//这里是是否为闰年的意思
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int is_prime(int n)//这里是吧i传过来  因为返回值是整形  所以是int
//{
//	//是素数返回1，不是则返回0
//	//所以这里用2到n-1来试出素数
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)//sqrt 开平方的意思
//	{
//		if (n % j == 0)//等于0 说明被整除了，所以不是素数
//			return 0;//返回0，所以为假，所以函数为假，函数为假，就不需要break了
//	}
//	//这里是j=n的情况,所以为素数，所以返回1
//	return 1;
//}
//int main()
//{
//	//打印100-200之间的素数，先求出100-200的数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)//prime 用来判断是否为素数  素数 只能被1和他自己整除
//			printf("%d ", i);
//
//	}
//	return 0;
//}

//int is_prime(int n)//这里是吧i传过来  因为返回值是整形  所以是int
//{
//	//是素数返回1，不是则返回0
//	//所以这里用2到n-1来试出素数
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)//等于0 说明被整除了，所以不是素数
//			return 0;//返回0，所以为假，所以函数为假，函数为假，就不需要break了
//	}
//	//这里是j=n的情况,所以为素数，所以返回1
//	return 1;
//}
//int main()
//{
//	//打印100-200之间的素数，先求出100-200的数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)//prime 用来判断是否为素数  素数 只能被1和他自己整除
//			printf("%d ", i);
//
//	}
//	return 0;
//}