#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//引用system 所需头文件
#include<string.h>//引用strcmp 所需头文件
int main()
{
	char input[20] = { 0 };//数组存储数据
	//关机程序=关机
	//system() 专门用来执行系统命令的
	system("shutdown -s -t 60");//关机命令
again:
	printf("请注意，你的电脑将在一分钟内关机，如果输入:“我是猪”，就取消关机");
	scanf("%s",input );//%s是字符串的意思
	if (strcmp(input, "我是猪") == 0)//判断input中输入的是不是“我是猪”  strcmp-string compre
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
		return 0;
}
