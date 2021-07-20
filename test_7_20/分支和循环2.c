#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>;
#include<time.h>;
#include<string.h>



////猜数字游戏
////1 电脑随机生成一个 1-100 的数字   2 玩家开始猜数字   3 如果猜对了 就提示猜对了  
////4 如果没猜对 就提示猜大了或者猜小了  5 可以反复玩
//
////0x123  是16进制   0123  是八进制
//void menu()
//{
//	printf("*******************************\n");
//	printf("**********  1. play  **********\n");
//	printf("**********  0. exit  **********\n");
//}
//void game()
//{
//	int guess = 0;
//	//1 生成随机数
//	int ret = rand() % 100 + 1;//使用rand函数 生成随机数 每次调用rand之前 应该用srand设置随机数起点
//	//生成1-100   % 100 之后得到的余数就是 0-99  所以再+1 就是 1-100的数字了  应该每次生成之后再猜
//	 
//	//2 猜数字
//	while (1)//使循环一直为真，直到才对才跳出循环
//	{	
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你 猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	//至少执行一次 所以用do while()  循环
//	srand((unsigned int) time(NULL));//使用srand设置随机数起点  不要频繁调用  当起点不变的时候，随机数也一样，
//	//随意随机数起点也要变  因为电脑上面的时间  一直都在变化  所以可以用时间戳来生成随机数  
//	//所以只要传进去时间戳就行了  获得时间戳的方法  用time 函数 
//	do
//	{
//		menu();
//		printf("请选择:> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default :
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//goto 语句   跳到某个地方  可以往前跳 也可以往后跳  打乱程序的执行流程  可以一次跳出多层循环
//
//尽量不要用 goto 语句  

//int main()
//{
//flag://是一个标记，
//	printf("haha\n");
//	printf("haha\n");
//	printf("haha\n");
//	printf("haha\n");
//	goto flag;//到flag的地方
//	return 0;
//}


//关机程序  只要程序运行起来  电脑就倒计时一分钟 一分钟后就关机 如果在一分钟内输入 “我是猪” 就取消关机

int main()
{
	//关机  而且倒计时   关机命令  shutdown -s -t 60    -s使表示设置关机  -t使表示设计关机
	// shutdown -a  是取消关机
	
	char input[20] = { 0 };
	system("shutdown -s -t 60");//执行系统命令  关机
//again:
//	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))//两个字符串比较 不能用 ==  应该用strcmp
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}

	//也可以用循环来实现
	while (1)
	{
		printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
		scanf("%s", input);
		if (0 == strcmp(input, "我是猪"))//两个字符串比较 不能用 ==  应该用strcmp
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}