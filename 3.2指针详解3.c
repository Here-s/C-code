#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数指针


void print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	void (*p)(char*) = &print;
	(*p)("byte");//这里是调用print函数
	return 0;
}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()//函数指针 指向函数的指针  存放函数地址的指针
//{
//	int a = 10;
//	int b = 20;
//	//int arr[10] = { 0 };
//	//int(*p)[10] = &arr;
//	//&arr;
//	//arr;与&arr是一样的
//	//printf("%d\n",Add(a, b));
//	//&函数名和函数名都是函数的地址
//	//printf("%p\n", &Add);//打印Add函数的地址  函数只有一个 所以这里打印的都是函数的地址
//	//printf("%p\n", Add);//因为arr;与&arr是一样的 所以打印结果一样
//	int(* pa)(int, int) = Add;//* pa说明是指针 (int, int)说明是函数 函数指向的参数是整型 是int  指向这个函数的返回类型是int
//	printf("%d\n",(*pa)(2, 3));//通过*pa找到那个函数 然后调用   结果是5
//	return 0;
//	//数组指针-指向数组的指针
//}

//数组参数，指针参数

//void test(int** p)
//{}
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];//数组arr有10个元素  类型是int* 
//	test(arr);//传的是首元素 int*的地址   是指针数组  所以也可以传
//	return 0;
//}

//void test(int** ptr)//传的是二级指针，所以拿二级指针来接收   所以这里拿二级指针接收的话 可以传二级指针变量本身  传一级指针地址
//{
//	printf("num=%d\n", **ptr);
//}
//int main()//二级指针传参
//{
//	int n = 10;
//	int* p = &n;//n的地址放进去 所以p就是一级指针
//	int** pp = &p;//再取p的地址放进pp里面 pp就是二级指针
//	test(pp);//这里传的就是二级指针
//	test(&p);//取出一级指针的地址传过去 拿二级指针接收 所以没问题
//	return 0;
//}

//void test1(int* p)//传的是指针 所以用指针来接收
//{}
//void test2(char* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);//这两种都可以
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);//这两种也可以
//	return 0;
//}

//void print(int* p, int sz)//因为传过来的p是指针，所以用指针接收   
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()//一级指针传参
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}

//void test(int arr[3][5])//这是最简单的传参，你给我一个数组 我拿一个数组接收
//{}
//void test1(int arr[][5])//二维数组传参的时候 行可以省略掉 但是列不能省略
//{}
//void test3(int* arr)//不能这样  二维数组首元素表示的是第一行的地址 是一维数组的地址 所以不能拿整型来接收
//{}
//void test(int* arr[5])//arr跟[5]结合，说明是数组 数组5个元素 每个元素是int*
//{}
//void test4(int** arr)//也不对 因为第一行是数组的地址，不能放到二级指针里面去 二级指针是存放一级指针变量的地址的
//{}
//void test5(int (*arr)[5])//传过来的第一行是5个整型的数组  *说明arr是指针 指向的是数组 数组5个元素 元素类型是int
//{}
//int main()//二维数组传参
//{
//	int arr[3][5] = { 0 };
//	//test(arr);//二维数组传参
//	//test1(arr);
//	//test3(arr);//二维数组首元素表示的是第一行的地址 是一维数组的地址
//	//test4(arr);
//	test5(arr);
//	return 0;
//}

//void test(int arr[])//这种写法没问题
//{}
//void test(int arr[10])//也能这样写 数组大小可以省略
//{}
//void test(int* arr)//这样也可以 因为传的是首元素地址 所以指针也没问题
//{}
//void test2(int* arr[20])//传的是数组 拿数组来接收 也没问题 可以省略掉20
//{}
//void test2(int **arr)//传的是首元素地址 这里是二级指针 因为每个元素都是int*的地址  一级指针的地址传过来刚好放到二级指针里面去
//{}
//int main()//数组参数，指针参数
//{
//	//一维数组传参
//
//	int arr[10] = { 0 };//arr数组 10个元素 每个是整型  存放整型的数组
//	int* arr2[20] = { 0 };//arr2数组 有20个元素  类型是int*   arr2是存放指针的数组
//	test(arr);//传的是arr数组
//	test2(arr2);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abdcef";//是把首字符的地址交给p2 且是常量字符串 不能被修改 所以加const const在左边修饰的是 p2
//	//指针数组-数组-存放指针的数组
//	int* arr[10];//指针数组
//	char* ch[5];//数组指针 指向数组的指针
//	int* p3;//整形指针 指向整型的指针
//	char* p4;//字符指针 指向字符的指针
//	int arr2[5];//数组
//	int* pa[5]=&arr2;//取出数组的地址  因为指针能存放地址  所以要吧*pa括起来  不然就是数组
//	return 0;
//}