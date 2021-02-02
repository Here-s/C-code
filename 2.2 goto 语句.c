#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)//关机程序只是需要一个循环，所以while也可以
	{
		printf("请注意，你的电脑将在一分钟内关机，输入“我是猪”就取消关机\n请输入：");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	
	}
	return 0;
}


//int main()//goto 可以直接跳到某个地方，可以直接跳出好几个循环
//{//goto 语句去关机
//	//shutdown -s -t 60  60秒关机
//	//shutdown -a   取消关机
//	//system函数  用来执行系统命令
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//要引用头文件   #include<stdlib.h>
//	again:
//	printf("请注意，你的电脑将在一分钟内关机，输入“我是猪”就取消关机\n请输入：");
//		scanf("%s", input);//因为输入的是字符串，所以%s
//	if (strcmp(input, "我是猪") == 0)//strcmp 用来比较两个字符串  等于0 说明相等  引用头文件   #include<string.h>
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//
//	printf("hello Byte\n");
//	goto again;//直接跳到again
//	printf("hhhh\n");
//again:
//	printf("llll\n");
//	return 0;
//}

//int main()//goto 语句是跳到哪里去
//{
//again:
//	printf("hello Byte");
//	goto again;
//	return 0;
//}