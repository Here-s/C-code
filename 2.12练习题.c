#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求一个整数存储在内存中的二进制中1的个数

int main()//按位与方法
{
	int num = 0;//这次先找出32个bit位 然后再算 按位与1 如果原来是1 按位与1 那么结果是1 说明这里是1
	int count = 0;
	scanf("%d", &num);
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))//按位与1  移位操作符
			count++;
	}
	printf("%d\n",count );
	return 0;
}

//int main()//有问题 如果是-1的话结果是0 所以不对  优化之后如上
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);//题目也就是统计num的补码中有几个1
//	//假设3 -011 %2之后剩的是最后一个1  3/2是把最后面的一个1去了 所以是剩余的是01
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}
