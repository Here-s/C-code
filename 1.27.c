#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//操作符
int main()//单目操作符,还有双目，三目操作符
{
	//int a = 10;
	//int b = 20;
	//a + b;//+就是一个操作符，是双目操作符因为两边都有操作数
	//c语言中表示真假0-假，一切的非0表示真
	//int a = 0;
	//printf("%d\n", a);
	//printf("%d\n", !a);//！为逻辑反操作，所以打印结果为1
	//int a = -2;//-就是负号
	//int b = -a;
	//int c = +3;//+通常正号会省略
	//&取地址符
	//sizeof 操作数的类型长度（以字节为单位）  计算的是变量/类型所占的空间大小
	//int a = 10;
	//printf("%d\n", sizeof(a));//a的空间大小为四个字节
	//printf("%d\n", sizeof(int));//等价上面的写法 因为a的类型是int
	//printf("%d\n", sizeof a);
	//int arr[10] = { 0 };//10个整型元素的数组，，应该是40
	//printf("%d\n", sizeof(arr));
	//计算数组的元素个数=数组总大小除以每个元素的大小
	int arr[10] = { 0 };
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n",sz);
	return 0;
}
//int main()//赋值操作符
//{
//	int a = 10;
//	a = 20;//这是一种赋值方式  一个=叫赋值 两个==叫判断是否相等
//	a = a + 10;//第二种赋值方式  可简化成下面这种
//	a += 10;
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//复合赋值符 += -= /= *= %= <<= >>= &= |= ^=
//	return 0;
//}
//int main()
//{
//	//位操作符 还是二进制  & 按位与(并)  |按位或   ^ 按位异或
//	int a = 3;//011
//	int b = 5;//101
//	//int c = a & b;//需要两个都非零才行  所以为001 最后是1
//	//int c = a | b;//只要有一个1就行了所以为111  最后是7
//	int c = a ^ b;//异或的计算规律是对应的二进制位相同，则为0，相异则为1 所以为110   最后是6
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	//移位操作符 移的二进制位  <<-左移操作符   >>-右移操作符
//	int a = 1;
//	//1的二进制序列是01 a是整型占四个字	节32个比特位   31个0，1个1
//	int b = a << 1;//根据二进制 左移一个就是2 
//		printf("%d\n", b);
//		printf("%d\n", a);
//
//	return 0;
//}
//int main()//算术操作符
//{
//	int a = 5 % 2;//%叫模 取模得到的是余数
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;  引入数组
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组 这些数字对应的下标是0 1 2 3 4 5 6 7 8 9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
	//上面要全打印出来就要生成1-10的下标 即0-9
	//printf("%d\n", arr[4]);//用下标就可以访问元素
	//arr[下标];
	//char ch[20];
	//float arr2[5];
//	return 0;
//}
//#include<string.h>
//int Add(int x, int y)//函数题Add函数名  括号里是参数 下面大块儿是函数题
//{
//	int z =x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	sum = Add(num1,num2);
//	//sum = a + b;
//	sum = Add(a ,b);
//	sum = Add(2, 3);
//	printf("sum =%d\n", sum);
//	return 0;
//}
//函数
//f(x) = 2 * x + 1;
//f(x, y) = x + y;
//int main()
//{
//	int line = 0;
//	printf("转到计算机\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//	line++;
//	}
//	if(line>=20000)
//		printf("好offer\n");
//	return 0;
//}
//int main()//试着套几个看看啥样子
//{
//	int input = 0;
//	printf("转到计算机\n");
//	printf("你要好好学习吗?(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer");
//	else
//		printf("失业");
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//  \32是转义字符，所以长度是13
//	return 0;
//}
//int main()
//{
//	//printf("c:\\test\\32\\test.c");//\t叫水平制表符  再加一个\就可以取消了 加\也叫转义
//	//printf("%c\n", '\'');
//	printf("%s\n","\"" );
//	return 0;
//}
//int main()
//{
//	printf("abc\n");//\n表示换行
//	return 0;
//}
//int main()
//{
//	char arr1[] = "acb";
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n", strlen(arr1));//strlen-string length 计算字符串长度 找到/0才统计结束
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{//字符串 双引号引起的,也有空字符串，字符串结束标志是\0

	//数据存储的时候是二进制  a-97  A-65 ASCII 编码
	//char arr1[]="Here";//数组 把字符串存起来  因为"Here"里面还有一个\0
	//char arr2[] = { 'H','e','r','e',0};//加0是因为单个运行的时候比上面少了个0
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
//
//	return 0;
//}