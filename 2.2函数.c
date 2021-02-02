#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int a = 10;
	int* pa = &a;//pa是指针变量 pa的类型是int*
	*pa = 20;//解引用操作，就是通过pa的地址找到它里面的内容  借助 pa 把a的值改为20
	printf("%d\n", a);
	return 0;
}

//Swap(int x,int y)//自己定义函数  void  意思是这个函数没有返回值  此方法有问题
//{
//	int tmp = 0;//交换不了，因为函数里面和外面是两个空间 地址不一样 即 x y 和 a b 没有关系  所以交换不了
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()//写一个函数可以交换两个整形变量的内容
//{
//	int a = 10;
//	int b = 20;
//	
//	printf("a=%d,b=%d\n", a, b);
//	Swap(a,b);//交换函数
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()//写一个函数可以交换两个整形变量的内容
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;//用来做中间变量，来交换值
//	printf("a=%d,b=%d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int get_max(int x, int y)//因为要用函数所以要定义函数,,因为返回值是整形，所以前面加int
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()//要学会自定义函数
//{
//	//写一个函数找出两个 数中的较大值
//	int a = 10;
//	int b = 20;
//	///函数的使用
//	int max=get_max(a,b);//自定义的一个函数
//	printf("最大值=%d\n ", max);
//	max=get_max(100, 300);
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	char arr[] = "welcome to byte dance";
//	memset(arr, '*', 7); //将welcome改为*******
//	printf("%s\n", arr);
//	return 0;
//}

//memset=memory set  即内存设置

//int main()
//{
//	char arr1[] = "byte";//如果源头数据比目的数据要长的话，就会溢出
//	char arr2[20] = "###############";//其实打印的结果后面还有######，但是因为有/0所以不打印了，因为/0是字符串结束标志
//	//把1的内容拷贝到2当中
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strlen 跟字符串长度有关
//	//strcpy 字符串拷贝  把一个地方的字符串拷贝到另外一个地方   要有拷贝内容，和拷贝到哪里去
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
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}