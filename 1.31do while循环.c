#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//do while 循环  do 循环语句 while（表达式）；    就是先做，先循环再判断，表达式为真继续循环，否则跳出循环  至少循环一次

int main()
{

	int i = 1;
	do
	{
		if (i == 5)
			continue;//这里是1，2，3，4 闪光标 死循环，因为这里不进行到下面了，返回上面i=5，还是这样，所以不打印
		//continue 跳过本次循环后面的代码
		printf("%d ", i);
		i++;
	} while (i <= 10);

	return 0;
}


//int main()
//{
//	 
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;//i 等于5时停止循环，所以只打印1，2，3，4
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//int main()
//{
//	//打印1-10  用do while循环 
//	int i = 1;
//	do//后面不跟大括号只能放一条语句，现在放了两条，所以用大括号
//	{
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//
//	return 0;
//}
