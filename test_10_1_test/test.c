#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//笔试题

//1 Test 被调用之后 会产生什么样的结果    
//运行结果：程序运行会崩溃  因为  
//1 str是值传递 是形参 改变形参 不会对实参有影响 str 依然是 NULL
//2 当 str 是 NULL 的时候 strcpy 想把 hello word 拷贝到 str 指向的空间时  程序就崩溃了 因为 NULL
//指向的空间是不能访问的
//3 会存在内存泄露的问题 因为 malloc 开辟的空间 从来没有人去释放 所以会一直占着内存
//当 GetMemory 返回后 内存就无法释放了  因为是把 100 个字节的地址交给了 p 变量
//函数返回 p 销毁了 这一块空间的起始地址就找不到了  这块空间就没办法回收了
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//在堆上开辟空间
//}
//void Test(void)
//{
//	char* str = NULL;//str 是一个指针变量
//	GetMemory(str);//传的时候 传的是一个变量  并没有传地址   是值传递  改变的时候不会地址
//	//是新开辟的一段内存
//	strcpy(str, "hello world");//因为 str 还是空指针 所以拷贝会出错 会导致程序崩溃 所以不会打印
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//第一种改法
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);//*p 就是 str 这样就放到了外面的 str 里
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);//一定要释放空间
//}
//int main()
//{
//	Test();
//	return 0;
//}

//第二种改法  不传参 但是设计的不够好
//char* GetMemory()
//{
//	char* p = NULL;
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();//就相当于 str 里面放的是 p 的地址 也就是那100个空间的地址
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//int main()
//{
//	const char* p = "hello word";
//	printf(p);//因为数组名是首元素地址 所以 h 就是首元素 所以就可以直接用数组名打印
//	//只有字符串可以这样打印
//	return 0;
//}


//第二道题  运行Test 函数会有什么样的结果  （都是返回栈空间地址的问题）
//输出随机值
//char* GetMemory(void)
//{
//	char p[] = "hello world";//以数组形式放的字符 有 \0 这里的 p 是局部数组--在栈上 有作用域 
//	//出了作用域 就要被销毁
//	return p;//通过寄存器把 h 的地址返回去
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();//接受了 h 地址  但是 p 所指向的数组空间被操作系统回收了 所以就是越界访问
//	printf(str);//随机值
//}
//int main()
//{
//	Test();
//	return 0;
//}


//栈上的空间的地址尽量不要返回 不然会导致 bug
//int* test()
//{
//	int n = 10;
//	return &n;
//}
//int main()
//{
//	int* p = test();
//	printf("haha\n");
//	printf("%d\n", *p);//10 但是代码有问题 因为这个地址指向的空间还没有被覆盖 所以还是 10 
//	//当再写代码的时候 这块空间就被覆盖了 所以就不是 10 了
//	return 0;
//}


//第三题   运行Test 函数会有什么样的结果？  没有 free 掉内存  导致内存泄露
//只有在不想用这块空间的时候 才 free 
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//第四题  运行Test 函数会有什么样的结果？
//void Test(void)
//{
//	char* str = (char*)malloc(100);//堆上申请了 100 个字节的空间  str 指向这段空间
//	strcpy(str, "hello");//把 hello 放到 str 指向的空间里面 
//	free(str);//把这 100 个字节的空间的使用权还给操作系统  这段空间并没有消失
//	//这里只是释放这段空间  并没有置为 NULL    每次 free 之后 一定要置为 NULL
//
//	//这里就是非法访问内存  野指针
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}


//C/C++程序的内存开辟
//一整块内存分为：
	//内核空间：用户的代码不能在这里读写
	//栈区：局部变量，函数形参
	//堆区：动态内存开辟，全局数据和静态数据  由 malloc  realloc calloc 管理的空间
	//静态区（数据段）：放的是全局变量和静态变量   加了static 的局部变量也在这里
	//代码段：常量字符串（不可改的）/只读常量
	//内存映射段

//栈区的空间是有限的 效率很高 放的东西多了的话 会溢出


