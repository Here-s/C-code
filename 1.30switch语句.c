#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//测试
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{//switch允许被嵌套使用
		case 1://这里不被执行是因为这个switch的n=2，所以执行case 2，就像工作日和休息日一样，所以最后m=5，n=3
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m=%d,n=%d\n", m, n);
	return 0;
}


//switch也是一种分支，用于多种分支的情况
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//			if (n == 1)
//				printf("hehe\n");//在case语句中可以出现if
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//		  printf("工作日\n");
//		  break;
//		case 6:
//		case 7:
//		  printf("休息日\n");
//		  break;
//		default://这里的意思是如果上面都不能进行的话，那么执行这样,也可以放在前面
//			printf("输入错误");
//			break;
//
//	}

//	int day = 0;
//	scanf("%d", &day);//&是取地址符
//	switch (day)//break停止循环，跳出循环switch（整形表达式），即上面day前面要有int
//	{
//	case 1://case后面加常量和整形表达式即1 2 之类的，不能有1.0之类的，
//		printf("星期一\n");
//		break;
//	case2:
//		printf("星期二\n");
//		break;
//	case3:
//		printf("星期三\n");
//		break;
//	case4:
//		printf("星期四\n");
//		break;
//	case5:
//		printf("星期五\n");
//		break;
//	case6:
//		printf("星期六\n");
//			break;
//	case7:
//		printf("星期日\n");
//		break;
//	}

	//if (day == 1)这样太麻烦，所以用上面的switch方法
	//	printf("星期一\n");
	//else if (2 == day)
	//	printf("星期二\n");
	//else if (3 == day)
	//	printf("星期三\n");
	//else if (4 == day)
	//	printf("星期四\n");
	//else if (5 == day)
	//	printf("星期五\n");
	//else if (6 == day)
	//	printf("星期六\n");
	//else
	//	printf("星期日\n");
//	return 0;
//}