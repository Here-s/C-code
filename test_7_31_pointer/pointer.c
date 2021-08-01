#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//指针是编程语言的一个对象，通过指针可以找到内存单元 
//地址指向了一个确定的内存空间，所以地址形象的被成为指针
//指针是个变量 用来存放内存的地址
//int main()
//{
//	int a = 10;//&a  这里拿出来的就是 a 的地址
//	int* pa = &a;//pa是用来存放地址（指针） 所以pa是指针变量 
//	return 0;
//}


//32位机器的指针是4个字节 因为有32根地址线  每根地址线都是由 0 1 构成的二进制序列
//地址编号是由地址线上面的电信号形成了
//作为内存单元的编号 2的32次方个地址 能够管理 2 的32次方个内存单元
//一个字节用一个地址管理



//32位下 指针大小是 4个字节     64位是8个字节

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}


//int main()
//{
//	//int a = 0x11223344;//a的四个字节的内容
//	//char* pc = &a;//虽然是pc类型指针 但是也依然能把a的值存放进去
//	//*pc = 0;//指针类型决定了指针解引用操作的时候，依次访问几个字节（访问内存的大小）
//	////char* 指针解引用 一次可以访问4个字节    int* 指针可以一次访问4个字节
//
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);//地址和pa的一样
//
//	printf("%p\n", pa + 1);//指针向后移动四个字节
//	printf("%p\n", pc + 1);//指针向后移动一个字节
//
//	//指针类型决定了指针 +- 整数的时候跳过了几个字节
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };//40个字节
//	//int* p = arr;//p 指向首元素地址 就是arr[0]  
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = 1;//把数组初始化为 1
//	//}
//
//	char* pa[10] = arr;
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(pa + i) = 1;// 是一个字节一个字节的弄的
//	}
//	return 0;
//}


//有了指针类型 使得访问内存空间更加灵活


//野指针：指针指向的位置不确定

//int main()
//{
//	//int* p;//没有初始化的指针 指向的内存不属于你  未初始化的指针 放的是随机值
//	//*p = 20;//把p中存的随机值作为地址 找到一块空间 这块空间不属于当前的程序 所以这里的修改就是非法访问
//	////造成非法访问 就是野指针
//
//	//指针越界访问 也会造成野指针
//	//int arr[10] = 0;
//	//int i = 0;
//	//int* p = arr;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*p = i;//当 p 等于10的时候 就是越界访问了 就是野指针了
//	//	p++;
//	//}
//	return 0;
//}


//指针空间被释放 也会造成野指针
//int* test()
//{
//	int a = 10;
//	return &a;//int* 类型   a已经被销毁了  但是把a的地址返回去了  此时a的空间已经不属于当前程序
//	//所以就变成了野指针 非法访问
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);//10 是因为这块内存还给了操作系统 但是这个值还没被覆盖 所以还是放的这个值
//	return 0;
//}


//栈上是先用高地址 再使用低地址
int main()
{
	int a = 10;
	int* p = &a;//明确的初始化 确定指向

	int* p2 = NULL;//不知道一个指针一个指向谁的时候 就先初始化为 NULL

	//使用指针之前要进行检查 
	//*p2 = 100;//这个也是错误的 因为空指针不能直接解引用  所以使用指针的时候 加个判断
	//判断内容： 如果这个指针不等于空指针 就解引用
	if (*p2 != NULL)
	{
		*p2 = 100;
	}
	return 0;
}

//指针指向空间被释放的时候 立刻把指针置为NULL  避免野指针   避免返回局部变量的地址
//很多 bug 都是野指针引起的
