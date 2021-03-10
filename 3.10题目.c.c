#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>//刷题的时候可以不用assert 因为可能会导致问题
#include<math.h>


int main()//在屏幕上面用*打印菱形  只有奇数行才能打印出这个图案  分为上半部分7行 下半部分6行
//上半部分的规律是每一行空格都在减小  *都在增加 下半部分空格增加 *减少
{
	int line = 0;
	scanf("%d", &line);//7
	//打印上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//将每一行打印分为两部分 空格和*
		int j = 0;
		for (j = 0; j < line - 1-i; j++)//因为line是7 所以第一行打印6个空格  i增加 空格要减少 所以是
		{
			printf(" ");
		}
		for (j = 0; j < 2*i+1; j++)//第一行的时候打印1个 第二行是三个 所以是2*i+1
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <=i ; j++)//打印空格 
		{
			printf(" ");
		}
		for (j = 0; j <2*(line-1-i)-1 ; j++)//发现规律 倒数第几行 * 就是行数*2-1
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//int main()//打印水仙花数  水仙花数 是指一个n位数 其中各位数字的n次方之和恰好等于该数本身 例如153=1^3+5^3+3^3 则153是一个水仙花数
////求1-100000之间类似于水仙花数这样的数
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)//因为这里会改i的值
//	{//判断i是不是这样的数 所以要先算出位数 然后在算出每位的位数之和   1 算出i的位数 n位数  2计算i的每一位的n次方之和sum  3 比较i和sum如果等于那就成立
//		//1 算出i的位数 n位数
//		int n = 1;//123举例 除10商的不是0 那就n++ 就说明不是1位数 如果商的是12 那就说明去掉了一位3  然后12再除10 得到的不是0 继续n++ 1除10得到0 n就不加了
//		//此时算完n加了两次 123是三位数 所以n应该初始化为1
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)//因为当最后除的等于0时 为假 就跳出循环了  因为i还会++ 如果这里把i改成0了 那就导致循环变量在循环内部就被改了 可能导致死循环 
//			//所以不能拿i来除 应该用临时变量来除 用tmp
//		{
//			n++;
//		}//循环结束后 n就是位数
//		// 2计算i的每一位的n次方之和sum
//		tmp = i;//又将tmp变成原来的i的值
//		while (tmp)
//		{
//			sum+=pow(tmp % 10, n);//%10得到最低位  pow求次方 头文件是math.h
//			tmp /= 10;//算出倒数第二位
//		}
//		//3 比较i和sum如果等于那就成立
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()//计算求和 求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);//2 5 意思是循环<5次
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	//输入2 5的时候要产生 2 22 222 2222 22222  前一项乘10+2(也就是+a)就得到了后一项
//	//
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;//第一次就是2 下一次是2*10+2=22 所以就构成了
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//void reverse(char* str)//因为arr的首元素地址是char类型 所以放一个char*指针 不用返回 所以是void
////既然是交换 假设是abcdef af交换 be交换 cd交换 就行了left指向a right指向f 与长度有关 所以算长度
//{
//	assert(str);//保证指针有效性
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;//假设是abcdef起始位置+6指向f 等于+长度-1 产生的是最右边的元素
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()//写一个函数，可以逆序字符串的内容   牛客网题
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//%s 字符串  逆序 abcdef 变成fedcba 是数组内容变成这样  scanf读取的时候 遇到空格就不读取了
//	gets(arr);//读取一行 放到arr里面
//	reverse(arr);//逆序函数 因为要逆序字符串 所以把arr传过去
//	printf("逆序后的字符串：%s\n", arr);
//	return 0;
//}

//int main()//程序的输出结果是
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;//将6的地址赋给pulPtr  pulPtr指向6 
//	*(pulPtr + 3) += 3;//+3解引用指向的是9 +=3之后9就变成了12 所以数组内容就变成了{ 6,7,8,12,10 }
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6,12
//	return 0;
//}