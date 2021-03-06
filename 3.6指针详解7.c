#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>






struct Stu
{
	char name[20];
	int age;
};
void Swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width,int(*cmp)(void*e1,void*e2))
//实现bubble_sort函数的程序员，他是否知道为了排序的数据类型。不知道
//程序员也不知道待比较的两个元素的类型
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1 - i ; j++)
		{
			if (cmp((char)base+j*width,(char*)base+(j+1)*width) > 0)//用char*来跳过字节，每次跳一个字节，结合wid宽度，就知道每次跳几个字节了，比如宽度是8个，一次就是跳过8个代码
				//因为是char每次跳过一个字节，所以是以1为单位，方便比较
			{//交换
				Swap((char)base + j * width, (char*)base + (j + 1) * width,width);//swap，交换两个函数的地址 也应该吧宽度传过去，不然不知道交换几个字节
			}
		}
	}
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//使用bubble_sort的程序员一定知道自己排序的是什么数据，就应该知道如何比较待排序数组中的元素
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
}
//void test5()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]),cmp_stu_by_name);
//}
int main()
{
	test4();
	return 0;
}