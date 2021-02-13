#define _CRT_SECURE_Ny_WARNINGS 1
#include<stdio.h>



int main()// ~ 按位取反  按二进制位
{
	//原码取反+1得到补码 补码-1取反得到原码  补码-1得到反码
	int a = 0;
	printf("%d\n", ~a);
	return 0;
}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//s是短整型 所以是2  这里算的是s的大小
//	printf("%d\n", s);
//	return 0;
//}

//int main()//sizeof 求大小
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };//表示数组有10个元素
//	//sizeof算的是变量所占内存空间的大小 单位是字节  也包括数组
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));//和算a一样 因为算a  和算它的类型是一样的
//	printf("%d\n", sizeof(c));//sizeof是类型的话 括号不能省略   计算变量可以省略括号
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(arr));//对于数组来说 去掉名字 剩下的就是类型  所以这里的类型就是  int [10]
//
//	return 0;
//}

//int main()//&取地址操作符  
//{
//	int a = 10;
//	int* p=&a;//取地址操作符   一般配合指针使用  p是指针变量  类型是int*
//	*p=20;//解引用操作符  通过p里面存的值 找到他的对象 *p的对象就是a  这里改了之后a的值就是20
//	return 0;
//}

//int main()//-号  负号 负值
//{
//	int a = -5;
//	a = -a;
//	return 0;
//}

//int main()//单目操作符  只有一个操作数
//{
//	//!逻辑反操作 真变成假，假变成真
//	int a = 10;
//	//printf("%d\n", !a);//10是真 把真变成假 所以是0  0是假 非0都是真
//	if (a)
//	{
//		printf("haha");
//	}
//	if (!a)//!一般这样用   if 判断真假
//	{
//		printf("hehe");//意思是如果a为假 ！a为真 然后才打印hehe
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = a + 2;
//	a += 2;//复合赋值符 和a=a+2 意思一样
//	a=a >> 1;//a右移一位赋值给a
//	a >>= 1;//和上面意思一样
//	a = a & 1;//a按位与1之后赋值给a
//	a &= 1;//和上面的意思一样
//	return 0;
//}

//赋值操作符 一个=号   用新的值替代旧的值  salary 薪资
//int main()
//{
//	int a = 10;//连续赋值
//	int x = 0;
//	int y = 20;
//	//a = x = y + 1;//意思是把y+1赋值给x,再把x赋值给a  改成下面这样的式子好理解
//	x = y + 1;
//	a = x;
//	return 0;
//}