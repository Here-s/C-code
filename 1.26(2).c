#define _CRT_SECURE_NO_WARNINGS 1
//#define定义的标识符常量 第三种常量
#include<stdio.h>
//4.枚举常量  枚举=一一列举 性别   枚举关键字enum Sex性别 第四种
enum Color
{
	RED,
	YELLOW,
	BLUE
};
int main()
{
	enum Color color = BLUE;
	return 0;
}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}



//#define MAX 10
//
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
//{
	//const int n=10;//n是变量但是又有常属性，所以n是常变量 const 第二种常量
	//int arr[n]={0};
	//n=20;
//	const int num = 4;//const是常属性，加上const的话结果就不能变了
//	printf("%d\n", num);
	//num = 8;
//	printf("%d\n", num);//能运行是因为int是变量
//	3;//字面常量-直接写出来的  第一种常量
//	return 0;
//}
//下面是加法运算
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//scanf用来输入相关的信息&取地址操作符，把输入的数字弄在这两个弄在这两个地址中
//	sum = num1 + num2; scanf
//	printf("sum=%d\n", sum);
//	return 0;
//}