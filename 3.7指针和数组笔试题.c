#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>





int main()//二维数组
{
	int a[3][4] = { 0 };//三行四列
	printf("%d\n", sizeof(a));//48  因为三行四列一共12个 所以是48
	printf("%d\n", sizeof(a[0][0]));//4 因为是第一行第一个元素 整型 所以是4
	printf("%d\n", sizeof(a[0]));//16 因为是第一行 所以是16  第二行是a[1]   第三行是a[2] 
	printf("%d\n", sizeof(a[0]+1));//4 因为这里a[0]是首元素地址 +1是第二个元素地址 所以地址是4 
	printf("%d\n", sizeof(*(a[0]+1)));//4 因为a[0]+1是第二个元素的地址 所以解引用 就是第二个元素 所以是整型 是4
	printf("%d\n", sizeof(a+1));//4 因为a是第一行的地址 +1就是第二行的地址 所以还是4
	printf("%d\n", sizeof(*(a+1)));//16 这里是计算第二行的大小 所以是16 
	printf("%d\n", sizeof(&a[0]+1));//4 是第二行的地址 因为&a[0]是第一行的地址 +1就是第二行的地址 
	printf("%d\n", sizeof(*(&a[0]+1)));//16 因为是第二行的地址解引用 所以是16
	printf("%d\n", sizeof(*a));//16 因为是a第一行 是首元素地址 有三行 三个元素 所以是第一行 是16
	printf("%d\n", sizeof(a[3]));//16 sizeof括号里的东西不会访问 根据类型计算大小 按照之前的样子 所以还是之前的大小 所以是16
	return 0;
}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//6 p是首元素地址 a的地址 从a开始数 所以是6
//	printf("%d\n", strlen(p+1));//5 首元素地址+1，得到b的地址 所以从b往后数，就是5
//	//printf("%d\n", strlen(*p));//代码崩溃 因为解引用是a 97 以97位地址 所以非法访问
//	//printf("%d\n", strlen(p[0]));//程序崩溃 因为传的是a的97 非法访问
//	printf("%d\n", strlen(&p));//随机值 因为p取地址，从地址处开始向后取 直到\0出现
//	printf("%d\n", strlen(&p+1));//随机值 因为p的空间向后+1，后面的空间不知道有些什么 所以也是随机值
//	printf("%d\n", strlen(&p[0]+1));//5 因为&p[0]是第一个元素 +1就是从b开始往后数 所以是5
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//这里是常量字符串abcdef的a的地址放进p里面  
//	printf("%d\n", sizeof(p));//4 因为p是指针变量 所以是计算指针变量p的大小 所以指针是4个字节
//	printf("%d\n", sizeof(p+1));//4 p存的是a的地址 +1得到的就是字符b的地址 所以还是4
//	printf("%d\n", sizeof(*p));//1 *p就是解引用 字符串的第一个字符 就是a，所以是1
//	//int arr[10]; arr[0]==*(arr+0)
//	printf("%d\n", sizeof(p[0]));//1 这里是第一个元素 所以还是1  p[0]==*(p+0)
//	printf("%d\n", sizeof(&p));//4 因为取的是p的地址 是地址 就是4个字节
//	printf("%d\n", sizeof(&p+1));//4 取p的地址+1 跳过p 是另外一个地址 所以是4
//	printf("%d\n", sizeof(&p[0]+1));//4 取a的地址+1 得到b的地址 所以还是地址 还是4
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//初始化之后，放的是 a,b,c,d,e,f,\0  
//	printf("%d\n", strlen(arr));//6 因为最后有一个\0未显示
//	printf("%d\n", strlen(arr + 0));//6 首元素地址+0 还是首元素地址往后数 所以是6
//	printf("%d\n", strlen(*arr));//程序崩溃  因为是a 所以解引用是97 把97当成地址去访问 所以是非法访问
//	printf("%d\n", strlen(arr[1]));//程序崩溃  因为传的是b 98 所以还是非法访问
//	printf("%d\n", strlen(&arr));//6 拿到的是arr数组 还是从开始往后数 所以是6   &arr 数组的地址 数组指针char(*p)[7]=&arr
//	printf("%d\n", strlen(&arr + 1));//随机值 取地址+1 跳过一个数组 还是一个数组地址 因为不知道后面究竟是什么样子 所以是随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5 因为拿出第一个元素的地址 +1就是b的地址 所以开始往后数 就是5
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//初始化之后，放的是 a,b,c,d,e,f,\0  放了7个字符
//	printf("%d\n", sizeof(arr));//7 算的是数组所占空间的大小 与\0没有直接的关系 这里是表示整个数组7个字符*1=7个字节
//	printf("%d\n", sizeof(arr+0));//4 首元素的地址+0还是首元素地址 所以是4 算的是地址的大小
//	printf("%d\n", sizeof(*arr));//1 取首元素的地址 所以是1
//	printf("%d\n", sizeof(arr[1]));//1 第二个元素 大小也是1
//	printf("%d\n", sizeof(&arr));//4 取的是地址 地址是4个字节 32位平台
//	printf("%d\n", sizeof(&arr+1));//4 跳过一个数组的地址 因为还是地址 所以还是4 
//	printf("%d\n", sizeof(&arr[0]+1));//4 取的是第二个元素的地址 所以还是4个字节
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//随机值 因为要找到\0才能结束 所以是随机值
//	printf("%d\n", strlen(arr + 0));//随机值 首元素地址也得找\0 所以是随机值
//	printf("%d\n", strlen(*arr));//程序崩溃  传的是首元素 a对应的ASCII码值为97  就会以97去访问地址 所以是非法访问 程序会崩溃
//	printf("%d\n", strlen(arr[1]));//程序崩溃  传的是第二个元素 b 对应的是98  所以也是错误的
//	printf("%d\n", strlen(&arr));//随机值 和前面的一样取的是数组的地址 也是从a开始数 所以和之前的一样
//	printf("%d\n", strlen(&arr + 1));//随机值  因为+1 跳过这个地址 所以是从最后面开始找的 所以和之前的随机值差6 因为跳过6个
//	printf("%d\n", strlen(&arr[0] + 1));//随机值 取第一个地址+1 所以从是b开始往后数  所以比前两个少1
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6 因为数组6个元素 每个元素1个字符 所以是6
//	printf("%d\n", sizeof(arr+0));//4 arr是首元素地址 加0仍然是首元素地址 地址大小是4
//	printf("%d\n", sizeof(*arr));//1 因为解引用得到的是首元素 所以是1
//	printf("%d\n", sizeof(arr[1]));//1 因为是第二个元素 所以也是1
//	printf("%d\n", sizeof(&arr));//4 得到的是数组的地址 但还是地址 所以是4
//	printf("%d\n", sizeof(&arr+1));//4 因为跳过了一个数组 但还是地址 所以还是4
//	printf("%d\n", sizeof(&arr[0]+1));//4 取第一个元素的地址 +1得到第二个元素的地址 所以是4
//	return 0;
//}

