#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//strcat 函数  字符串连接，字符串追加 返回的是目标空间的起始地址
//char* my_strcat(char* dest, const char* src)
//{
//	assert(src && dest);
//	char* ret = dest;//数组名就是首元素地址
//	//找到目标字符串的末尾 '\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = { 'd','e','f' };
//	//strcat(arr1, "def");//在 arr1 后面追加一个 def  arr1 要有足够的空间 目标看见必须足够大
//	//strcat(arr1, arr2);//不能这样 因为 arr2 里面没有 '\0'
//	char arr3[] = { 'd','e','f','\0' };
//	char* ret =  my_strcat(arr1, arr3);
//	printf("%s\n", ret);
//	return 0;
//}


//strcmp 字符串比较，比较的是字符串的内容，不是长度 是一个一个比较 
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abq";
//	int ret = strcmp(arr1, arr2);//因为不相等的时候 是 c和q c小于q 所以是 -1  反之是 1 
//	//两个字符串相等的时候，就是 0 
//	if (ret == 0) {
//		printf("字符串相等\n");
//	}
//	else if (ret < 0)
//	{
//		printf("字符串小于\n");
//	}
//	else
//	{
//		printf("字符串大于\n");
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//模拟实现 strcmp
//int my_strcmp(const char* s1, char* s2)
//{
//	//当两个字符相等的时候 就往后走 不相等的时候 就比较两个字符的大小
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abq";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret == 0) {
//		printf("字符串相等\n");
//	}
//	else if (ret < 0)
//	{
//		printf("字符串小于\n");
//	}
//	else
//	{
//		printf("字符串大于\n");
//	}
//	return 0;
//}


//因为上面这些字符串的长度不受限制，不安全，所以就有了 strncpy strncat strncmp
//这些里面加了 n 有了长度限制 

//strncpy
//int main()
//{
//	char arr1[20] = "abcdefg";
//	char arr2[] = "xxxx";
//	strncpy(arr1, arr2, 6);//但是只有 4 个字符 会操作6次，第 6 次用 \0 凑的
//	printf("%s\n", arr1);
//	return 0;
//}


//strncat
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "defghij";
//	strncat(arr1, arr2, 3);//追加3个之后 就主动添加一个'\0'  如果写6的话 没用 因为不够6个
//	//追加到 \0 就不追加了
//	printf("%s\n", arr1);
//	return 0;
//}


//strncmp
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdefg";
//	int ret = strncmp(arr1, arr2, 3);//比较前三个 如果已经比较出来之后 就不比较了
//	printf("%d\n", ret);
//	return 0;
//}


//strstr 是字符串查找函数  能在一个字符串里面查找另外一个字符串是否存在
//子串遇到 \0 的话 就停下来 或者不相等的时候 就停下来
//char* my_strstr(const char* str1, const char* str2)
//{
//	//字符串查找 有个 KMP 算法 要更快一些
//
//	assert(str1 && str2);
//	char* s1;//指向字串开始
//	char* s2;//取cp的值
//	char* cp = str1;//最开始就应该指向母串开始
//	//如果 cp 和s1不相同的话 cp++  如果s1和s2相等的话 就 s1和s2++ 比较 如果不相等的话
//	//cp++赋给s1  s2 等于str2
//
//	if (*str2 == '\0')
//	{
//		return str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 == *s2 && *s2 && *s1) {
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;//跳过刚刚那个点
//	}
//	//找不到 返回空
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "zxcvbnm";
//	char arr2[] = "vbn";
//	//查找arr1 中 arr2第一次出现的位置
//	//char* ret = strstr(arr1, arr2);//返回的是第一次出现的地址
//	//if (ret == NULL)
//	//{
//	//	printf("找不到\n");
//	//}
//	//else {
//	//	printf("找到了 %s\n", ret);
//	//}
//
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else {
//		printf("找到了 %s\n", ret);
//	}
//	return 0;
//}


//strtok 切割字符串  两个参数 第一个是要切割的字符串 第二个是切割的标记 第一个参数不为 NULL
//192.168.2.121 安照 . 来切割
//qwe@sdaasd.asad  按照 @ 和 . 来切割   就是把标记改为 \0 然后就完成了切分 
//都是临时拷贝的内容 且可以修改

//int main()
//{
//	char arr1[] = "qwe@sdaasd.asad";
//	char arr2[] = { 0 };
//	strcpy(arr2, arr1);
//	char sep[] = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr2, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//memcpy 内存拷贝函数
void* my_memcpy(void* dest, void* src, size_t count)
{
	void* ret = dest;
	assert(src && dest);
	while (count--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	//拷贝的是整型数据
//	//memcpy(arr2, arr1, 10 * sizeof(int));
//	my_memcpy(arr2, arr1, 10 * sizeof(int));
//	for (int i = 0; i < 20; i++) {
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//my_memcpy(arr + 2, arr, 16);//因为拷贝的时候已经被拷贝的数据重叠了，就导致拷贝的数据不一样了
	//用库的 memcpy 也可以完成要求的拷贝
	//memcpy 完成不重叠的内存拷贝就完成任务

	//当内存拷贝时 出现内存重叠的现象 就用 memmove 就行了
	memmove(arr + 2, arr, 16);
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}