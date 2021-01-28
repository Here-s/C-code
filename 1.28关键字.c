#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
extern int Add(int, int);
int main()//static 还能修饰函数,也是改变了函数的作用域-说法不准确，应该是下面
//static修饰函数改变了函数的链接属性
//普通的函数有外部链接属性，被static修饰之后就变成内部连接属性了，即不能引用
{
	int a = 10;
	int b = 20;
	int sum =Add(a, b);//用Add这个函数必须要声明外部函数
	printf("sum=%d\n", sum);
	return 0;
}

//int main()//static修饰全局变量，改变了作用域-让静态的全局变量只能在自己所在的源文件内部使用
////出了源文件就不能使用了
//
//{
//	//extern-声明外部符号
//	extern int g_var;
//	printf("g_var =%d\n", g_var);
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a是局部变量,加上static就是静态的局部变量了，a不销毁，上次的数值保留
//	a++;
//	printf("a=%d\n", a);
//}
//int main()//关键字static 修饰局部变量，局部变量的生命周期变长，出了作用域不销毁
//{
//	int i= 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()//typedef-类型定义-类型重定义
//{
//	typedef unsigned int u_int;
//	unsigned int num = 20;//觉得unsigned int 太长，所以拿typedef重定义为u_int
//	u_int num2 = 20;
//
//	return 0;
//}
//关键字不能与变量名冲突
//int main()//
//{
//	//register int a = 10;//局部变量-自动变量-auto   建把a定义成寄存器变量
//	int a = -10;
//	a = -2;
//	//int 定义的变量是有符号的  int=signed int
//	//signed int;
//	unsigned int num = 0;//无符号数，即使放个-1进来，也被当作是正数
//	//struct-结构体关键字
//	//union-联合体/共用体
//
//	return 0;
//}

