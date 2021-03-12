#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>



void move(int arr[],int sz)//实现方法可以参考 从前往后找偶数 从后往前找奇数 找到后交换一下 所以就实现了 一对一对的实现
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		while ((left<right)&&arr[left] % 2 == 1)//从左边找到偶数  加上左边<右边是防止里面都是奇数
		{
			left++;//如果全是奇数的时候left会越界访问 所以 left<right
		}
		while ((left<right)&&arr[right] % 2 == 0)//从右边找奇数   加上左边<右边是防止里面都是偶数
		{
			right--;
		}
		if (left < right)//
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()//调整数组使奇数全部位于偶数前面
// 题目 输入一个整数数组 实现一个函数 来调整该数组中数字的顺序使得数组中所有的奇数卫衣数组前半部分 偶数位于后半部分
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);//打印arr 也得知道数组个数 所以也要有sz
	return 0;
}

//int my_strlen(const char* str)//arr是首元素地址 所以拿char*来接收  求字符串长度  不希望被改变 所以  + const
//{
//	int count = 0;
//	assert(str != NULL);//保证指针有效性
//	while (*str != '\0')
//	{
//		count++;//循环一次加一个数
//		str++;
//	}
//	return count;
//}
//int main()//模拟实现strlen
//{
//	char arr[] = "byte";
//	int len=my_strlen(arr);//strlen 是求字符串长度的
//	printf("%d\n", len);
//	return 0;
//}

//F5 是开始调试 不执行
//int main()//解释错误 
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("byte dance");// 因为先定义的i=0 在内存中 放在i=12 的位置 所以当i=12的时候刚好又初始化为0 所以就变成死循环了
//	}
//	return 0;
//}