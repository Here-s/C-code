#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//指针的进阶  指针变量的大小是固定的


//字符指针
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//pc 是指向一个字符变量    *说明pc是一个指针变量 char 说明pc指向的是一个char类型
//
//	const char* p = "hello hurry";//"hello bit"是一个常量字符串  把第一个字符h 的地址赋值给p
//	//首元素h 的地址就由p存起来了  是个常量字符串 存放在常量区 意味着不难改了 但是p 如果改的话 就有问题了
//	//*p = '*';//这样就导致程序崩溃了  因为是常量字符串  加上const 来修饰就好了
//
//	//printf("%c\n", *p);//以为p存的是h 的地址 所以对p解引用就是h
//	//printf("%s\n", p);//以字符串打印 所以有一个元素就能打印了
//	return 0;
//}


//一道面试题
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";//常量字符串 不能被修改 内容一样 所以下面和这个指向的都是这个字符串
//    const char* str4 = "hello bit.";
//    if (str1 == str2)//这里不是比较数组内容  数组名是首元素地址 因为是两个局部变量 所以内存不一样
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");//输出这个  因为两个数组内容 是首元素地址 内存不一样 所以else
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");//输出这个  因为是常量字符串 不能修改 所以是同一块空间
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}


//指针数组     存放指针的数组   
//int arr[10];  整型数组     存放整型的数组
//char arr[10]; 字符数组     存放字符的数组

//int main()
//{
//	//char* arr[5];//元素类型是char* 表示arr是存放字符指针的数组
//	//int* arr2[5];//arr2 是存放整型指针的数组
//
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//
//	int* arr2[4] = { &a,&b,&c,&d };//每个元素都是int*   arr2 就是整型指针的数组
//	//对下标解引用 得到的就是元素了
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };//parr 的三个元素 是arr1 arr2 arr3  因为数组名就是首元素地址
//	//所以数组的首元素就是int*   恰好可以放进来  arr1指向2    arr2指向2    arr3指向3
//	//每个元素指向一维数组  就是指针数组
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);//因为p[i] = *(p+i)  i是首元素地址 这里就是向后跳j个元素   和二维数组相似
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	const char* arr[5] = { "abcdef","bcdefg","haha","lala","gaga" };//字符指针数组  用常量字符串去初始化
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s\n", arr[i]);//通过%s 来打印
//	}
//	return 0;
//}

//int main()
//{
//	int* arr[5];
//	int** p = arr;//因为arr本来放的就是地址 所以也可以这样写
//	int** p2 = &arr[3];//这个是取第四个元素的地址
//	return 0;
//}


//数组指针   是指针 是指向数组的指针    整型指针-指向整型的指针    字符指针-指向字符的指针

//int main()
//{
//	int a = 10;
//	&a;//整型的地址存放在整型指针中
//
//	char ch = 'w';
//	char* pc = &ch;//字符的地址 放在字符指针中
//
//	int arr[10] = { 0 };//arr 是数组首元素的地址
//	int* p = arr;//是数组首元素的地址
//	int (*parr)[] = &arr;//取出的是数组的地址  应该存放在数组指针中  parr是指针 出了括号 有[]  
//	//说明是数组 是int类型   
//
//	//int* parr[10];//这样写是数组
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	&arr[0];//是首元素地址     
//	//arr是数组名 也是首元素地址   有两个例外      
//	//&arr是取出数组的地址 
//
//	int(*p)[10] = &arr;//数组指针 +1 跳过一个数组
//
//	//下面这三个值一样  是因为指向空间的初始位置一样
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//
//	printf("%p\n", arr + 1);//多了4个字节
//	printf("%p\n", &arr[0 + 1]);//多了4个字节 
//	printf("%p\n", &arr + 1);//多了40个字节  
//	//不同指针类型 +1跳过的步长是不一样的     &arr 是数组的地址
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	//数组名 也是首元素地址   有两个例外  sizeof(数组名)  计算的是整个数组的大小 单位是字节
//	//2 &数组名 这里的数组名 不是首元素的地址 是整个数组的地址 所以取出的是整个数组的地址
//	printf("%d\n", sizeof(arr));//是40 因为算的是整个数组的大小
//	return 0;
//}


//int main()
//{
//	//数组指针是一种指向数组的指针
//	int* arr[10] = { 0 };
//	int *(*p)[10] = &arr;//因为是原来就是指针 所以这里应该是二级指针   int* 是表示 每个元素是int* 
//
//	int** p2 = arr;//是int*
//	return 0;
//}


//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void print2(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);//打印arr的内容
//	print2(arr, sz);
//	return 0;
//}


//数组指针 错误用法
//void print3(int(*parr)[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", parr[i]);//parr[i] == *(parr + i) 这样用的时候 就是跳过一个数组了
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print3(&arr, sz);
//	return 0;
//}


//错误用法  一维数组就不要用 因为很别扭
//void print4(int(*parr)[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", parr[0][i]);
//		printf("%d ", (*(parr))[i]);//先找到这个数组 然后+i 找到某个元素
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//把它想象成一个只有一行的二维数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print4(&arr, sz);
//	return 0;
//}


//正确的用法
//参数部分也是二维数组
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5], int r, int c)//是一个数组指针  5个元素 每个是int   p+1 指向第二行
////这个是指向一维数组的指针 
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));//加 j 就是每一行的元素
//			printf("%d ", p[i][j]);//p 就相当于数组名
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,  2,3,4,5,6,  3,4,5,6,7 };
//	//print1(arr, 3, 5);//3 5 是三行五列
//	print2(arr, 3, 5);//可以把二维数组想象成元素为一行的一维数组  所以就可以抽象成一维数组
//	//所以首元素的地址 就是二维数组的第一行  数组名就是二维数组第一行一维数组的地址 所以一个放到数组指针里面
//	return 0;
//}


int main()
{
	int(*parr3[10])[5];//是一个数组指针  放的是具有5个整型元素的数组指针
	//先和[] 结合 就是一个数组 有10个元素 把parr3[10] 去掉 就剩下 int(*)[5]  所以就是数组指针 指向5个整型元素的数组指针
	//parr3 是一个数组 有10个元素 每个元素是一个数组指针  该指针指向的数组有5个元素 每个元素是整型

	//就是parr3的10个元素 指向后面的含有5个整型元素的数组 
	return 0;
}