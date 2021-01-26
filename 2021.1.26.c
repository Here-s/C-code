#include <stdio.h>
int main()
{
	//未声明的标识符，声明一下extern声明外部符号的
	extern int g_val;
	printf("g_val = %d\n",g_val );
	return 0;
}




//int num2 =20//全局变量-定义在代码块{}之外的变量  全局变量是整个工程
//int main()
//{
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;

	//输入数据-使用输入函数
	//scanf("%d%d", &num1, &num2);//取地址符号&
	//c语言语法规定，变量要定义在当前代码块的最前面
	//sum = num1 + num2;
	//printf("sum =%d\n", sum);
	//return 0;
//}

//int main()
//{
	//int a = 10;//局部变量和全局变尽量不要相同，容易产生bug，因为结果是局部变量，会优先局部
	//printf("%d\n", a);
	//return 0;
//}
//int main()
//{
	//int num1 = 10;
	//return 0;
//}
//{
	//short age = 20;//short向内存申请两个字节，用来存放20
	//float weight = 95.6f;//float向内存申请四个字节存放
//}








//int main()
//{
	//char ch = 'A';
	//char-字符数据类型
	//%d-打印整型
	//%c-打印字符
	//%f-打印浮点数字-打印小数
	//%p-以地址的形式打印
	//%x-打印十六进制
	//printf("%c/n",ch);//%c-打印字符格式的数据
	//short int-短整型
	//int-整型
	//int age = 20;//int-整型
	//printf("%d\n",age);//%d-打印整型十进制数据
	//long-长整型
	//long num = 999;
	//printf("%d\n", num);
	//float-单精度浮点数
	//float f = 5.0;
	//printf("%f\n", f);
	//double d = 3.14;
	//printf("%lf\n", d);  lf-双精度
	//return 0;
//}