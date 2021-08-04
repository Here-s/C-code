#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//如何写出优秀的代码
//1 代码运行正常
//2 bug很少
//3 效率高
//4 可读性高
//5 可维护性高
//6 注释清晰
//7 文档齐全


//常见的coding技巧
//1 使用assert
//2 尽量使用const
//3 养成良好的编码风格
//4 添加必要的注释
//5 避免编码的陷阱


//模拟实现strcpy函数  就是拷贝字符串  将一个字符串拷贝到另外一个字符串
//如果在文档当中遇到 Null null 说明这个地方是 '\0' 

//版本 1   还能优化
//void my_strcpy(char* dest, char* src)//因为是首元素地址 所以用指针来接收
////也要把 '\0' 考下来
//{
//	//dest 执行目标空间     src  指向源字符串
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//版本 2 
//void my_strcpy(char* dest, char* src)//因为是首元素地址 所以用指针来接收
////也要把 '\0' 考下来
//{
//	//dest 执行目标空间     src  指向源字符串
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//因为是后置++ 因为++优先级更高，但是解引用也是得到原来值 
//		//所以也可以这样写
//	}
//	*dest = *src;
//}

//版本 3
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)//这样写是类似于 int a = 10;   int b = (a++); 所以也可以执行
//		//当把 a 拷过来之后 表达式为 a 为真 所以继续循环  当考到 '\0' 的时候，表达式就是 0
//		//表达式是 0 就跳出循环
//	{
//		;
//	}
//}

//版本 4
//void my_strcpy(char* dest, char* src)//万一传的是空指针 那么程序就会挂掉
//{
//	//
//	assert(src != NULL);//断言 这是一个宏 release版本可以优化掉 
//	//如果assert 报错的话 就会报错在第几行
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//版本 5
//void my_strcpy(char* dest, const char* src)//加上const 就可以防止 while里面顺序写错
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++)//如果这里写反了 就出错了 
//	{
//		;
//	}
//}

//版本 6
//char* my_strcpy(char* dest, const char* src)//
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回拷贝后的字符串
//	return ret;
//}

//int main()
//{
//	//char arr1[] = "abcdef";
//	//char arr2[10] = { 0 };
//
//	//char arr1[] = { 'a','b','c' };//因为没有 '\0' 所以就会越界访问 
//	//char arr2[10] = "xxxxxxxx";
//
//	//char arr1 = "abcdef";
//	//char arr2[3] = { 0 };//程序也会崩溃 因为目标空间不够 所以也是越界访问  程序会崩溃
//
//	//拷贝的目标空间必须足够大 
//
//	char arr1 = "abcdef";
// //目标空间必须可修改 不然放不进去
//	const char* arr2 = "xxxxxxxxx";//这样也不行 指针指向的是常量字符串 在常量区放着 不可以修改 修改就会报错
//	//加上const 会更安全
//
//	char* ret = my_strcpy(arr2, arr1);
//	printf("%s\n", ret);
//	return 0;
//}


//const 使用
//const 放在 * 的左边 修饰的是指针指向的内容 (*p)，指针指向的内容(*p) 就不能改变了
//但是指针变量本身是可以改变的
// 
//const 放在 * 的右边  修饰的是指针变量本身(p)，指针指向的内容(*p) 可以修改 
//但是指针变量本身不能修改
// 

//int main()
//{
//	const int num = 10;
//	//num = 20;//加上 const  num就不能修改了
//	//int* p = &num;// 通过指针来修改num的值
//
//	//const int* p = &num;// 加上 const 也就不能修改了  const 放在 * 左边 修饰的是指针所指向的对象
//	//限制的是 *p  就是 *p 不能修改了   但是可以让 p指向另外一个数的地址
//   const int* p = &num; 等价于  int const* p = &num;
//
//	int* const p = &num;// 这样的话 p指向的对象就不能改变了  const放在 *的右边  修饰的是p 限制的是p
//	//所以  *p可以使用  不能让 p指向另外一个对象
//
//	*p = 20;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}


//程序崩溃的原因可能是非法访问 指针越界 非法访问内存

//打印字符串的时候不需要取地址 不需要解引用，因为是以%s 形式打印的 
//常量字符串是不能修改的

//int main()
//{
//	const char* str = "abcdef";//这个地方并不是把 abcdef 放到 str里面 而是把这个常量字符串首字符 a 的地址
//	//放到 str 当中
//	printf("%s\n", str);
//	printf("%c\n", *str);//因为放的是 a 的地址 所以解引用出来是 a 
//	return 0;
//}


//局部变量只能在作用域当中使用

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* ret = test();
//	*ret = 20;//一定不能这样写 因为调用函数结束之后 就把变量 a 的空间销毁了 所以这样写得话 会有bug
//	return 0;
//}


//模拟实现 strlen 

//unsigned int my_strlen(const int* arr)//因为字符串长度肯定是 大于等于 0 的 所以可以使用 unsigned int
//{
//	assert(arr != NULL);
//	int count = 0;
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//但是strlen的返回值是无符号数 所以也会导致一些问题
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");//输出 hehe 因为strlen 返回的是 无符号数  两个无符号数相减被认为也是无符号数
//		// 3 - 6 = -3  被当成了符号位 所以符号位也算作有效位了  按位取反 +1 
//		//就是 11111111111111111111111111111101 所以就得到了这个  所以是 hehe 
//		//无符号数和正数一样  原反补相同 
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//统计一个数当中 二进制1 的个数（求的是补码的）   谷歌的面试题
//size_t count_bit(int n)// size_t 表示无符号数
////按位与 1 结果是 1 就count++ 然后num右移一位
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//还能这样写
//size_t count_bit(unsigned int n)//这样的话 就算是负数 也能这样算了
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)//说明二进制位有一个1
//		{
//			count++;
//
//		}
//		n /= 2;
//	}
//	return count;
//}

//这样写 
//size_t count_bit(int n)
//{
//	//n = n & (n - 1)   每次这样 都会 使得二进制位少一个 1 
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = count_bit(num);
//	printf("%d\n", ret);
//	return 0;
//}


//求一个数是不是 2 的次方   n = n & (n - 1)  这样一次如果等于 0 的话 就说明是 2 的次方 
//因为 2 的次方的二进制位 只有一个 1  就是 if(((n & (n - 1)) == 0)

int main()
{
	int n = 0;
	scanf("%d", &n);
	if ((n & (n - 1)) == 0)
	{
		printf("是2的次方\n");
	}
	else
	{
		printf("不是2的次方\n");
	}
	return 0;
}