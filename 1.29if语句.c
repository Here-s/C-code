#define _CRT_SECURE_NO_WARNINGS 1
//C语言是一门结构化的程序语言：顺序结构，选择结构，循环结构
//分支语句也叫选择语句 if  switch   两种，也是选择结构
//循环语句  while  for  do while   三种
//由;隔开就是一个语句  只写一个;也是一条语句，不过是空语句  

//if语句的语法结构
//if (表达式)  表达式计算结果为非0就为真 那么语句就要被执行，否则不执行
  //  语句;
//还有一种else的   else否则
#include<stdio.h>

//判断一个数是不是奇数， 输出1-100之间的奇数
int main()
{
	int i = 1;
	while (i <= 100)
	{
		
			printf("%d ", i);
			i += 2;//没有判断，避开if语句，这里是i每次加的值为2
	}
	return 0;
}


//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		if (i % 2 ==1)//i%2 是i模2，就是除以二，代码的意思是i除以2余下是1，也能写成i%2 ！=0，这里是i模2的结果不等于0
//			printf("%d ",i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int num = 4;
//	if (5 == num)
//		printf("hehe\n");//这样就可以避免下面的bug
//	//if (num = 5)//一个=叫赋值，判断相等是两个==    避免出现这种情况，所以用上面这种方法写代码
//	//{
//	//	printf("hehe\n");
//	//}
//
//	return 0;
//}

//if (condition) condition是条件的意思
//{
//	return x;
//}
//return y;//这段代码的意思是条件满足就返回x，不满足就返回y


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b = 2)
//			printf("hehe\n");
//	}
//		else//要与第一个if匹配的话，就把第二个if扩到括号里就行了
//			printf("haha\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//打印没输出是因为上面a=0，所以这里的if语句为假，进不了if，所以下面的if也不执行，else这些都没反应
//		if (b = 2)
//			printf("hehe\n");
//		else//else与最近的没有匹配的if进行匹配
//			printf("haha\n");//此处的else和if是匹配的
//			
//	return 0;
//}
//int main()
//{
//	int age = 10;
//	if (age < 18)//if控制多条语句的时候包括else控制多条语句的时候都得用大括号括起来,一个大括号就是一个代码块
//
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//		else
//			printf("长寿人\n");
//	}
//	return 0;
//
//}
//{
//	int age = 110;
//	if (age < 18)
//		printf("未成年\n");
//	else //也可以写成下面这样，和没有括号的逻辑一样
//	{
//		if (age >= 18 && age < 28)//&&逻辑与 并且的意思
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//		else
//			printf("长寿人\n");
//	}

	//else if (18 <= age < 28)//不能这样，因为18<=10，是假的，就变成0，0又小于28 所以又为真，所以打出来的还是青年
	//所以应该写成下面这样
	//else if (age >= 18 && age < 28)//&&逻辑与 并且的意思
	//	printf("青年\n");
	//else if (age >= 28 && age < 50)
	//	printf("壮年\n");
	//else if (age >= 50 && age < 90)
	//	printf("老年\n");
	//else
	//	printf("长寿人\n");
	//int age = 20;
	//if (age < 18)
	//	printf("未成年\n");
	//else
	//	printf("成年\n");
	//int age = 20;
	//if (age < 18)
//	//	printf("未成年\n");//此时20>18所以不输出
//	return 0;
//}