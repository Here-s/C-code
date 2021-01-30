#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//循环语句  while(较多)      for(最多)      do while(较少)三种
//while循环，条件为真即执行，执行完成之后返回来如果还为真，就继续循环，直到一次为假就不执行了
//“||”这是或者的意思

int main()//一道笔试题
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//这里不循环，因为判断那里把k赋值0了，0为假，所以程序不执行，所以循环0次
		k++;
	return 0;
}


//int main()//for循环变种1
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)//把i=0,和j=0删了就变成10个了，因为这样第二次进来之后 j 还是10，所以不执行，也就不打印
//	{
//		
//		for (; j < 10; j++)
//		{
//			printf("haha\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for(i = 0; i <10; i++)
//	{
//		
//		for (j = 0; j < 10; j++)
//		{
//			printf("haha\n");
//		}
//	}//两个循环，所以是100次
//	return 0;
//}

//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");//for循环的初始化 调整 判断都可以省略  但是如果少了判断，那么结果恒为真，就会死循环
//		//如果不是很熟练，建议不要随便省略代码
//	}
//	return 0;
//}

//int main()//建议for循环控制变量的取值采用“前闭后开区间”写法
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//左边从0开始，右边<10,就是前闭后开，这样是10次循环
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()//不可在for循环体内修改循环变量，防止for循环失去控制
////建议for循环控制变量的取值采用“前闭后开区间”写法
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if(i=5)//i被改成5，所以一直循环
//		printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//int i = 0;
//for (i = 1; i <= 10; i++)
//{
//	if (i == 5)
//		continue;//跳过这个循环，回到循环开始，所以没有5
//	printf("%d\n", i);
//}
//return 0;
//}

//int main()//for循环表达式  for（表达式1;表达式2;表达式3）
////表达式1：初始化部分    表达式2：条件判断部分    表达式3：调整部分
////for循环打印1-10
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;//跳出循环
//		printf("%d\n", i);
//	}
//     	return 0;
//}
//

//int main()//
//{
//	int i = 0;//相当于循环变量的初始化   当代码越来越复杂的时候这句话下面就会加很多很多代码，循环里面也会有很多代码，
//	//很多代码就可能会有bug，所以就有了for循环
//
//
//	while (i < 10)//循环变量的判断
//	{
//		//......
//		i++;//循环变量的调整
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) !=EOF)//写while循环要有一个变量
//	{
//		if (ch < '0' || ch>'9')//“||”是或者的意思
//			continue;
//		putchar(ch);
//
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//当密码输入123456 ABCD时又不行了，这是因为每个getchar只能接受一个字符，当把缓冲区都读走了就可以执行下一步了
//	//所以可以用while循环读字符
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N):>");
//
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("取消确认");
//	}
//	return 0;
//}


//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s",password);//输入密码，并存放在password数组中
//	printf("请确认（Y/N):>");
//	getchar();
//	ret = getchar();//接受一个N或者Y     代码不成功是因为上面把密码读走之后缓冲区还有\n,从而导致直接运行到下一步
//	//所以在读取一下，把\n读取走了就行了，就可以继续运行了，所以再加一次getchar,加在13行，只要读走就行了
//	if (ret == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("取消确认");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//输入EOF停不下来是因为输一个字符打印一个字符，所以停不下来
//		//当使用ctrl+z的时候getchar 就会获取一个EOF到ch里面从而结束
//		//EOF=end of file 文件结束标志
//	{
//		putchar(ch);//putchar不用加""号
//	}
//	return 0;
//}

//int main()//打印出1-10
//{
//		int ch = getchar();//输入字符  char-字符
//		putchar(ch);//输出  也有打印的意思,和printf("%c\n",ch)一样  %c打印字母
//		return 0;
//	return 0;
//}


//int main()//打印出1-10
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//continue 跳过本次循环，即后面的代码不继续，而是进入下一次的循环入口
//		printf("%d ", i);
//		i++;//由于要循环，所以放到while中
//	}
//	return 0;
//}


//int main()//打印出1-10
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i ==5)
//			break;//终止循环
//		printf("%d ", i);
//		i++;//由于要循环，所以放到while中
//	}
//	return 0;
//}

//int main()
//{
//	while (1)//因为1恒为真，所以一直循环
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	if (1)  把if换成while
//		printf("hehe\n");
//	return 0;
//}