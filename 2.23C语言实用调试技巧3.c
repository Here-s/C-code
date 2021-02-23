#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>


//常见错误类型
//1 编译型错误（语法错误） 代码少了东西 双击错误就会提醒出了什么错误
//2 链接型错误  这类问题 要么就是函数未定义 要么就是定义了 名字写错了
//int Add(int x, int y)
//{
//	return x + y;//函数的实现
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//提示无法解析的外部符号 Add 这类就是链接错误 所以应该实现函数 如果上面实现的时候写的是小写a 也会报错
//	printf("%d\n", sum);
//	return 0;
//}
//3 运行时错误 运行起来结果有问题 借助于调试解决问题


//int my_strlen(const char* str)//arr是首元素地址 所以拿char*来接收  求字符串长度  不希望被改变 所以  + const
//{
//	int count = 0;
//	assert(str != NULL);//保证指针有效性
//	while (*str != '\0')
//	{
//		count++;//循环一次加一个数
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "byte";
//	int len=my_strlen(arr);//strlen 是求字符串长度的
//	printf("%d\n", len);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)//最后优化的样子
//{
//	char* ret = dest;//刚开始就把dest的值存起来 最后再返回去
//	assert(dest!=NULL);//assert 断言的意思 要引头文件 #inlude<assert.h> 如果判断为真 那么assert就会当作什么都没发生 要是为假 就会报错
//	assert(src != NULL);
//		while (*dest++ = *src++)//把src指向的字符串拷贝到dest指向的空间，包含\0
//		{
//			;
//		}
//		return ret;
//}
//int main()//示范：模拟实现库函数 strcpy  字符串拷贝的意思
//{
//	char arr1[] = "#########";
//	char arr2[] = "byte";//把arr2数组的内容拷贝到arr1里面
//	//如果带一个返回值的话，将一个函数的返回值可以作另一个函数的参数  这样就是链式访问
//	//也可以拿一个函数的返回值检测目的地里面是不是想要的数据
//	printf("%s", my_strcpy(arr1,arr2));//因为返回的是arr1的地址 所以直接打印就行了  
//	return 0;
//}


//int main()//const也能修饰指针
//{
//	const int num = 10;//这种写法是非法的写法 因为const已经限制了 继续改的话 就不符合逻辑 所以在int* p 前面加上const 就改不了了
//	const int* p = &num;//const 可以放在*号两边 有不同的意思 放在指针变量的*左边 修饰的是*p 不能通过p来改变*p的值  
//	//const在*右边的话 就可以改*p的值了 如果在后面将某个值赋给p也是不行的 因为const在*右边 对p进行限制了 没有限制*p  
//	*p = 20;//对num改成20  因为前面加了const 所以这里报错了
//	printf("%d\n",num);
//	return 0;
//}

//void my_strcpy(char* dest, const char* src)//还能优化  因为源数据拷贝到目的数据  所以要感受到目的数据的变化 
//因为 src是源数据 要拷贝的 所以不能变  所以要加const 让它具有常属性  
//  //加const 让它具有常属性 它不能被改变  防止写反 放在类似于下面写反的样子
//{
//	assert(dest!=NULL);//assert 断言的意思 要引头文件 #inlude<assert.h> 如果判断为真 那么assert就会当作什么都没发生 要是为假 就会报错
//	assert(src != NULL);
//		while (*dest++ = *src++)//如果不小心写错 写成*src++=*dest++ 结果就会有问题了  而且长度够的话 就发现不了问题
//		{
//			;
//		}
//}
//
//int main()//示范：模拟实现库函数 strcpy  字符串拷贝的意思
//{
//	char arr1[] = "#########";
//	char arr2[] = "byte";//把arr2数组的内容拷贝到arr1里面
//	my_strcpy(arr1, arr2);//如果传的是空指针  空指针地址就是0  程序运行就挂了  
//	printf("%s", arr1);
//	return 0;
//}

//void my_strcpy(char* dest, char* src)//又一次优化  但是还能再优化
//{
//	assert(dest!=NULL);//assert 断言的意思 要引头文件 #inlude<assert.h> 如果判断为真 那么assert就会当作什么都没发生 要是为假 就会报错
//	assert(src != NULL);
//		while (*dest++ = *src++)
//		{
//			;
//		}
//}

