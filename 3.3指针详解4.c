#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数指针数组








void menu()
{
	printf("*********************************\n");
	printf("****   1.add        2.sub    ****\n");
	printf("****   3.mul        4.div    ****\n");
	printf("****         0.exit          ****\n");
	printf("*********************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()//函数指针数组使用 实现计算器
{
	int input = 0;
	int x = 0;
	int y = 0;
	printf("计算器\n");
	printf("\n");
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			printf("%d\n",Add(x,y));
			break;
		case 2:
			printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			printf("%d\n", Sub(x, y));
			break;
		case 3:
			printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			printf("%d\n", Mul(x, y));
			break;
		case 4:
			printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			printf("%d\n", Div(x, y));
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
}

//char* my_strcpy(char* dest,const char*src)//1，写一个函数指针pf，可以指向my_strcpy  2，写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//1,char* (*pf)(char*,const char*)     2,char*(*pfArr[4])(char*,const char*)

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
//
//int main()
//{
//	int* arr[5];//数组每个元素都是指针 所以是指针数组
//	//需要一个数组，可以存放4个函数的地址，这个数组就是函数指针的数组
//	int(*pa)(int,int)=Add;//pa存放Add的地址  上面这几个函数的地址一样，所以这里也可以存放 Sub Mul Div的地址
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//parr[4]是数组  四个元素 类型是指针 所以是函数指针数组;
//	//函数指针的数组-地址相同
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//parr[i]就是地址  每个下标就是一个指针
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));//Add传给pa  所以pa也行  pa和括号结合的优先级高
//	printf("%d\n", (*pa)(2, 3));//指针解引用 找到原来的对象
//	printf("%d\n", (**pa)(2, 3));
//	printf("%d\n", (***pa)(2, 3));//结果相同 说明*数量增加并没有什么效果  可以解引用  也可以不解引用
//
//	return 0;
//}

//(*(void(*)())0)();   void(*)()是个函数指针类型 强制类型转换成函数指针类型  0当作某函数地址  最前面解引用发现void函数是无参的  调用函数《C缺陷和陷阱》
//函数指针面试会考