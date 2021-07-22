#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>

//函数   分为两类：1 库函数(频繁要用的函数)    2 自定义函数

//库函数
//IO函数 input output 输入输出函数 scanf  printf   getchar   putchar
//字符串操作函数： strlen  strcmp  strcpy   strcat
//字符操作函数   tolower 转小写   toupper 转大写
//内存操作函数   memcpy   memset    memmove   memcmp
//时间 日期函数   time
//数学函数    sqrt  abs(求绝对值)  fabs(求绝对值)   pow (开平方)

//函数就是一个子程序 是一个大型程序当中的某部分代码，由一个或多个语句组成
//函数一般有输入函数和返回值  提供对过程的封装和细节的隐藏

//strcpy 函数
//int main()
//{
//	char arr1[20] = "xxxxxxx";//目标空间  一定要保证能放下拷贝的函数  拷贝之后 也把\0拷过去了
//	char arr2[] = "hello";
//	char * ret = strcpy(arr1, arr2);//第一个参数是要拷贝到的字符数组  第二个参数是字符数组的源头
//	//返回值可以接收  也可以不接收   \0 不占长度 但是占空间
//	printf("%s\n", arr1);
//	printf("%s\n", ret);//strcpy 的返回值 就是拷贝的内容
//	return 0;
//}


//memset  设置内存  三个参数 第一个是 要指向填充的内存块  第二个是修改成什么字符  第三个是 设置修改的大小   
//返回值是 第一个参数   一个汉字占两个类型   void* 指针  可以接受任意类型的指针  万能指针
//int main() 
//{
//	char arr[] = "hello offer";//把前五个字符改成 xxxxx 
//	char* ret = (char*)memset(arr, 'x', 5);//这就是把arr传进去 把字符改成 x  修改前五个  最小单位是1个字节
//	//一定要强制类型转换  这样比较安全
//	printf("%s\n", arr);
//	return 0;
//}

//使用库函数 一定要引头文件
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr,1,5*sizeof(int));// 这样的话 一个整型是 4 个字节 而这样的话  所以要一个字节一个字节的设置
//	//就是把一个整型里面的每个字节都变成了1  所以就是01010101  因为四个字节加起来就是这个
//	printf("%s\n", arr);
//	return 0;
//}

//一定要学好英文


//自定义函数  自己来创造函数   函数要有函数名 返回类型 函数参数
//int Max(int x,int y)//这里接收的x y 是形式参数
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	//求两个数的较大值
//	max = Max(a,b);//将a b 的值传过去 然后求这俩的较大值  这里传的a b 是实际参数
//	printf("%d\n", max);
//	return 0;
//}


//交换两个数
//Swap(int x,int y)//如果实参和形参地址不相同的话 就说明有独立的空间 说明不是操作同一块内存
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("交换前 a=%d b=%d\n", a, b);
//	Swap(a, b);//要传地址 因为实参传给形参的时候 形参是实参的一份临时拷贝 
//	//所以改变形参变量是不会影响实参的
//	printf("交换后 a=%d b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa就能找到a  因为是同一块地址 所以是操作同一块内存
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}


//Swap(int* px,int* py)//这里就是利用指针来改变值  用指针来操作同一块内存 
////进而改变实参   函数内部要改变函数外部变量的值 所以就要传地址过去
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("交换前 a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后 a=%d b=%d\n", a, b);
//	return 0;
//}


//int Max(int x,int y)//函数形参是函数名括号后面的参数  因为只有调用函数的时候 才会开辟内存
////在使用完函数之后 形参创建的两个变量就销毁了 
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	//求两个数的较大值
//	max = Max(a,b);//函数传参可以传变量 表达式 函数  
//	printf("%d\n", max);
//	return 0;
//}


//函数调用
//Swap1(int x,int y)//
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//Swap(int* px,int* py)//
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("交换前 a=%d b=%d\n", a, b);
//	Swap1(a, b);// 传的是变量的值 所以叫值传递  对形参的修改不会影响实参
//	Swap2(&a, &b);// 传的是变量的地址 所以叫地址传递   这种传参方式 修改形参会改变实参
//	printf("交换后 a=%d b=%d\n", a, b);
//	return 0;
//}


//打印100-200之间的素数  通过函数调用

//如果是素数 is_prime 返回1 如果不是素数 返回 0 
//int is_prime(int n)
//{
//	//判断是否为素数 用试除法
//	//  2-sqrt(n)
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)//能被整除 说明不是素数
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//写一个函数 判断是否为闰年
//int is_leap_year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断 y 是否为闰年
//		//函数  如果是 返回1  不是 返回0
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}



//写一个函数 实现二分查找      TDD思想 先想出函数的功能 然后去实现
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到 返回下标   找不到 返回-1
//	int ret = binary_search(arr, k, sz);
//
//	if (ret == -1)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了，下标是 %d \n",ret);
//	}
//	return 0;
//}


//设计为从下标 5-9 查找
//int binary_search(int arr[], int k, int left,int right)
//{
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到 返回下标   找不到 返回-1
//	int ret = binary_search(arr, k, 5, 9);//对下标5-9进行查找
//
//	if (ret == -1)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了，下标是 %d \n", ret);
//	}
//	return 0;
//}


//写一个函数  函数每调用一次 num就加1
//void Add(int* p)
//{
//	*p += 1;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//函数的嵌套调用  但是不能嵌套定义

//void test()
//{
//	printf("函数调用\n");
//}
//int main()
//{
//	test();
//	return 0;
//}

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));// 先打印了43 返回值是2 然后2 又是一个字符 所以又打印1
	//所以最后就是 4321
	//printf函数的返回值是打印在屏幕上的字符的个数
	//如果发生错误(就是读取错误)就返回负数

	//scanf 的返回值 就是读到的字符的个数
	return 0;
}