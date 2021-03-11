#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



int main()//编程题 喝汽水问题 1瓶汽水1元 2个空瓶可以换一瓶汽水 给20元可以喝多少汽水
//20买20瓶 空瓶换10瓶 再换5瓶 再换两瓶 三个空瓶 再换一瓶 得到两个空瓶 再换一瓶 一共39瓶   所以可以分为两部分 买到的一部分 换到的一部分
{
	int money = 0;
	int total = 0;//total用来计数
	int empty = 0;//统计空瓶
	scanf("%d", &money);//输入钱数
	total = money;//买回来的汽水
	empty = money;//空瓶的数量
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;//能换到的汽水 得到的空瓶 再加上换之后剩下的空瓶
	}
	//if (money == 0)//通过找规律发现还能这样算
	//	total = 0;
	//else
	//	total = 2 * money - 1;//通过找规律发现还能这样算
	printf("total=%d\n", total);
	return 0;
}

//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n",(*p).name);
//	return;
//}
//int main()//下面程序输出的结果是什么
//{
//	struct stu students[3] = { {9801,"zhang",20} , {9802, "wang", 19},{9803,"zhao",18} };//三个元素初始化成 zhang wang zhao
//	fun(students + 1);//students是首元素zhang的地址 +1 指向wang 所以答案就是wang
//	return 0;
//}

//struct S
//{
//	int a;
//	int b;
//};
//int main()//括号里面可以打印什么东西
//{
//	struct S a, * p = &a;
//	a. a = 99;//前一个是结构体变量 后一个是结构体成员
//	printf("%d\n", a.a);//可以打印 a.a    p->a   (*p).a
//	return 0;
//}