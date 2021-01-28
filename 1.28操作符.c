#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()//下标引用、函数调用和结构成员:[] () . ->
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[]这是下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum =Add(a, b);//Add后面的小圆括号叫函数调用操作符
//	return 0;
//}

//int main()//(exp1,exp2,exp3, ...expN)—逗号表达式，用逗号隔开的一串表达式，
//{
//	return 0;
//}
//int main()//条件操作符（三步操作符） exp1?exp2:exp3 前面这三个一个整体表达式   表达式1如果为真那表达式2执行的结果是整个表达式的结果，
////如果表达式1的结果为假，那表达式3要被执行，结果是整个表达式的结果
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	//max = (a > b ? a : b);//如果a>b 那么a将会赋值给max，如果a<b 那么b将会赋值给max
//	//printf("%d\n", max);
//	//下面也是一种方法
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	//printf("%d\n",  max);
//	return 0;
//}
//int main()//||逻辑或，两个里面有一个为真就为真
//{
//	return 0;
//}
//int main()//&& 逻辑与，就是并且，，c语言中0表示假，所有非0都表示真
//{
//	int a = 3;
//	int b = 5;
//	int c = a&& b;//逻辑与两边都为真，所以逻辑与为真,输出为1
//	printf("c=%d\n", c);//若逻辑与两边有一假，则输出为0
//	return 0;
//}



//int main()//(类型)-强制类型转换
//{
//	int a = (int)3.14;//3.14是double类型,强制把3.14转换成整型，把double转换成int类型
//
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a--;//后置--，和++一样，，前置--也和++一样2
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++，a先自增，再赋值给b
//	printf("a=%d b=%d\n", a, b);//a=11,b=11
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先把a的值赋给b，a再自增，即a变成11
//	printf("a=%d b=%d\n", a,b);//a=11  b=10
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;// 这里b是有符号的整型  ~按位取反，还是二进制，1010~之后就是0101,0四个字节，32个比特位 00000000000000000000000000000001
//	//取反之后：11111111111111111111111111111111  算了之后是-1,最前面的数字是符号位，1是负数，0是正数
//	//原码，反码，补码
//	//负数在内存中存储的时候，存的是二进制的补码
//	printf("%d\n", b);//打印出的是这个数的原码
//	//11111111111111111111111111111111
//	//原码其他不变，按位取反得到反码，反码+1得到补码
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };//sizeof是操作符,一个整型是4个字节，六个就是24个
//	printf("%d\n", sizeof(a));//a所占的字节，占4个
//	printf("%d\n", sizeof(int));//因为a的类型是整型，所以输int也成立，占4个
//	printf("%d\n", sizeof(arr));//sizeof对数组进行计算，计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//元素个数
//	return 0;
//}
