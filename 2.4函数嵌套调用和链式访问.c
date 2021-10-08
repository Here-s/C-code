#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//函数的声明与定义  如果加法的实现是一个独立模块，那么函数说明放在头文件 就是 .h  引用自己写的头文件用#include"XXXX"，函数的实现放在.c文件中
//函数说明  int Add(int x,int y);
//int Add(int x, int y)   函数的实现
//{
//	int z = x + y;
//	return z;
//}
//加法 add  减法 sub  乘法 mul 除法 div


int Add(int x, int y)//放到前面来就不用声明
{
	int z = x + y;
	return z;
}
int main()//函数的声明与定义
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);//Add未定义是因为代码是从上往下扫描，所以会显示这样，所以
	printf("%d\n", sum);
	return 0;

}


//int main()
//{
//	printf("%d", printf("%d", printf("%d",43)));
//	return 0;
//}
//int main()
//{
//	//链式访问；把一个函数的返回值作为另外一个函数的参数
//	//法1
//	//int len = 0;
//	//len=strlen("abc");//strlen求字符串长度
//
//	printf("%d\n", len);
//	//法2
//	printf("%d\n", strlen("abc"));//这样可以之间打印，不需要把strlen放在len里面再打印len
//	return 0;
//}
