#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>


int main()//异或算法，不会溢出
{
	int a = 3;
	int b = 5;
	printf("交换前：a=%d b=%d\n", a, b);
	a = a ^ b;//^按位异或相同为0 相异为1 a的二进制011 b的二进制101 异或之后等于110
	b = b ^ a;//同理异或之后为011
	a = a ^ b;//是110与011异或，所以等于101


	printf("交换后：a=%d b=%d\n", a, b);

	return 0;
}
//int main()//不使用第三个变量，但会有溢出的问题
//{
//	int a = 3;
//	int b = 5;
//	//INT_MAX; 2147483647 整型的最大值
//	//溢出的问题，a和b太大就会导致溢出，导致下面的加法不行
//	//int--4个字节--32个bit位--所以整型有最大值
//	printf("交换前:a=%d b=%d\n", a, b);
//	a=a + b;//a放的是计算的和 b还是原来的b
//	b=a - b;//a-b得到原来的a，再等于b就好了
//	a = a - b;//a-b等于原来的b，所以让它等于a就交换了
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}
//int main()//使用第三个变量的样子
//{
//	//交换两个整型变量
//	int a = 3;
//	int b = 5;
//	int c = 0;//空瓶
//	printf("交换前:a=%d b=%d\n", a, b);
//	c = a;//1.把a放到c
//	a = b;//1.把b放到a
//	b = c;//1.把c放到b
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}
