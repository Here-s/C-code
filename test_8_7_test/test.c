#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//下列程序段的输出结果为
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;//pulPtr指向数组的第一个元素 
//	*(pulPtr + 3) += 3;//解引用拿到的是9 然后+=3 得到的是12
//	printf("% d  % d\n", *pulPtr, *(pulPtr + 3));//输出 6 12
//	return 0;
//}


//下列程序的输出结果是
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//void fun(struct stu* p)
//{
//    printf(" % s\n", (*p).name);//wang 是第二个的name
//    return;
//}
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18}};
//    fun(students + 1);//因为指针+1 指向写一个结构体数组 所以传的是第二个结构体
//    return 0;
//}


//二级指针也是指针 大小也是4或8个字节
//二级指针用来保持一级指针的地址
//指针 - 指针 得到的是指针和指针之间的字节个数


//int main()
//{
//	int* arr1[10];//是一个指针数组 因为是一个数组 存放的是int* 指针
//	int(*arr4)[10];//是一个数组指针  *arr说明arr是一个指针 剩下的就是数组了
//	//因为是一个指向数组的指针
//	return 0;
//}


//gets 是读取一行字符串  对于字符串 进了函数也可以用strlen求长度


//打印菱形图案  每次的* 比上一行多2 或少2
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)//n 行
//	{
//		int j = 0;
//		for (j = 0; j < n - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)// *2 每次多打印一个
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (n - i - 1) - 1; j++)//每次少打印两个 所以再 -1
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//n个空瓶
//	int count = n;
//	int bottle = 0;//多余的空瓶
//	while (n > 1)
//	{
//		bottle = n % 2;
//		n /= 2;
//		count += n;
//		n += bottle;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//也能这样写
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	if (money >= 1)
//	{
//		total = 2 * money - 1;
//	}
//	else
//	{
//		total = 0;
//	}
//	printf("%d\n", total);
//	return 0;
//}


//调整数组使奇数全部都位于偶数前面
//可以先遍历一遍 把奇数 偶数 都放到一个新的数组  然后再把新的数组拷回去
//好的方法 从前往后遍历一遍 如果是奇数的话 就和后面的偶数交换一下

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		while ((left < right) && arr[left] % 2 == 1)//从前往后找到了偶数
		{
			left++;
		}
		while ((right > left) && arr[right] % 2 == 0)//从后向前找到了奇数
		{
			right--;
		}
		//交换
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	//全为奇数  全为偶数  奇偶交替
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}