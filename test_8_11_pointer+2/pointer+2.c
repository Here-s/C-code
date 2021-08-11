#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//字符指针
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	*p = 'b';
//	const char* str = "abcdef";//str 存的是a 
//	return 0;
//}


//指针数组   要保证是个数组
//int main()
//{
//	int* arr[10];//数组是10个元素 每个元素类型是 int* 
//	char* arr2[4];//也是指针数组
//	return 0;
//}


//数组指针   要保证是个指针
//int main()
//{
//	int(*arr)[5];//让* 先和arr结合 就是指针 一看指向的是数组 有5个元素 每个元素的类型是int 
//	int* (*p)[5];//* 和p结合 是指针 然和和外面的数组结合   数组内容是 int* 
//	return 0;
//}


//数组参数，指针参数

// 一维数组传参
//void test(int arr[])//可以这样使用 因为传的是数组 所以用数组来接收没问题
//{}
//void test(int arr[10])//也可以这样写这里的10 是个摆设 其实不用写 写不写效果都一样
//{}
//void test(int* arr)//也可以这样写 因为数组名就是首元素地址，所以用指针来接收就可以 
////因为是整型地址 所以用 int* 来接收
//{}
//void test2(int* arr[20])//可以这样写 因为还是数组 并且每个元素是 int* 所以 用int* 来接收 20可以省略掉
//{}
//void test2(int** arr)//可以这样写 因为传的是地址 每个元素的类型是 int* 所以用 int** 来接收
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//二维数组传参
//void test(int arr[3][5])//没问题 传的是数组 所以用数组接收 
//{}
//void test(int arr[][5])//行可以省略  列不可以省略 因为省略列的话，就不知道有多少行了
//{}
////行和列都省略的话 就是错误的写法
//void test(int (*p)[5])//因为是第一行 数组有5个元素 所以 [5] 
//{}
//void test(int** p)//错 不能因为是二维数组就写成二级指针  如果传的是一级指针变量的地址的话 可以用二级指针
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//数组传参 传的是首元素的地址  可以理解成一维数组 3行就是三个元素 每个元素里面又有5个元素
//				//这样的话 首元素就是第一行一维数组的地址  所以用指向数组的指针来存放
//	return 0;
//}


//一级指针传参
//void print(int* p, int sz)//传的是一级指针 所以用一级指针来接收就没问题  写成数组形式也没问题
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);//把一级指针传过去
//	return 0;
//}


//void test(int* p)//已经规定了接收的参数
//{}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int arr[10] = { 0 };
//	//test(&a);
//	test(arr);
//	test(p);//因为p 已经是一个指针了 所以传p 就行了
//	return 0;
//}


//time 函数 返回的是时间戳 


//二级指针传参
//void test(int** ppa)//因为传的是二级指针 所以用二级指针来接
//{}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	int* arr[5];//指针数组 
//	test(ppa);
//	test(&pa);
//	test(arr);//指针数组的数组名  因为这里是指针数组 所以把地址传过去 就可以用二级指针来接收了
//	return 0;
//}



//整型指针
//字符指针
//数组指针
//函数指针变量 - 存放函数的地址

//数组名 - 数组首元素的地址
//&数组名 - 数组的地址

//函数名 &函数名  这俩都是拿到函数的地址
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%p\n", &Add);//这样就拿到了函数的地址
//	printf("%p\n", Add);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;//去掉名字就是类型  所以就是整型
//
//	int arr[10] = { 0 };//去掉名字 就是类型 就是  int[10]
//
//	//数组指针类型 int(*)[10]
//	int(*parr)[10] = &arr;//parr就是数组指针
//
//	//函数指针类型 int(*)(int,int)
//	int(*pf)(int, int) = &Add;//pf 是用来存放函数的地址的 - pf就是函数指针变量    函数指针就用来存放函数地址
//		//pf是函数指针 所以先和*结合 向外一看是函数 函数类型是(int , int) 返回值是 int  
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int(*pf)(int, int) = &Add;
//	int(*pf)(int, int) = Add;//因为函数名也是函数的地址 所以写函数名也可以  把Add赋给 pf 没警告 说明Add和pf是一回事
//	//因为是一回事 所以使用函数指针的时候 就可以不用解引用
//
//	int ret = Add(2, 3);
//	printf("%d\n", ret);
//	//ret = (*pf)(4, 5);//传参 4和5    中规中矩的写法   写* 是为了更好的理解
//	ret = pf(4, 5);//因为Add 和pf是一回事 所以可以这样写   写很多颗* 也没问题
//	printf("%d\n", ret);//通过函数指针去调用这个函数
//	return 0;
//}


