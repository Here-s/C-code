#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//�����ص����ڴ�
	//1 2 3 4 5 6 7 8 9 10   �� 1 2 3 4 ������ 3 4 5 6 ��λ��  ������� 1 2 1 2 3 4 7 8 9 10
	//������ʱ�� �ڴ���ص��� ��Ϊ����3 4 ��ʱ�� �Ѿ��������� 1 2 
	//����Ӧ���� memmove   ԭ�ռ��� 1 2 3 4  Ŀ��ռ��� 3 4 5 6  ����� 1 Ų��3 ��λ����
	//��ô 3 �ͱ������� ���ԴӺ���ǰ��  ��������ǰ� 3 4 5 6 ���� 1 2 3 4 ��ô���еô�ǰ���󿽱�
	//���ԾͿ����ж�һ��

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	//ʲôʱ���ǰ��󿽱�  ʲôʱ��Ӻ���ǰ����  dest �� src��ߴ�ǰ���󿽱�
//	//��֮�Ӻ���ǰ����  ������ص�������ȫ�ص� ������ν��  ǰ���� count �й�
//	//��������������� dest С�� src �Ļ� ��ǰ���󿽱� ����Ӻ���ǰ
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//��ǰ���󿽱�
//		//�ҵ�src ��λ�� Ȼ��ת��Ϊ char* Ȼ����ǰת�� ÿ��֮�� src�����һ���ֽ�
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ����
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);//�������õ�Ŀ��ռ�
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 16);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//memcmp  �ڴ�Ƚ�  ����ֵҲ�� >0  0  <0  һ���ֽ�һ���ֽڵıȽ�

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,6,6 };
//	int ret = memcmp(arr1, arr2, 12);//ֵ�� 0 ��Ϊǰ12���ֽ�����ͬ��
//	printf("%d\n", ret);
//	return 0;
//}


//memset  �ڴ�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	memset(arr, 1, 24);//���ڴ�����Ϊ 1 
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//strerror  ���ش����룬����Ӧ�Ĵ�����Ϣ

//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//}


//���ļ�
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	//errno
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		perror("����\n");
//	}
//	else
//	{
//		printf("���ļ��ɹ�\n");
//	}
//}


//C������������ char short int long float double �����Զ������ͣ��ṹ�� ö�� ������
//���Ӷ���
//�ˣ����� ���� ��� ���� ���֤���� �绰
//�飺���� ���� ������ ���� ���
//���Ӷ���
//�ṹ�����������Ӷ���
//struct Book
//{
//	char name[20];
//	char author[20];
//	int price;
//}b1,b2;
//struct Book b3;//���־��ǽṹ������
//int main()
//{
//	struct Book b4;
//	return 0;
//}


//struct
//{
//	int a;
//	char b;
//	double d;
//}s1,s2;//�����ṹ�� ֻ����������
//struct
//{
//	int a;
//	char b;
//	double d;
//}*pa;//�����ṹ�� ֻ����������
//int main()
//{
//	pa = &s1;//��������Ϊ�����������ṹ�������ֲ�ͬ ������
//	return 0;
//}


//���ݽṹ���������������ڴ��д洢�Ľṹ    ��˳��������

//typedef struct Node
//{
//	//��������Ϊ һ���ڵ����� �����ݺʹ��ַ
//	//������
//	int data;
//	//ָ����  ���Ƿŵ�ַ
//	struct Node* next;//�����һ���ڵ�ĵ�ַ
//}Node;

//struct Point
//{
//	int x;
//	int y;
//}p3, p4;
//struct Point p2 = { 1,2 };
//struct S
//{
//	double a;
//	struct Point p;
//	char name[20];
//};
//int main()
//{
//	struct Point p1 = { 3,4 };
//	struct S s = { 3.14,{3,4},"����" };
//	printf("%lf\n", s.a);
//	printf("%d %d\n", s.p.x, s.p.y);
//	printf("%s\n", s.name);
//	return 0;
//}


//�ṹ���ڴ���루�ڴ���룩
//���ڶ��� ����Ϊ 
//1 ƽ̨ԭ��
	//�������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵģ�ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ��
	//�����͵����ݣ������׳�Ӳ���쳣
//2 ����ԭ��
	//���ݽṹ(������ջ)Ӧ�þ����ܵ�����Ȼ�߽��϶��롣
	//ԭ�����ڣ�Ϊ�˷���δ������ڴ棬��������Ҫ�������ڴ���ʣ���������ڴ���ʽ���Ҫһ�η��ʡ�

//�ܵ���˵
	//�ṹ����ڴ�������ÿռ�����ȡʱ�������

struct S1//���ڴ浱�п��ٿռ� ��һ���ֽ� �������ʼλ�õ�ƫ������0 �ڶ����ֽھ���1 
	//ռ1���ֽڵĻ� ���Ǵӿ�ʼռһ��
{
	char c1;
	int a;
	char c2;
}; 
struct S2
{
	char c1;
	char c2;
	int a;
};
struct S3
{
	double c1;
	char c2;
	int a;
};
struct S4
{
	char c1;
	struct S3 s3;
	double a;
};
int main()
{
	struct S1 s = { 'x',100,'y' };
	printf("%d\n", sizeof(struct S1));//12 ��Ϊ���ڴ����
	//�ṹ���ڴ����Ĺ���
	//1 �ṹ��ĳ�Ա ��Զ���ڽṹ����ʼλ��ƫ����Ϊ0��λ��  ���Ͳ�ռ�ڴ�ռ� ����ռ�ڴ�ռ�
	//2 �ṹ���Ա�ӵڶ�����Ա��ʼ ���Ƿ���ƫ����Ϊһ����������������Ĭ�ϵĶ������ͱ��������С�Ľ�Сֵ������������ 
	//vs�� ������Ĭ����8 Ҳ����˵ a Ҫ����ƫ������ 4 �ı��� ���Ǵ� c1 ��������Ų ֱ�� 4
	//3 �ṹ����ܴ�С�����Ǹ�����Ա������������ظ���������������  ���ԷŽ�ȥ֮���ռ��8�˿��õ�ƫ������
	//��9��ʼ ���Ծ��� 12 
	//4 Ƕ���˽ṹ��  �ṹ��Ҫ���뵽�Լ���������������ĵ���������λ�ã�
	printf("%d\n", sizeof(struct S2));//8 ����������㷨�����������
	printf("%d\n", sizeof(struct S3));//16
	printf("%d\n", sizeof(struct S4));//32 ���ն������ȥ����
	return 0;
}