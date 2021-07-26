#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


// getchar() 从键盘读取字符 不需要参数 返回类型是 int   只能读取字符
//getchar() 返回的是字符 其实返回的是字符的ASCII码值
// getchar()在读取结束或失败的时候，会返回 EOF   EOF-end of file 是 -1
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//将 getchar()读取的字符放在 ch 
//		//读取的时候  CTRL+Z 就读取结束了
//	{
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	printf("请确认密码(Y/N): ");
//	getchar();//这下就把缓冲区剩下的东西读走了 
//	int tmp = 0;//把getchar 获得的字符放在tmp当中
//	while ((tmp = getchar()) != '\n')	//如果输入密码的时候输入 abcd ef  还是确认失败 还是从缓冲区读取 
//		//scanf读取到空格就不再往后读了一个 getchar 只能清理一个字符 
//	{
//		;//这里就是一直读取到 \n 
//	}
//	int ch = getchar();//scanf getchar 这样的函数 是从键盘上面读取数据  函数和键盘之间还有一段缓冲区
//	//缓冲区输入的是 zbcdef\n 因为有回车  scanf读取的是回车前的东西 所以就把 abcdef 放在了password
//	//缓冲区还剩  \n   getchar 看到缓冲区还有 \n  就把 \n 读走了 因为回车也是一个字符 
//	//只有缓冲区为空的时候 getchar 才会等待键盘输入  所以 getchar 读取之前把缓冲区清空就好了
//
//	
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}


//int main()
//{
//	char arr[20] = "XXXXXXX";
//	scanf("%s", arr);//每次读完之后 会加一个 \0 
//	//gets 是直接读取一行   scanf printf 这些函数 没必要深入研究
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while (ch = getchar() != EOF)
//	{
//		if (ch < '0' || ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}


//int test()
//{
//	int a = 10;
//	int b = 20;
//	return a, b;
//}
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);//20  因为return 只能带回来一个值  这里就是一个逗号表达式
//	return 0;
//}


// 形参用数组返回两个数 把函数处理结果的二个数据返回给主调函数 
//void test(int arr[])
//{
//	int a = 10;
//	int b = 20;
//	arr[0] = a;
//	arr[1] = b;
//}
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//	printf("%d %d\n", arr[0],arr[1]);//20  因为return 只能带回来一个值  这里就是一个逗号表达式
//	return 0;
//}


// 形参用两个指针 把函数处理结果的二个数据返回给主调函数
//void test(int* px,int* py)
//{
//	int a = 10;
//	int b = 20;
//	*px = a;
//	*py = b;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//
//	test(&x,&y);
//	printf("%d %d\n", x,y);//20  因为return 只能带回来一个值  这里就是一个逗号表达式
//	return 0;
//}



//用两个全局变量返回两个数 把函数处理结果的二个数据返回给主调函数
//int x = 0;
//int y = 0;
//void test()
//{
//	int a = 10;
//	int b = 20;
//	x = a;
//	y = b;
//}
//int main()
//{
//	test();
//	printf("%d %d\n", x, y);//20  因为return 只能带回来一个值  这里就是一个逗号表达式
//	return 0;
//}


//高内聚低耦合 就是每个函数考虑自己的事情 尽量不跟别人关联起来 不建议在设计函数的时候使用全局变量
//函数的参数不宜过多  函数传参的时候 可以传变量 常量 表达式


//打印乘法口诀表

//void print(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}



//递归实现字符串逆序排列
//void reverse_string(char* arr)//非递归实现  将前面和后面的字符依次逆序
//{
//	int len = strlen(arr);//字符串长度
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];// a
//		arr[right] = tmp;// f
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[20] = "abcdef";
//	//数组名是首元素的地址  首元素就是 char 类型   char*
//	reverse_string(arr);
//	printf("%s\n", arr);//期望结果是：fedcba
//	return 0;
//}

//递归实现
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	//reverse ("abcdef")    交换 a f + reverse("bcde")   然后一步一步去交换
//	int len = my_strlen(arr);
//	char tmp = arr[0];
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1) >= 2)//如果中间的字符串是 0 或者1 就不需要逆序了 只有大于等于2 才继续逆序
//		//因为bcde要不要逆序 就是看中间bcde的长度 所以要 arr+1 arr+1就指向b 所以就是从b开始求
//	{
//		reverse_string(arr + 1);//逆序从b开始的字符串 arr + 1 就是第二个字符串
//	}
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[20] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);//期望结果是：fedcba
//	return 0;
//}



//计算一个数的每位之和 非负整数 
//int DigitSum(unsigned int num)
//{
//	//DigitSum(1234)    DigitSum(123)+4    DigitSum(12)+3+4   DigitSum(1)+2+3+4
//	//也就是大于9 才往下拆
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 1729;
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}


//求n的k次方 递归实现
double Pow(int n, int k)
{
	if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else if (k == 0)
	{
		return 1.0;
	}
	else
	{
		return 1.0 / Pow(n, -k);
	}
}
int main()
{
	int n = 2;
	int k = -3;
	double ret =  Pow(n, k);//库函数有一个求n次方函数 是 pow 所以这里应该写的不一样
	//当 k 大于0的时候 求次方   k等于0的时候 是1   k小于0的时候 就是1.0除
	printf("%lf\n", ret);
	return 0;
}

//什么是编程思维
//把实际转化为代码的思维 - 解决问题的步骤 - 利用C语言语法去实现
//计算机就是把10进制转化为二进制