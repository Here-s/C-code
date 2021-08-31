#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//字符指针
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//pc 就是一个字符指针
//	const char* ps = "abcdef";//abcdef 是一个常量字符串 ps 放的是a的地址 加上const 防止内容被修改
//	return 0;
//}


//指针数组 是数组
//int main()
//{
//	char arr[5];//字符数组 每个元素是字符类型
//
//	//指针数组 - 存放指针的数组
//	int* arr[5];//存放整型指针的数组
//	return 0;
//}


//数组指针
//int main()
//{
//	int arr[10];//arr数组名是数组首元素的地址  &arr 拿到的是数组的地址
//	int* p = arr;//把首元素的地址放到 p 当中
//	int(*p2)[10] = &arr;//因为 p2 是指针 所以先和*结合 然后外面是数组 所以和[]结合 就是数组
//	//所以总的就是数组指针 指针类型是 int
//
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	return 0;
//}


//函数指针  是指向函数的指针 函数名和 &函数名 都是函数的地址
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int, int) = Add;//pf就是一个函数指针    Add 和 &Add 都是 Add 的地址
//
//	//int sum = (*pf)(2, 3);//也可以写pf  不写*  写* 是为了好理解
//	int sum = pf(2, 3);//通过函数指针来调用
//	printf("%d", sum);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pa)(int, int) = Add;
//	int (*ps)(int, int) = Sub;
//	//可以把Add Sub 放到一个数组里面去
//	int(*pArr[5])(int, int) = { Add, Sub };//pArr就是一个函数指针的数组 去掉pArr[5] 说明元素类型是 int*
//	//pArr先和[]结合说明是数组
//
//	//指向函数指针数组的指针
//	int(*(*p)[5]) = &pArr;//取出数组的地址 要有一个数组指针来接收 所以是一个指针   p 是一个指针
//	//该指针指向了一个数组  所以 p 是一个数组指针  数组的每一个元素是函数指针
//	//p是一个指向函数指针数组的指针
//	return 0;
//}


//回调函数   通过函数指针去调用这个函数
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//void Calc(int(*pf)(int, int))
//{
//	int ret = pf(3, 5);//pf存的是调用的那个函数的地址 比如说调用的是Add 那么pf 放的就是Add 函数的地址
//	//然后就调用相应的函数
//	printf("%d", ret);
//}
//int main()
//{
//	//Calc是模拟一个计算器
//	Calc(Add);
//	Calc(Sub);//传的是Sub 所以函数里面的 pf 就是Sub的地址
//	return 0;
//}


//qort 函数 用来快速排序 可以排各种各样的数据  有4个参数  第一个是 void* base  第二个是 size_t num  
//第三个是 size_twidth 第四个是 函数指针

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//排成升序  每两个元素都要比较 一趟可以排一个元素 10个元素 处理9个就行了
//	bubble_sort(arr, sz);
//
//	//打印
//	print_arr(arr, sz);
//	return 0;
//}


//能排好多种类型 是因为 base 
//void qsort(void* base, size_t num, size_t width, int(* cmp)(const void* e1, const void* e2))
//有4个参数  第一个是 void* base 代表地址  
//			第二个是 size_t num 指的是待排序的元素个数
//			第三个是 size_twidth 指的是一个元素的大小 单位是字节   
//			第四个是 函数指针 e1 和 e1 是要比较的那两个元素的地址 排序的时候比较 按照名字 年龄这样来比较
//
//如果要排的不是整型 而是结构体 

//int main()
//{
//	int a = -10;
//	float f = 5.5f;
//	//char* p = &a;//这里发生了类型转换 因为是确定的指针类型 所以会警告
//	//char* p2 = &f;
//	void* p3 = &a;//void* 可以接收任何类型地址的指针  是一种无具体类型的指针 但是不能进行运算
//	//p3++;//报错 因为没有具体类型 不知道该走几个字节 也不能解引用 不知道该解几个字节
//
//	//int* p1 = &a;
//	//p1++;
//	//p1 = p1 + 1;
//
//	void* p4 = &f;
//	return 0;
//}


//比较函数  当第一个大于第二个 就返回大于0 的数 小于 就返回负数 等于 就返回0
//qsort 函数头文件 stdlib.h
//int cmp_int(const void* e1, const void* e2)
//{
//	//原来比较两个整型
//	//e1 e2 都是两个整型的地址  所以应该先强制转换
//	return *(int*)e1 - *(int*)e2;//把 e1 e2 位置换一下 就降序了
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_by_name(const void* e1, const void* e2)
//{
//	//e1  e2 是结构体数据 所以强制转换
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//int cmp_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void test2()
//{
//	struct stu s[3] = { {"张三", 15},{"李四", 30},{"王五", 10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按照名字排序
//	//qsort(s, sz, sizeof(s[0]), cmp_by_name);
//
//	//按照年龄来排序
//	qsort(s, sz, sizeof(s[0]), cmp_by_age);
//}
//
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
////使用回调函数 实现一个通用的冒泡排序函数
//void Bubblesort(void* base, int num, size_t width, int(*cmp)(const void*, const void*))
//{
//	size_t i = 0;
//	//趟数
//	for (i = 0; i < num - 1; i++)
//	{
//		//比较的对数
//		size_t j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width )> 0)//因为char* 是一个字节 
//				//所以 char* 乘宽度就是之前的元素的大小 
//			{
//				//第一个大于第二个 就交换 实现升序
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
////测试自定义的 Bubblesort 
//void test3()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//int main()
//{
//	//排序整型数据
//	//test1();
//
//	//排序结构体数据
//	//test2();
//
//	//测试自定义的Bubblesort
//	test3();
//	return 0;
//}


//面试题
int main()
{
	//sizeof(数组名)  数组名表示整个数组 计算的是整个数组的大小 
	//&数组名 数组名表示整个数组 取出的是整个数组的地址
	//除此之外 所有的数组名 都是首元素的地址
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//是 16 算的是整个数组的大小 单位是字节   
								//数组名单独放在sizeof 内部 数组名表示整个数组，计算的是整个数组的大小
	printf("%d\n", sizeof(a + 0));//数组名表示1 的地址 +0 还是1的地址 所以是指针 是4个字节  a表示首元素的地址
	printf("%d\n", sizeof(*a));//对 a 解引用 对数组名解引用 表示首元素 就是 a[0] 算的是整型大小 是4
	printf("%d\n", sizeof(a + 1));//4 因为 a 是首元素地址 +1 表示第二个元素的地址 就是4或者8
	printf("%d\n", sizeof(a[1]));//第二个元素 大小是4个字节
	printf("%d\n", sizeof(&a));//4或者8 因为还是地址 就是指针 所以还是4或者8
	printf("%d\n", sizeof(*&a));//16 因为是对 a 的地址解引用 是对数组地址解引用 拿到的是数组 所以大小是 16
								//等价于 sizeof(a)  因为* 和& 抵消了
	printf("%d\n", sizeof(&a + 1));//4或者8 因为跳过了一个数组 但还是一个地址 所以还是4或者8
	printf("%d\n", sizeof(&a[0]));//4或8 也是地址 是第一个元素的地址 所有也是
	printf("%d\n", sizeof(&a[0] + 1));//4 或 8  因为是第二个元素的地址 还是地址 所以是4 或 8

	return 0;
}