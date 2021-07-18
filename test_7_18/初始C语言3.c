#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#define定义常量和宏

//#define定义常量
//#define NUM 1000
//int main()
//{
//	int a = NUM;
//	printf("%d\n", a);//#define定义NUM为1000 
//	return 0;
//}

//#define 定义宏
//#define ADD(X,Y) ((X)+(Y))//定义宏 输出 X+Y
//int Add(int x, int y)//这里是用函数实现的加法
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum1 = Add(a, b);
//	int sum2 = ADD(a, b);
//	printf("%d\n", sum1);
//	printf("%d\n", sum2);
//	return 0;
//}
//编译范围三个步骤   先预编译 然后编译 最后汇编


//指针
//内存是电脑上的存储器 程序的运行都是内存中进行的  程序都是加载在内存当中运行的
//为了更好的使用内存，我们将内存划分为有效的格子 各自编号 方便管理   每个格子就是内存单元
//每个内存单元的编号 就是地址  每个内存单元的大小就是一个字节  在计算机中 有地址线 就是1/0构成
//32位的电脑的话 有32根地址线  就是有2^32种地址  就能管理2^32个字节  

//%s - 字符串
//%c - 字符
//%d - 有符号的整型
//%f - 单精度浮点数
//%lf- 双精度浮点数
//%p - 地址的16进制表示形式
//int main()
//{
//	int a = 10;//创建a变量 四个字节 占四个内存单元   通过地址找到原来的空间
//	//printf("%p\n",&a);//&取地址操作符 取出a所占内存中4个字节中第一个字节的地址
//	int* pa = &a;//也是一个数值 也可以存起来  存在pa里面 pa是用来存放a的地址  * 说明pa变量是一个指针变量
//	//int* 说明pa的类型是int*  int是说明pa指向的对象是int  pa就是有个指针变量 
//	//指针变量是一种变量 这个变量是用来存放地址 需要找一块空间的时候 就用到地址
//	//存放地址是为了以后通过地址找到原来的对象
//	*pa = 20;//*是解引用操作符  通过pa里面存的地址找到原来的a  这里就相当于a被改成20了
//	printf("%d\n", a);
//
//	//char ch = 'w';
//	//char* pc = &ch;
//	double d = 3.14;
//	double* pd = &d;//pd就是指针变量    指针出现之后 为了方便
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	return 0;
//}

//int main()
//{
//	int a = 10;//会分配空间 有自己的编号
//	printf("%p\n", &a);//打印出的是第一个字节的地址
//	return 0;
//}

//指针变量的大小
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//pc存放的是 ch的地址 地址就是编号  当我们存放有个地址的时候 地址大小是4个字节
//	//所以指针变量也是4个字节 这是在32位环境下 因为是由地址线决定的 32位环境下32个比特位存储 所以是4个字节
//	//
//	printf("%d\n", sizeof(pc));//4 
//	return 0;
//}


//结构体
//人是复杂对象 因为有名字 电话 性别 年龄 地址 
//书也是复杂对象 因为有书名 作者 定价 出版社 书号
//为了解决这种复杂对象  就要用到结构体 结构体关键字 struct

//先创建一个书的类型  书名+定价+书号
struct Book//自己定义的一个类型
{
	//书名 C语言程序设计
	char name[30];
	float price;//定价
	char id[20];//书号
};
void print(struct Book* pb)//因为b1 是结构体变量 所以用结构体指针来接收
{
	printf("书名: %s\n", (*pb).name);
	printf("定价：%f\n", (*pb).price);
	printf("书号：%s\n", pb->id);//这个写法是另外一种写法  针对结构体指针的一种写法
	//结构体指针->成员名
}
int main()
{
	//结构体变量的创建和初始化
	struct Book b1 = { "C语言程序设计",55.0f,"C2222" };//创建b1 并且在等号后面初始化
	struct Book b2 = { "数据结构",60,"D1234" };
	struct Book b3 = { "Mysql数据库",75.0f,"E3225" };
	printf("书名：%s\n", b1.name);//打印b1的名字的时候 要用.来找结构体对应的东西
	//结构体变量. 成员名
	printf("定价：%f\n", b1.price);
	printf("书号：%s\n", b1.id);
	print(&b1);
	return 0;
}