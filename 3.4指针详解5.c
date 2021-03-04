#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//void BubbleSort(int arr[],int sz)
//{
//
//}
////qsort-什么类型的数据都能排序
//int main()//冒泡排序函数  只能排序整型数组
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	return 0;
//}

//回调函数 通过函数指针调用的函数 当指针被用来调用其所指向的函数是，就是回调函数
//void print(char* str)//多次调用print函数  就是回调函数
//{
//	printf("byte:%s", str);
//}
//void test(void(*p)(char*))//这里的指针 可以接收地址  在test内部调用函数
//{
//	printf("test\n");
//	p("dance");
//}
//int main()
//{
//
//	test(print);
//
//	return 0;
//}

//指向函数指针数组的指针
//int Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10]=&arr;//取数组的地址
//	int(*pf)(int, int);//函数指针
//	int (*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
//	int (*(*ppfArr)[4])(int, int) =&pfArr;//ppfArr是一个数组指针 指针指向的数组有四个元素  是一个指向函数指针数组的指针
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int,int)
//	return 0;
//}

//回调函数：通过函数指针调用函数
//通过回调函数解决代码出现多次
//void menu()
//{
//	printf("*********************************\n");
//	printf("****   1.add        2.sub    ****\n");
//	printf("****   3.mul        4.div    ****\n");
//	printf("****   5.Xor      0.exit     ****\n");
//	printf("*********************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)//异或的意思
//{
//	return x ^ y;
//}
//void Calc(int(*pf)(int ,int ))//pf是那几种函数的地址  Calc 回调函数
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：");
//	scanf("%d%d", & x, & y);
//	printf("%d\n", pf(x, y));
//}
//int main()//通过回调函数解决代码出现多次
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	printf("计算器\n");
//	printf("\n");
//	do//
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)//这么多代码 每个情况里面就调用函数不一样
//		{
//		case 1:
//			Calc(Add);
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
//		case 5:
//			Calc(Xor);
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//}

//函数指针数组实现计算器(转移表)
//void menu()
//{
//	printf("*********************************\n");
//	printf("****   1.add        2.sub    ****\n");
//	printf("****   3.mul        4.div    ****\n");
//	printf("****   5.Xor      0.exit     ****\n");
//	printf("*********************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)//异或的意思
//{
//	return x ^ y;
//}
//int main()//函数指针数组使用 实现计算器
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	printf("计算器\n");
//	printf("\n");
//	int (*pfArr[6])(int, int) = { 0,Add,Sub,Mul,Div,Xor };//用pfArr函数指针数组来存放这四个计算数组   因为之前输入的是1 2 3 4 所以下标表示相应的运算
//	do//所以可以这样改造  这样改造的话 加别的条件也可以
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误，请重新选择\n");
//		}
//	} while (input);
//}

//int main()//函数指针数组使用 实现计算器
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	printf("计算器\n");
//	printf("\n");
//	do//这样写代码会繁杂 越写越多  因为case这里都是两个参数  所以可以改造
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//}
