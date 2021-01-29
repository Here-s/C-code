#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//类型:char int double....
//人-复杂对象，身高，年龄，身份证号码....
//书-复杂对象，书名，出版社，定价.....
//描述复杂对象--结构体描述--自己创造出的类型
//struct结构体关键字
//创建一个结构体类型
//char name[20];名字
//int age;年龄
//char sex[5];性别
//char id[15];学号
struct Book //这里是书的类型
{
	char name[20];//c语言程序设计
	short price;//55
};//这个分号不可缺少，是用来结束定义
int main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };
	//b1.name = "c++"; //name不是变量是数组名--地址，所以不能这样改
	strcpy(b1.name,"C++" );// 这里是把C++拷贝放入name里面去  strcpy=string copy-字符串拷贝 要改的话，就要这样
	printf("%s\n", b1.name);
	//strcpy是个库函数,所以引用头文件 string.h
	//struct Book* pb =&b1;//struct Book*是一种指针类型
	//利用pb打印出书名和价格
	//  . 操作符应用到结构体变量  . 后面是成员
	// ->结构体指针，指向对象  ->成员
	//printf("%s\n", pb->name);//意思是pb指向b1的name成员
	//printf("%d\n", pb->price);
	////printf("%s\n", (*pb).name);//%s打印书名   这种可以简化，如上
	////printf("%d\n", (*pb).price);
	//printf("书名:%s\n",b1.name);//%s打印字符串
	//printf("价格:%d元\n", b1.price);
	//b1.price = 15;//可以这样改是因为price是变量，name不是变量是数组，所以不能这样改
	//printf("修改后的价格=%d\n", b1.price);
	return 0;
}