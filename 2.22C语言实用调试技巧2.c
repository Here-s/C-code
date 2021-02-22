#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//实例1 写代码求 1!+2!+3!+....+n!; 不考虑溢出
int main()//代码有问题   改正
{
	int i = 0;
	int sum = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);//如果输入3 就是1!+2!+3!=9  但发现打印是15  所以要调试
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		int ret = 1;//这里是1的话 就不会干扰到for循环里面的求阶乘
		for (j = 1; j <= i; j++)//经过调试发现计算3的阶乘时出了问题 发现算下12   3!应该是6 但现在是12 说明原来就有值
		//求完发现 可以再次找问题 所以添加断点 右击鼠标 条件 i==3 就是满足这个条件的时候停下来
		{
			ret *= j;//这里的*是乘的意思
			//当求3的阶乘的时候 发现ret=2 上次算完2的阶乘 ret 刚好=2  因为ret未重置  所以每次求阶乘的时候都把ret重置为1
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}

//下面这一系列信息都是在fn+f10 的调试窗口里面打开的
//void test2()//连环调用  堆在栈里面  调用完之后 test2 先离开栈  因为test2 是最后进来的   调用堆栈可以很好的反应程序是如何一步一步运行的
//{
//	printf("byte\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//
//}

//int main()
//{	
//	{
//		int tmp = 0;
//		printf("tmp= %d\n", tmp);//这是一个局部变量 窗口调试的时候  局部变量结束之后也就不在窗口里面解释了
//	}
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//shift f11 在函数内部的话 直接跳出函数  shift+f5 停止调试
//f11逐语句 遇到函数也会进去
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()//f10 逐过程  但是不进入函数过程
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}