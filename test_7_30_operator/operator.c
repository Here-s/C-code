#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//数组名是首元素地址  数组名+1 就是下一个元素的地址
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int i = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%p ---- %p\n", &arr[i], arr + i);//就是数组arr中 下标位 i 的元素的地址
//	}
//
//	//arr[4] --> &(arrr+4) --> *(arr+4) --> 4[arr]  说明[]是一个操作符 相当于 a+b 写成 b+a
//	return 0;
//}


//函数调用操作符 ()
//void test()
//{
//	printf("调用函数\n");
//}
//int main()
//{
//	//printf("%d\n",strlen("abc"));//strlen是返回无符号数 如果打印的话 用%u 更安全 %u 打印无符号数
//
//	test();//函数调用操作符不能缺
//	return 0;
//}


//结构体 自定义 访问操作符  "."  "->"   结构变量.成员名   结构体指针->成员名

struct Book
{
	char name[20];
	float price;
	char id[];
};
void print(struct Book b)
{
	printf("%s\n", b.name);
	printf("%f\n", b.price);
	printf("%s\n", b.id);
}
void print2(struct Book* pb)
{
	//printf("%s\n", (*pb).name);
	//printf("%f\n", (*pb).price );
	//printf("%s\n", (*pb).id);

	printf("%s\n", pb->name);
	printf("%f\n", pb->price);
	printf("%s\n", pb->id);

}
int main()
{
	struct Book b = { "C程序设计", 23.5f, "C5611523"};

	//通过strcpy 改变书名
	strcpy(b.name, "数据结构");
	//print(b);
	print2(&b);
	return 0;
}