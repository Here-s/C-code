#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//strcat ����  �ַ������ӣ��ַ���׷�� ���ص���Ŀ��ռ����ʼ��ַ
//char* my_strcat(char* dest, const char* src)
//{
//	assert(src && dest);
//	char* ret = dest;//������������Ԫ�ص�ַ
//	//�ҵ�Ŀ���ַ�����ĩβ '\0'
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
//	//strcat(arr1, "def");//�� arr1 ����׷��һ�� def  arr1 Ҫ���㹻�Ŀռ� Ŀ�꿴�������㹻��
//	//strcat(arr1, arr2);//�������� ��Ϊ arr2 ����û�� '\0'
//	char arr3[] = { 'd','e','f','\0' };
//	char* ret =  my_strcat(arr1, arr3);
//	printf("%s\n", ret);
//	return 0;
//}


//strcmp �ַ����Ƚϣ��Ƚϵ����ַ��������ݣ����ǳ��� ��һ��һ���Ƚ� 
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abq";
//	int ret = strcmp(arr1, arr2);//��Ϊ����ȵ�ʱ�� �� c��q cС��q ������ -1  ��֮�� 1 
//	//�����ַ�����ȵ�ʱ�򣬾��� 0 
//	if (ret == 0) {
//		printf("�ַ������\n");
//	}
//	else if (ret < 0)
//	{
//		printf("�ַ���С��\n");
//	}
//	else
//	{
//		printf("�ַ�������\n");
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//ģ��ʵ�� strcmp
//int my_strcmp(const char* s1, char* s2)
//{
//	//�������ַ���ȵ�ʱ�� �������� ����ȵ�ʱ�� �ͱȽ������ַ��Ĵ�С
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
//		printf("�ַ������\n");
//	}
//	else if (ret < 0)
//	{
//		printf("�ַ���С��\n");
//	}
//	else
//	{
//		printf("�ַ�������\n");
//	}
//	return 0;
//}


//��Ϊ������Щ�ַ����ĳ��Ȳ������ƣ�����ȫ�����Ծ����� strncpy strncat strncmp
//��Щ������� n ���˳������� 

//strncpy
//int main()
//{
//	char arr1[20] = "abcdefg";
//	char arr2[] = "xxxx";
//	strncpy(arr1, arr2, 6);//����ֻ�� 4 ���ַ� �����6�Σ��� 6 ���� \0 �յ�
//	printf("%s\n", arr1);
//	return 0;
//}


//strncat
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "defghij";
//	strncat(arr1, arr2, 3);//׷��3��֮�� ���������һ��'\0'  ���д6�Ļ� û�� ��Ϊ����6��
//	//׷�ӵ� \0 �Ͳ�׷����
//	printf("%s\n", arr1);
//	return 0;
//}


//strncmp
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdefg";
//	int ret = strncmp(arr1, arr2, 3);//�Ƚ�ǰ���� ����Ѿ��Ƚϳ���֮�� �Ͳ��Ƚ���
//	printf("%d\n", ret);
//	return 0;
//}


//strstr ���ַ������Һ���  ����һ���ַ��������������һ���ַ����Ƿ����
//�Ӵ����� \0 �Ļ� ��ͣ���� ���߲���ȵ�ʱ�� ��ͣ����
//char* my_strstr(const char* str1, const char* str2)
//{
//	//�ַ������� �и� KMP �㷨 Ҫ����һЩ
//
//	assert(str1 && str2);
//	char* s1;//ָ���ִ���ʼ
//	char* s2;//ȡcp��ֵ
//	char* cp = str1;//�ʼ��Ӧ��ָ��ĸ����ʼ
//	//��� cp ��s1����ͬ�Ļ� cp++  ���s1��s2��ȵĻ� �� s1��s2++ �Ƚ� �������ȵĻ�
//	//cp++����s1  s2 ����str2
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
//		cp++;//�����ո��Ǹ���
//	}
//	//�Ҳ��� ���ؿ�
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "zxcvbnm";
//	char arr2[] = "vbn";
//	//����arr1 �� arr2��һ�γ��ֵ�λ��
//	//char* ret = strstr(arr1, arr2);//���ص��ǵ�һ�γ��ֵĵ�ַ
//	//if (ret == NULL)
//	//{
//	//	printf("�Ҳ���\n");
//	//}
//	//else {
//	//	printf("�ҵ��� %s\n", ret);
//	//}
//
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("�Ҳ���\n");
//	}
//	else {
//		printf("�ҵ��� %s\n", ret);
//	}
//	return 0;
//}


//strtok �и��ַ���  �������� ��һ����Ҫ�и���ַ��� �ڶ������и�ı�� ��һ��������Ϊ NULL
//192.168.2.121 ���� . ���и�
//qwe@sdaasd.asad  ���� @ �� . ���и�   ���ǰѱ�Ǹ�Ϊ \0 Ȼ���������з� 
//������ʱ���������� �ҿ����޸�

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


//memcpy �ڴ濽������
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
//	//����������������
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
	//my_memcpy(arr + 2, arr, 16);//��Ϊ������ʱ���Ѿ��������������ص��ˣ��͵��¿��������ݲ�һ����
	//�ÿ�� memcpy Ҳ�������Ҫ��Ŀ���
	//memcpy ��ɲ��ص����ڴ濽�����������

	//���ڴ濽��ʱ �����ڴ��ص������� ���� memmove ������
	memmove(arr + 2, arr, 16);
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}