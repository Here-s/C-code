#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>//time函数需要引用头文件
void menu()
{
	printf("*********猜数字游戏********\n");
	printf("*****  1.play  0.exit  ****\n");
	printf("***************************\n");
}
//RAND MAX  在0-32767  之间
void game()
{
	int ret = 0;//变量一定要定义在当前代码的最前面
	int guess = 0;//接收猜的数字
	printf("开始猜数字\n");
	//1.生成一个随机数 2.猜数字

	
	ret=rand()%100+1;//生成随机数，生成1-100之间，因为rand在三万多，模一个100，剩下的在0-99之间，所以加个1，就是1-100 rand函数就是用来生成随机数
	//rand不能挪到下面的循环里面，不然会一直变，永远猜不对
	//printf("%d\n", ret);不能显示出来，不然就猜不了
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");//这里的猜大，猜小千万不能写错，不然也猜不出来
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//每次的数都一样，所以应该在srand里面给一个变量  可以用时间戳设置随机数的生成起始点，因为时间一直在变化
	//时间戳：当前计算机的时间-计算机的起始时间（1970.1.1,0:00）
	do//do while 循环，至少有一次循环，即至少进游戏一次
	{
		menu();
		printf("请选择>:");
		scanf("%d",  &input);
		switch (input)//用于多分枝
		{
		case 1:
			game();//玩游戏的过程
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);//input刚刚好，因为如果是0的话，刚好为假，跳出循环
	return 0;
}