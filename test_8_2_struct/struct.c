#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//结构是一些值的集合 将这些值放在一起 
//结构体(struct)  是用来描述一些复杂对象 将复杂对象放在一起

//结构体类型 结构体创建的时候 就在内存当中占用内存了
//struct Book
//{
//	char name[20];
//	char author[15];
//	float price;
//};
//struct Point
//{
//	int x;
//	int y;
//}p1,p2;//这里就是那结构体类型直接创建的变量 是全局变量  放在静态区
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//}Stu;//通过 typedef 把这个结构体重命名为 Stu   使用typedef之后 就不能创建全局变量了
//
//struct Book b3;//这里也是全局变量
//
//int main()
//{
//	struct Book b = { "MYSQL","Here",50.2 };//通过类型 创建了 b   b是创建的变量
//	//局部变量在栈区
//
//	//struct B//结构体也可以创建在main里面 但这是个局部的结构体 只能在main 里面使用
//	//{
//	//	char name[20];
//	//	char author[15];
//	//	float price;
//	//};
//
//	struct Stu s2 = { "张三",20,"200000000" };//不使用 typedef 创建变量
//	Stu s1 = { "李四",21,"22222222" };//通过typedef 起名的Stu 创建    这里顺便初始化
//
//	struct Point p = { 0 };//全部初始化为 0 
//
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//struct T
//{
//	struct S s;
//	char name[20];
//	int num;
//};
//int main()
//{
//	//结构体里面嵌套结构体的话  继续加大括号 对里面的结构体初始化
//	struct T t = { {10,'c',3.14},"张三",30 };
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//struct T
//{
//	struct S s;
//	char name[20];
//	int num;
//};
//int main()
//{
//	struct T t = { {100,"w",3.14},"张三",20 };
//	printf("%d %c %f %s %d\n", t.s.a, t.s.c, t.s.d, t.name, t.num);
//
//	struct T* pt = &t;
//	printf("%d %c %f %s %d\n", pt->s.a, pt->s.c, pt->s.d, pt->name, pt->num);
//	//如果放的是地址 就通过箭头去找结构体的内容
//
//	return 0;
//}


//结构体传参
//struct S
//{
//	int arr[100];
//	int num;
//	char ch;
//	double d;
//};
//void print(struct S ss)//这里是传值调用，重新开辟了内存
//{
//	printf("%d %d %d %d %c %lf\n", ss.arr[0], ss.arr[1], ss.arr[2], ss.num, ss.ch, ss.d);
//}
//
//void print2(struct S* ps)//这里是传址调用 不用重新开辟内存 而且只传了4个字节
//{
//	printf("%d %d %d %d %c %lf\n", ps->arr[0], ps->arr[1], ps->arr[2], ps->num, ps->ch, ps->d);
//}
//
//int main()
//{
//	struct S s = { {1,2,3,4,5},100,'w',3.14 };
//	print(s);
//	print2(&s);//传地址
//	return 0;
//}


int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	c = Add(a, b);

	//在调用函数的时候  函数都在栈区上面  
	//栈区先从高地址开辟空间 main函数先开辟空间 在main函数里面慢慢开辟空间
	//这个main函数就是 先开辟 a   再开辟 b   最后 c   在main函数后面的低地址 
	//又开辟了一段空间 用来放传的参数 a b  然后继续往低地址开辟一段空间 用来放Add函数
	//然后传了之后 x就占了参数a的空间 y就占用了参数b的空间
	//然后在Add 函数里面先开辟z 然后再返回 把这段空间回收了
	
	//栈区就是把内容依次往里放 然后依次回收  就是先创建的后回收  后创建的先回收
	//就是先使用高地址 再使用低地址 先在高地址开辟空间 然后依次往低地址开辟

	//所以结构体如果传参的话 结构体过大，参数压栈的的系统开销比较大 所以就会导致性能下降

	//会有两个指针 一个指向Add函数的开始 一个指向结束  指向开始的是epb  指向结束的是 esp
	//这两个指针就是寄存器 当把 esp 的值赋为 epb 就把栈区回收了  因为 esp 是指向栈顶

	return 0;
}