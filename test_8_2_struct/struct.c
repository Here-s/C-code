#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//�ṹ��һЩֵ�ļ��� ����Щֵ����һ�� 
//�ṹ��(struct)  ����������һЩ���Ӷ��� �����Ӷ������һ��

//�ṹ������ �ṹ�崴����ʱ�� �����ڴ浱��ռ���ڴ���
//struct Book
//{
//	char name[20];
//	char author[15];
//	float price;
//};
//struct Point
//{
//	int x;
//	int y;
//}p1,p2;//��������ǽṹ������ֱ�Ӵ����ı��� ��ȫ�ֱ���  ���ھ�̬��
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//}Stu;//ͨ�� typedef ������ṹ��������Ϊ Stu   ʹ��typedef֮�� �Ͳ��ܴ���ȫ�ֱ�����
//
//struct Book b3;//����Ҳ��ȫ�ֱ���
//
//int main()
//{
//	struct Book b = { "MYSQL","Here",50.2 };//ͨ������ ������ b   b�Ǵ����ı���
//	//�ֲ�������ջ��
//
//	//struct B//�ṹ��Ҳ���Դ�����main���� �����Ǹ��ֲ��Ľṹ�� ֻ����main ����ʹ��
//	//{
//	//	char name[20];
//	//	char author[15];
//	//	float price;
//	//};
//
//	struct Stu s2 = { "����",20,"200000000" };//��ʹ�� typedef ��������
//	Stu s1 = { "����",21,"22222222" };//ͨ��typedef ������Stu ����    ����˳���ʼ��
//
//	struct Point p = { 0 };//ȫ����ʼ��Ϊ 0 
//
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//struct T
//{
//	struct S s;
//	char name[20];
//	int num;
//};
//int main()
//{
//	//�ṹ������Ƕ�׽ṹ��Ļ�  �����Ӵ����� ������Ľṹ���ʼ��
//	struct T t = { {10,'c',3.14},"����",30 };
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//struct T
//{
//	struct S s;
//	char name[20];
//	int num;
//};
//int main()
//{
//	struct T t = { {100,"w",3.14},"����",20 };
//	printf("%d %c %f %s %d\n", t.s.a, t.s.c, t.s.d, t.name, t.num);
//
//	struct T* pt = &t;
//	printf("%d %c %f %s %d\n", pt->s.a, pt->s.c, pt->s.d, pt->name, pt->num);
//	//����ŵ��ǵ�ַ ��ͨ����ͷȥ�ҽṹ�������
//
//	return 0;
//}


//�ṹ�崫��
//struct S
//{
//	int arr[100];
//	int num;
//	char ch;
//	double d;
//};
//void print(struct S ss)//�����Ǵ�ֵ���ã����¿������ڴ�
//{
//	printf("%d %d %d %d %c %lf\n", ss.arr[0], ss.arr[1], ss.arr[2], ss.num, ss.ch, ss.d);
//}
//
//void print2(struct S* ps)//�����Ǵ�ַ���� �������¿����ڴ� ����ֻ����4���ֽ�
//{
//	printf("%d %d %d %d %c %lf\n", ps->arr[0], ps->arr[1], ps->arr[2], ps->num, ps->ch, ps->d);
//}
//
//int main()
//{
//	struct S s = { {1,2,3,4,5},100,'w',3.14 };
//	print(s);
//	print2(&s);//����ַ
//	return 0;
//}


int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	c = Add(a, b);

	//�ڵ��ú�����ʱ��  ��������ջ������  
	//ջ���ȴӸߵ�ַ���ٿռ� main�����ȿ��ٿռ� ��main���������������ٿռ�
	//���main�������� �ȿ��� a   �ٿ��� b   ��� c   ��main��������ĵ͵�ַ 
	//�ֿ�����һ�οռ� �����Ŵ��Ĳ��� a b  Ȼ��������͵�ַ����һ�οռ� ������Add����
	//Ȼ����֮�� x��ռ�˲���a�Ŀռ� y��ռ���˲���b�Ŀռ�
	//Ȼ����Add ���������ȿ���z Ȼ���ٷ��� ����οռ������
	
	//ջ�����ǰ�������������� Ȼ�����λ���  �����ȴ����ĺ����  �󴴽����Ȼ���
	//������ʹ�øߵ�ַ ��ʹ�õ͵�ַ ���ڸߵ�ַ���ٿռ� Ȼ���������͵�ַ����

	//���Խṹ��������εĻ� �ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ� ���Ծͻᵼ�������½�

	//��������ָ�� һ��ָ��Add�����Ŀ�ʼ һ��ָ�����  ָ��ʼ����epb  ָ��������� esp
	//������ָ����ǼĴ��� ���� esp ��ֵ��Ϊ epb �Ͱ�ջ��������  ��Ϊ esp ��ָ��ջ��

	return 0;
}