//数组名是首元素地址但有两个例外 
//1 sizeof(数组名）是个例外
//2 &数组名 表示整个数组 
//除此之外 所有的数组名都是首元素地址
//int main()//一维数组
//{
//	int a[]={ 1,2,3,4 };//整型的一维数组
//	printf("%d\n", sizeof(a));//16 因为是整型数组 数组是四个元素 所以是16
//	printf("%d\n", sizeof(a+0));//4 因为是首元素地址+0,所以还是首元素地址32为平台为4
//	printf("%d\n", sizeof(*a));//4 首元素地址解引用 得到首元素 所以是4
//	printf("%d\n", sizeof(a+1));//4 因为和上面a+0一样 不过是第二个元素的地址
//	printf("%d\n", sizeof(a[1]));//4 计算的是第二个元素的大小
//	printf("%d\n", sizeof(&a));// 4 取地址a取出的是数组的地址 地址的大小在32位就是4个字节
//	printf("%d\n", sizeof(*&a));//16 因为解引用得到的是整个数组 所以是4*4=16
//	printf("%d\n", sizeof(&a+1));//4 跳过一个数组 还是一个地址 所以还是4
//	printf("%d\n", sizeof(&a[0]));//4 取第一个元素的地址 所以还是4
//	printf("%d\n", sizeof(&a[0]+1));//4 取第一个元素的地址+1 所以是第二个元素的地址
//	return 0;
//}