//typedef void(* pfun_t)(int);
//int main()
//{
//	//代码1
//	(*(void (*)())0)();//void (*)() 是一个函数指针类型 把0这个值进行强制类型转换 转换为一种函数指针类型
//			//0 就被当成一种地址了  放的是一个无参的 返回类型为 void 的函数   前面*就是解引用 找到那个函数
//			//找到函数之后 再去调用函数 函数没传参 
//			// 总的来说： 代码是一次函数调用 代码中把0强制类型转换为类型为void (*)()的函数的的地址，
//			// *(void (*)())0  通过0 地址 解引用去找到这个函数去调用0地址处的函数 
//			// 被调用的函数是无参 返回类型是 void 
//	//代码2
//	void (*signal(int, void(*)(int)))(int);//对于函数来说signal 能和括号结合 说明是一个函数 int是它的参数
//			// void(*)(int) 是另外一个参数 这个参数是函数指针类型 去掉函数参数 void (*)(int);又是个函数参数
//			// 所以signal 本质是一次函数声明  声明的函数名是signal 
//			// signal函数有两个参数 第一个是int类型，第二个是void(*)(int)的函数指针类型
//			// signal函数的返回类型依然是  void(*)(int) 的函数指针类型 这个参数是 int 返回类型是 signal
//			
//	//还能通过typedef 重定义一下 这样写
//	pfun_t signal(int, pfun_t);//这样就好理解了
//	return 0;
//}


//int Add(int x, int y)//int (*)(int,int)
//{
//	return x + y;
//}
//int Sub(int x, int y)//int (*)(int,int)
//{
//	return x - y;
//}
//int Mul(int x, int y)//int (*)(int,int)
//{
//	return x - y;
//}
//int Div(int x, int y)//int (*)(int,int)
//{
//	return x - y;
//}
//int main()
//{
//	int* arr[10];//整型指针数组
//	//函数指针的数组 - 存放函数指针的数组
//
//	//下面这些太繁琐了 所以可以创建一个函数指针的数组 
//	//int(*pf1)(int, int) = Add;
//	//int(*pf2)(int, int) = Sub;
//	//int(*pf3)(int, int) = Mul;
//	//int(*pf4)(int, int) = Div;
//
//	//pfArr 就是一个函数指针数组     因为这些函数的参数 返回值都相同
//	int(*pfArr[4])(int, int) = { Add,Sub,Mul,Div };//先和方块结合 说明是数组 int(*)(int, int) 这个是函数指针
//			//所以这些就是一个函数指针数组
//	return 0;
//}


//实现加减乘除功能
//void menu()
//{
//	printf("**************************************\n");
//	printf("*******1.add      2.sub     **********\n");
//	printf("*******3.mul      4.div     **********\n");
//	printf("*******       0 exit        **********\n");
//	printf("**************************************\n");
//}
//int Add(int x, int y)//int (*)(int,int)
//{
//	return x + y;
//}
//int Sub(int x, int y)//int (*)(int,int)
//{
//	return x - y;
//}
//int Mul(int x, int y)//int (*)(int,int)
//{
//	return x * y;
//}
//int Div(int x, int y)//int (*)(int,int)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		//但是这样写的话 代码太麻烦了 如果要添加其它功能的话 代码就会更臃肿 代码越来越长
//		//因为函数参数一样 传的参数也一样 所以就来改造代码
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n",ret);
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//这样来改造
//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//
//		//下面这个东西又叫转移表 - 《C和指针》
//		int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//每个元素都是函数指针  这样的话 功能多了 代码也不会太长
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);//通过函数的地址来调用函数 
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}

//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数：");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);//调用的是pf指针指向的函数 也是通过地址去访问这个函数
//	//这的指针就用到了回调函数  回调函数的实现 必须用到函数指针
//	printf("ret = %d\n", ret);
//}
//或者换成这样
//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//
//		//将代码封装为函数
//		switch (input)
//		{
//		case 1:
//			Calc(Add);//传的是函数的地址
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//指向函数指针数组的指针
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[10];
	int(*p)[10] = &arr;//p是一个指向整型数组的指针
	int* arr[10];//整型指针的数组
	&arr;//取得是整型指针数组的地址
	int* (*p)[10] = &arr;//p是指向整型指针数组的指针 每个元素是 int* 

	//当数组里面放的是函数指针 那么p就是指向函数指针数组的指针 
	int(*pf)(int, int) = Add;//pf就是函数指针 
	int(*pfArr[5])(int, int) = Add;//pfArr 先和5结合 说明是数组  数组有5个元素    
	//所以pfArr 是一个函数指针的数组 
	int(*(*ppfArr)[5])(int, int) = &pfArr;//ppfArr就是一个指向函数数组的指针 
	// ppfArr先和* 结合  就说明是一个指针  再结合[5] 说明指向的是一个数组 数组的元素是一个函数指针类型
	return 0;
}