#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//����������Ԫ�ص�ַ  ������+1 ������һ��Ԫ�صĵ�ַ
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int i = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%p ---- %p\n", &arr[i], arr + i);//��������arr�� �±�λ i ��Ԫ�صĵ�ַ
//	}
//
//	//arr[4] --> &(arrr+4) --> *(arr+4) --> 4[arr]  ˵��[]��һ�������� �൱�� a+b д�� b+a
//	return 0;
//}


//�������ò����� ()
//void test()
//{
//	printf("���ú���\n");
//}
//int main()
//{
//	//printf("%d\n",strlen("abc"));//strlen�Ƿ����޷����� �����ӡ�Ļ� ��%u ����ȫ %u ��ӡ�޷�����
//
//	test();//�������ò���������ȱ
//	return 0;
//}


//�ṹ�� �Զ��� ���ʲ�����  "."  "->"   �ṹ����.��Ա��   �ṹ��ָ��->��Ա��

struct Book
{
	char name[20];
	float price;
	char id[];
};
void print(struct Book b)
{
	printf("%s\n", b.name);
	printf("%f\n", b.price);
	printf("%s\n", b.id);
}
void print2(struct Book* pb)
{
	//printf("%s\n", (*pb).name);
	//printf("%f\n", (*pb).price );
	//printf("%s\n", (*pb).id);

	printf("%s\n", pb->name);
	printf("%f\n", pb->price);
	printf("%s\n", pb->id);

}
int main()
{
	struct Book b = { "C�������", 23.5f, "C5611523"};

	//ͨ��strcpy �ı�����
	strcpy(b.name, "���ݽṹ");
	//print(b);
	print2(&b);
	return 0;
}