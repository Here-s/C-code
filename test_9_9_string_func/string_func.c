#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//void left_move(char* arr, int k)
//{
//	int len = strlen(arr);
//	assert(arr);
//	for (int i = 0; i < k; i++) {
//		//������һ���ַ�
//		//1. �����һ���ַ�
//		char tmp = *arr;//������������ �õ���Ԫ��
//		//2. �Ѻ������ַ�������ǰ�ƶ�
//		for (int j = 0; j < len - 1; j++) {
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3. �ѱ���õĵ�һ���ַ��ŵ����
//		*(arr + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//����дһ�� a �����ǲ�������һ�� b ת������

//�ж�arr2 �Ƿ��� arr1 ��ת�õ�
//int is_left_move(char arr1[], char arr2[]) {
//	int len = strlen(arr1);
//	for (int i = 0; i < len; i++) {
//		left_mova(arr1, 1);
//		if (strcmp(arr1, arr2) == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1) {
//		printf("���\n");
//	}
//	else {
//		printf("�����\n");
//	}
//	return 0;
//}


//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N) 
//find_k(int arr[3][3], int k, int* px, int* py) {
//	//�ȶ�λ���Ͻǵ�����
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0) {
//		if (arr[x][y] < k) {
//			x++;
//		}
//		else if (arr[x][y] > k) {
//			y--;
//		}
//		else {
//			
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//	*px = -1;
//	*py = -1;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	//����� n*n ������  ��ôʱ�临�ӶȾ��� O(n^2)
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	find_k(arr, k, &x, &y);
//	if (x == -1 && y == -1) {
//		printf("û�ҵ�");
//	}
//	else {
//		printf("�ҵ��� �±��� %d %d\n", x, y);
//	}
//	return 0;
//}


//strlen ���� ԭ���� size_t strlen(const char* str)//����const ʹ��str���ɱ��޸�
// size_t �� unsigned int 
//int main() {
//	size_t a = strlen("abcdef");
//	printf("%u\n", a);
//	return 0;
//}

//int main() {
//	if (strlen("abc") - strlen("abcdef") > 0) {
//		printf("hehe\n");//������  ��Ϊ���޷����� ���Ա����Ϊ����
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//ģ��ʵ�� strlen


//strcpy  �ַ����������� ������ʱ�� ��� '\0' ����ȥ
//int main() {
//	char arr1[] = "XXXXXXXXXXXXXX";
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);//������ʱ�� �ַ������û \0 �ͻ����  Ŀ���ַ�����һ��Ҫ�ȿ���������Ҫ��
//	//����Ŀ��ռ���޸�    ��Ϊstrcpy�������ῼ��Ŀ��ռ�Ĵ�С
//	printf("%s\n", arr1);
//	return 0;
//}


char* my_strcpy(char* arr1, const char* arr2)
{
	assert(arr2);
	char* ret = arr1;
	while(*arr1++ = *arr2++)
	{
		;
	}
	*arr1 = '\0';
	return ret;
}
int main()
{
	char arr1[] = "xxxxxxxxxx";
	char arr2[] = "abc";
	char* ret = my_strcpy(arr1, arr2);
	printf("%s\n", ret);
	return 0;
}