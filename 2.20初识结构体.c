#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//数据结构包括：1 线性数据结构： 顺序表（有顺序排列） 链表（分开分布 但是有线联系） 栈（放一个元素  先进去的后出来） 队列  2 树形数据结构：二叉树  
//插入一个元素叫压栈   删除一个元素叫出栈

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()//传参的时候会压栈, 任何一次函数调用都会在内存的栈区申请空间
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret=Add(a, b);
//
//	return 0;
//}

//typedef struct Stu//结构体传参  选地址传过去
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void print1(Stu tmp)//用tmp来接收 想用什么接收就用什么
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//void print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);//
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//
//}
//int main()
//{
//	Stu s = { "李四",40,"15155555555","男" };
//	//为了打印结构体数据 print2 更好 因为第一个穿的时候也会压栈 如果字节大的话 也会耗时间 会降低性能    指针传的时候传的是地址 字节小 快
//	print1(s);
//	print2(&s);
//	return 0;
//}

//结构体成员的访问是通过 . 来访问的

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;//结构体里面包含一个结构体成员
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello byte\n";
//	struct T t = { "haha",{100,"806","hello word",2.50} ,arr};//对它初始化 初始化的第一个元素是ch 接下来是S结构体 所以还须一个大括号 最后一个是pc 给一个空指针
//	printf("%s\n",t.ch);//%s打印的是haha    t.ch 就是t里面的ch元素
//	printf("%s\n", t.s.arr );//t.s就是结构体s
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);//字符串 所以是%s
//	return 0;
//}
//struct Point
//{
//	int x;
//	int y;
//}p1;//声明类型的同时定义变量p1 
//struct Point p2;//定义结构体变量p2
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];//sex描述性别
//}Stu;
//int main()//结构体变量的定义和初始化
//{
//	Stu s1 = {"张三",20,"15135030794","男"};//s1创建的时候给他值 就是初始化 结构体里面放多个元素的时候也是大括号
//	struct Stu s2 = { "旺财",30,"15135030794","保密" };//s1 s1已经初始化
//
//	return 0;
//}

//结构体的成员可以是标量(普通变量)，数组，指针，甚至是其他结构体

//typedef struct Stu//还可以这样写 typedef 就是将这个类型重新起一个名字 
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}Stu;//重新起的名字叫Stu   Stu是类型  这样在下面编译的时候 写Stu就行了

//struct Stu//struct 是个结构体关键字    Stu是结构体标签(想怎么起 就怎么起)这里表示学生的意思   struct Stu-结构体类型
//	//大括号里面是结构体成员   描述学生就是放在这个大括号里面  名字 年龄 电话 性别 
//{
//	char name[20];
//	short age;//年龄 整型 所以是age
//	char tele[12];//12是保证电话录完，还能存一个\0
//	char sex[5];//sex描述性别
//
//}; s1, s2, s3;//这里的分号不可少   s1, s2, s3;  这是全局的结构体变量
//int main()//结构体是一些值的集合  结构的每个成员可以是不同类型的变量
//{//以学生为例
//
//	struct Stu s1;//结构体变量的创建  s是局部的结构体变量
//	Stu s2;
//	return 0;
//}