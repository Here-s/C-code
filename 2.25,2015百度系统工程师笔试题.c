#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



int check_sys()//优化后的结果
{
	int a = 1;
	return *(char*)&a;//因为将a的地址强制转换为char  然后解引用 访问的就只有一个字节  是多少 就返回多少
	//1 指针的类型决定了指针解引用能访问几个字节：char* p；*p访问了一个字节，int* p；*p访问四个字节
	//2 指针类型决定了指针+1，-1，截断或减的是几个字节；char* p；p+1，跳过一个字节，int* p；p+1跳过四个字节
}

//int check_sys()//还能优化
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;//因为是1 所以大小端只有可能是1   0 所以返回*p就行了 
//
//}

//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//		if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
int main()
{
	int ret = check_sys();//如果返回1 代表小端  返回0 代表大端
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}

//题目：请简述大端字节序和小端字节序的概念，设计一个小程序来判断当前机器的字节序

//大端（存储）模式，是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址中 
//小端（存储）模式，是指数据的低位保存在内存的低地址中，而数据的高位，保存在内存的高地址中
//存在内存中 因为也要拿出来 所以就有了存的格式   就是大端模式  小端模式
//例如  0x11 22 33 44  四个字节  44是低位  11是高位   把低位保存在高地址中 就是大端存储模式  所以存的就是11 22 33 44    小端存储模式存的就是 44 33 22 11

//int main()//这个小程序的意思是，写一段代码，告诉我们当前机器的字节序是什么
//{   弄成一个函数
//	int a = 1;//小端存储就是01 00 00 00  大端就是00 00 00 01   所以 如果第一个字节放的是14 那么就是小端
//	char* p = (char*)&a;//指针的类型决定了指针解引用能得到几个字节 所以char类型的指针   但是编译器会警告 int和char不兼容  所以(char*) 强制类型转换
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}