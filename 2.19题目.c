#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>




//double Pow(int n, int k)//写1.0方便算小数  所以是double
//{//思路  n的k次方 等于n*n^(k-1)  n乘以n的k-1次方
//	if (k <0)//如果是负数呢 
//	{
//		return (1.0 / (Pow(n, -k)));//写1.0方便算小数
//	}
//	else if(k==0)
//	{
//		return 1;
//	}
//	else
//		return n * Pow(n, k - 1);
//}
//int main()//编写一个函数，实现n的k次方，使用递归实现
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret=Pow(n,k);//Pow来表示n的k次方 返回是double，所以是double接收
//	printf("ret=%lf\n",ret);
//	return 0;
//}

//int DigitSum(unsigned int num)//例如1729  要这样算 就要把每一位都拆下来 最后一位模十就能得到 所以可以先求出172的和 再加9
////就是这样算 DigitSum(172) +1729%10   以此类推  当只剩1的时候就不用拆了
//{
//	if (num > 9)//十进制数字 
//	{
//		return DigitSum(num / 10) + num % 10; //除10就是慢慢的把最后一位拆下来  模10就是  把每一位都拆下来 最后一位模十就能得到
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()//写一个递归函数DigitSum(n),输入一个非负整数，返回组成它的数字每位的和 例如132  返回和是6
//{
//	unsigned int num = 0;//unsigned 使数变成非负整数
//	scanf("%d", &num);
//	int ret=DigitSum(num);
//	printf("ret=%d\n",ret);
//	return 0;
//}

//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0]=arr[len - 1];//将f放到a的位置
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)//这里的意思是 大于两个元素才进行 因为大于两个元素才能交换 
//	{
//		reverse_string(arr + 1);//把第二个元素传进去
//	}
//	arr[len - 1] = tmp;
//}
//int main()//编写一个函数 reverse_string(char*string) (递归实现) 将参数字符串的字符反向排列（逆序）  不能使用c库函数中的字符串操作函数
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//只要执行了 那么字符串内容就是fedcba  
//	
//  //逆序 abcdef 分为两步 1 交换af 2 逆序bcde
//  //弄成这样 reverse_string("abcdef")  1 交换af  2 逆序reverse_string("bcde") 将第二步继续按照这样去进行 一直进行到cd
//	//具体步骤为先把a挪出来 再把f挪到a的位置 在f挪走的空位置放一个\0  继续把bcde逆序一下 然后再把a放到\0
//	printf("%s\n", arr);//%s打印字符串
//	return 0;
//}

//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;//strlen 求字符串长度  不能使用库函数 所以用 my_strlen
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()//编写一个函数 reverse_string(char*string) (递归实现) 将参数字符串的字符反向排列（逆序）  不能使用c库函数中的字符串操作函数
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//只要执行了 那么字符串内容就是fedcba  只要把对应的一组一组交换一下就行了
//	//取地址交换
//  //逆序 abcdef 分为两步 1 交换af 2 逆序bcde
//  //弄成这样 reverse_string("abcdef")  1 交换af  2 逆序reverse_string("bcde") 将第二步继续按照这样去进行 一直进行到cd
//	printf("%s\n", arr);//%s打印字符串
//	return 0;
//}