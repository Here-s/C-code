#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>


//动态内存分配  动态的维护空间大小  以达到需求
//写了 malloc 之后 也要写 free

//int main()
//{
//	int n = 10;//固定 4 个字节
//	//int arr[10];//40 个字节   都是固定死的
//	
//	//栈区：放局部变量  函数形参  临时变量
//	//堆区：动态内存分配   malloc  calloc  realloc  free  
//	//静态区：静态变量（static）  全局变量
//
//	//malloc 来申请空间   申请 size 个空间
//	int* arr = (int*)malloc(40);//开辟40个字节的空间  空间类型是 int  申请的空间是连续的
//	//如果申请失败的话 就是空指针
//	if (*arr == NULL)
//	{
//		return -1;
//	}
//	//开辟成功
//	for (int i = 0; i < 10; i++)
//	{
//		*(arr + i) = i;
//	}
//
//	//free 释放空间  给 free 的一定是 动态空间的起始地址
//	free(arr);//把 malloc 申请的空间 全部还回去 也就是全部释放
//
//	//arr 赋为 NULL　让 arr 找不到刚刚的空间  从而避免野指针
//	arr = NULL;
//	return 0;
//}


//calloc 也是用来动态内存分配的   也是有两个参数  开辟一个数组 在内存当作 初始化每个元素
//也是在堆区上申请空间 并且初始化为 0 并且返回起始地址

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("空间开辟失败\n");
//		printf("%s\n",strerror(errno));
//		return -1;
//	}
//	//申请成功
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ,", *(p + i));//打印出来都是 0 因为是 calloc
//	}
//	free(p);
//	return 0;
//}


//realloc  管理内存 让内存管理变得更加灵活   对动态内存空间大小的调整
//有两个参数  一个是指针 之前开辟的内存块    另外一个是无符号数 也就是新的大小 单位是字节
//返回的是调整之后的起始元素的地址    缩容也是 realloc 

//int main()
//{
//	//申请10个 int 的空间
//	int* p = (int*)calloc(10, sizeof(int));
//	//申请成功
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ,", *(p + i));
//	}
//	//空间不够 增加到 20个 int
//
//	//realloc调整空间的时候  可能这块空间后面的空间不够用 那就去找到一个够两倍大小的空间
//		//然后重新把之前的内容拷贝过来 然后释放掉原来的空间  然后把新开辟的空间的地址返回去
//	//如果空间足够的话 直接在后面追加空间
//
//	//realloc 会返回地址  地址可能是旧的地址 也可能是新的地址 所以要接收返回值
//	//不能放在 p 里面 因为如果开辟失败 那么原来的指针也变成 NULL 了
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	if (ptr == NULL)
//	{
//		printf("空间增容失败\n");
//		p = ptr;
//	}
//	else
//	{
//		//ptr是空指针 返回-1
//		return -1
//	}
//	//增容成功
//	for (int i = 10; i < 20; i++)
//	{
//		*(ptr + i) = i;
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//	return 0;
//}


//常见的关于动态内存的错误

//1 对空指针的解引用操作
//int main()
//{
//	int* p = (int*)malloc(20);
//	//一定要判断是否为 空指针
//	if (p == NULL)
//	{
//		return -1;
//	}
//	*p = 0;//有风险 因为如果开辟失败的话 就是对空指针解引用的操作  所以一定要判断是否是空指针
//	return 0;
//}

//2 对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(200);
//	if (p == NULL)
//	{
//		return -1;
//	}
//	//因为是 200 个字节 是 50 个整型 所以这里就越界访问了  程序就会崩溃
//	for (int i = 0; i < 80; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3 对非动态内存的 free 也会导致程序崩溃
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p == NULL;
//	return 0;
//}

//4 使用 free 释放一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return -1;
//	}
//	//使用
//	for (int i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//这里的 p 已经变了  已经没有指向p开始的位置了 指向了这段开辟的内存的后一部分
//	//只要 p 不是指向起始地址 程序就会崩溃
//	free(p);
//	p = NULL;
//	return 0;
//}

//5 对同一块空间多次释放
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return -1;
//	}
//	//使用...
//
//	//释放
//	free(p);
//	p = NULL;
//	free(p);
//	//两次连续释放就会出问题  就会导致程序挂掉  当 p 指向 NULL 的时候 还可以继续释放
//	//所以每次释放之后 都要把 指针的指向 置为 NULL
//	return 0;
//}


//6 动态内存忘记释放   就是内存泄露  就是别人使用不了
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return -1;
	}
	//忘记释放了  在堆区上申请的空间  有两种回收的方式  1 是通过 free 来回收    
	//2 当程序退出的时候  操作系统自动回收
	free(p);
	//释放之后不置为 NULL p 就是一个野指针
	p = NULL;
	//现在 p 就是一个空指针 不是野指针
	return 0;
}