#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//避免野指针  1 指针初始化   2 小心指针越界   3 指针指向空间释放即使置NULL  3 指针使用之前检查有效性

int* test()//因为返回来是地址 所以是int*
{
	int a = 10;
	return &a;//当函数使用完之后 就清零了 所以返回去之后再使用已经清零了
}
int main()//指针指向的空间被释放  也会导致野指针
{
	int* p=test();
	*p = 20;//使用的空间已经被释放了 所以也是野指针
	return 0;
}

//int main()//指针越界访问 也会导致野指针
//{
//	int arr[10] = { 0 };//这个数组有十个元素
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;//p指向了arr空间后面的位置 所以被叫为野指针
//	}
//	return 0;
//}

//int main()//野指针  就是指针指向的位置是不可知的（随机的，不正确的，没有明确限制的）
//{//指针未初始化，就会导致野指针
//	//int a;//局部变量不初始化 默认是随机值
//	int* p;//局部的指针变量  未初始化  所以是随机值
//	*p = 20;//随机在内存中找了个空间放进去 
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = 1;//这里不能  因为char是一个字节 每次只改一个  但是int 有40个 这里循环10次 所以只改前10个
//
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };//在内存中开辟了40个字节
//	int* p = arr;//数组名 存放的是首元素的地址
//	int i = 0;//假设把数组内容全部改成1
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = 1;//相当于把整型元素改成1了   通过循环把每个元素都改成1
//
//	}
//	return 0;
//}

//int main()//指针 +- 整数       指针类型决定了 指针走一步走多远（指针的步长）
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);//%p 打印指针的意思
//	printf("%p\n", pa+1);//整型+1加的是4个指针
//
//	printf("%p\n", pc);//char类型+1加的是一个字节   double是8个字节
//	printf("%p\n", pc+1);
//
//	return 0;
//}

//int main()//指针和指针类型     指针类型决定了指针进行解引用操作的时候 能够访问空间的大小    以后不同的空间使用不同的值
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));//算出是4 是因为当前是32位平台 所以算出来是指针大小是4
//	int a = 0x11223344;//指针大小一样 但还要分指针类型是因为
//	//int* pa=&a;//取a的地址放到pa里面
//	//*pa = 0;//将内存里面的值全部改成0
//	char* pc = &a;
//	*pc = 0;//只把44 33 22 11变成了00 33 22 11 只变了一个字节 因为char只向内存申请一个字节 int申请四个字节 所以4个都是0 所以会有这样的区别
//	//double的时候可以访问8个字节  short是两个字节
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);//虽然类型不一样 但是还能存储
//
//	return 0;
//}

//int main()// 内存的小格子 分成地址 把地址放在指针里面 指针是个变量
//{
//	//指针是个变量 用来存放单元的地址 存放在指针里的值 被当成地址处理   指针是唯一表示一块儿地址空间的
//	int a = 10;
//	int* p = &a;//p是指针变量 用来存放地址  int*是指针类型
//	return 0;
//}