//void my_strcpy(char* dest, char* src)//这是优化的结果  程序还能执行 最起码不会崩溃   但是不能发现问题  所以还能再优化
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

//int main()//示范：模拟实现库函数 strcpy  字符串拷贝的意思
//{
//	char arr1[] = "#########";
//	char arr2[] = "byte";//把arr2数组的内容拷贝到arr1里面
//	my_strcpy(arr1, NULL);//如果传的是空指针  空指针地址就是0  程序运行就挂了  
//	printf("%s", arr1);
//	return 0;
//}

//void my_strcpy(char* dest, char* src)//传过来是首元素的地址 所以是 char* 来接收 dest 表示目的  src表示源头 不需要返回 只要拷贝了就行了
//{//传过来的是首地址 把i赋给# src传过来的是b src++ 得到的是 y 都这样++ 赋值就行了
//
//	while (*dest++ = *src++)//还能优化成这样 当把\0拷过去的话 查ASCII码表发现\0的值是0  0为假 跳出循环
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, char* src)//传过来是首元素的地址 所以是 char* 来接收 dest 表示目的  src表示源头 不需要返回 只要拷贝了就行了
//{//传过来的是首地址 把i赋给# src传过来的是b src++ 得到的是 y 都这样++ 赋值就行了
//
//	while (*src != '\0')//
//	{
//		*dest++ = *src++;//使用后置++ 就能省略下面两步
//	}
//	*dest = *src;//这里是把*src的\0拷过去
//}

//void my_strcpy(char* dest,char* src)//传过来是首元素的地址 所以是 char* 来接收 dest 表示目的  src表示源头 不需要返回 只要拷贝了就行了
//{//传过来的是首地址 把i赋给# src传过来的是b src++ 得到的是 y 都这样++ 赋值就行了
//	
//	while (*src!='\0')//还能优化
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//这里是把*src的\0拷过去
//}
//int main()//示范：模拟实现库函数 strcpy  字符串拷贝的意思
//{
//	char arr1[] = "#########";
//	char arr2[] = "byte";//把arr2数组的内容拷贝到arr1里面
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "#########";
//	char arr2[] = "byte";//把arr2数组的内容拷贝到arr1里面
//	strcpy(arr1,arr2);//第一个参数是目的地，第二个参数是源头
//	printf("%s", arr1);//因为把\0也拷贝过去了 所以不打印剩下的
//	return 0;
//}

//如何写出好的代码(易于调试的代码)
// 1 代码运行正常  2 bug很少  3 效率高  4 可读性高  5 可维护性高  6 注释清晰  7 文档齐全
// 常见的coding（编程）技巧；
// 1 使用assert  2 尽量使用 const  3 养成良好的编码风格  4 添加必要的注释  5 避免编码的陷阱  

//int main()
//{	
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);//%p 打印字符 因为地址是字符 所以打印地址用%p
//	printf("%p\n", &i);//Dubug 版本下 i 的地址比arr大  在release版本下 arr的地址比 i 大  所以可能会出现bug
//	return 0;
//}

//int main()//用调试的方法解决死循环    Nice 公司笔试题  源于书《C陷阱和缺陷》
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };// 当把i  和arr 换个位置的时候 就不会死循环了  
//	for (i = 0; i <= 12; i++)// 直接在for循环里面定义 for(int i=0; i<=12; i++) 这是c++的编写方式 
//	{
//		printf("hehe\n");//VC6.0环境下   <=10 就死循环   gcc 编译器 <=11 就死循环  VS 编译器 <=12 就死循环    
//		arr[i] = 0;//代码是死循环， 因为造成了越界访问  当arr[12] 也被变成0的时候 i也=0了 而且它们的值也一样 那么是不是同一块儿空间呢？ 经过取地址发现地址
//		//发现地址一模一样  所以都会变成0 所以是死循环   
//		//栈区使用的时候默认先使用高地址的空间   数组随着下标的增长 地址是由低到高变化的 越界访问的时候也是往高地址访问  所以恰好发生这样的bug
//		//如果是release的话 就不会死循环  release会对代码有一定的优化 调整
//	}
//	return 0;
//}
