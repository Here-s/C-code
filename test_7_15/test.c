#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//使用库函数 要引用头文件 stdio.h 是头文件的名称


//int				整型
//short[int]		短整型 
//long[int]			长整型
//longlong[int]		长长整型
//char				字符数据类型(名字)
//float				单精度浮点型(小数)
//double			双精度浮点型

//int main()//一个文件只能有一个main函数  程序的入口  从main函数第一行执行
//{
//	printf("Harry\n");//printf是一个库函数 C语言提供的库函数
//	return 0;
//}

//int main()
//{	
//	//printf("%d\n", sizeof(char));//一个字节   8个比特位=1个字节
//	//printf("%d\n", sizeof(short));//2个字节
//	//printf("%d\n", sizeof(int));//4个字节     sizeof是谁的大小
//	//printf("%d\n", sizeof(long));//4个字节    C语言规定 sizeof(long)>=sizeof(int)
//	//printf("%d\n", sizeof(long long));//8个字节  更长的整型
//	//printf("%d\n", sizeof(float));//4个字节
//	//printf("%d\n", sizeof(double));//8个字节
//	int age = 20;//age在内存上分配4个字节的空间
//	char ch = 'w';//ch在内存上分配1个字节的空间
//	int salary = 10000;//int是类型 salary 是变量名
//	//不变的值 用常量来表示    变得值 用变量来表示
//	return 0;
//}

//变量分为全局变量和局部变量  
//int a = 100;//在大括号外部定义的变量  就是全局变量
//int main()
//{
//	int a = 10;//在大括号内(代码块)  就是局部变量
//	float weight = 55.8;
//	printf("%d\n", a);//结果是10  局部变量和全局变量名字一样的时候 局部变量优先
//	return 0;
//}

int main()
{
	int num1 = 100;
	int num2 = 200;
	int sum = 0;
	scanf("%d %d", &num1,&num2);//输入两个数 一个放在num1 一个放在num2 
	sum = num1 + num2;
	printf("%d\n",sum);
	return 0;
}