//柔性数组：在 C99 中引入 结构体中的最后一个元素(成员)允许是未知大小的数组
	//结构中的柔性数组成员前面必须至少一个其他成员。
	//sizeof 返回的这种结构大小不包括柔性数组的内存。
	//包含柔性数组成员的结构用malloc()函数进行内存的动态分配，并且分配的内存应该大于结构的大
	//小，以适应柔性数组的预期大小。

//struct st_type
//{
//	int i;
//	int a[];//柔性数组成员 表示数组的大小是不确定的
//	int a[0];//写成这种也可以 都是柔性数组成员
//};


//struct st_type
//{
//	int i;
//	int a[];
//};
//int main()
//{
//	printf("%d\n", sizeof(struct st_type));//计算包含柔性数组大小的结构体大小的时候
//		//是不需要计算柔性数组的大小的  也会按照结构体对齐来算 因为前面有 int 是 4 
//
//			//包含柔性数组成员的结构体的使用 要配合 malloc calloc 函数进行内存的动态分配，
//			//并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小。
//
//	//struct st_type st;//不应该这样定义 因为这样的话 不能开辟出柔性数组  应该使用 malloc
//
//	struct st_type* ps = (struct st_type*)malloc(sizeof(struct st_type) + 10 * sizeof(int));
//			//sizeof(struct st_type 这里计算的结果是 4 就是 i 
//			// 10 * sizeof(int) 就是 柔性数组里面有 10 个元素   只要通过 relloc 就能对数组的大小进行动态调整
//
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	//开辟成功
//	ps->i = 100;
//	for (int i = 0; i < 10; i++)
//	{
//		ps->a[i] = i;//通过这样对柔性数组赋值
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->a[i]);
//	}
//	//空间不够了 a 数组扩容为 20 个整型数据
//	struct st_type* ptr = realloc(ps, sizeof(struct st_type) + 10 * sizeof(int));
//	if (ptr == NULL)
//	{
//		printf("扩展空间失败\n");
//		return -1;
//	}
//	else
//	{
//		ps = ptr;
//	}
//	//使用
//	//...
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//动态实现方式
//struct st_type
//{
//	int i;
//	int* a;//计算结构体大小 也会计算这个的大小 因为这个不是柔性数组
//};
//int main()
//{
//	struct st_type* ps = (struct st_type*)malloc(sizeof(struct st_type));
//	ps->i = 100;
//	ps->a = (int*)malloc(10 * sizeof(int));
//	for (int i = 0; i < 10; i++)
//	{
//		ps->a[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->a[i]);
//	}
//	//增容
//	int* ptr = (int*)realloc(ps->a, 20 * sizeof(int));
//	if (ptr == NULL)
//	{
//		printf("扩容失败\n");
//		return -1;
//	}
//	else
//	{
//		ps->a = ptr;
//	}
//	//使用
//
//	//释放
//	//先释放 a     再释放 ps 因为 ps 也是 malloc 出来的  如果先释放 ps 就找不到 a 了
//	free(ps->a);
//	ps->a = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//柔性数组的效率更高

//柔性数组方式的好处：方便释放  因为只 malloc 了一次 内存泄漏等问题就减少了 
//动态方式：有利于访问速度 但是 malloc 次数太多之后 就会产生内存碎片 因为每次都在堆区分配内存
//分配的内存并没有连续 所以会产生较多的内存碎片 内存和内存之间的小空间就不能被使用了

//内存池：就是用过程序要用很多内存 所以直接分配一个内存池给你 使用的时候 从内存池里面申请 
//内存池的使用就不是 malloc 内存池的开辟是直接用 malloc 开辟出来的 降低内存碎片

//在读取内存的时候 有一个局部性原理 在读取一个位置的数据的时候 接下来大概率需要的是周围的数据 
//数据存储有寄存器、高速缓存和内存 程序读取处理的数据 可能放在寄存器里面 因为寄存器的读取速度更快
//就是当我们使用一个数据的时候 接下来大概率使用周围的数据 当使用一个数据的时候 就会把它周围的数据加载到
//高速缓存当中 再从高速缓存加载到寄存器当中去  这样就能从寄存器当中很快的访问到周围的数据 
//这样的话 访问效率就更高了  所以柔性数组的效率会更高

//柔性数组前面的成员 也会存在内存对齐