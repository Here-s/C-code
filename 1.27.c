#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//������
int main()//��Ŀ������,����˫Ŀ����Ŀ������
{
	//int a = 10;
	//int b = 20;
	//a + b;//+����һ������������˫Ŀ��������Ϊ���߶��в�����
	//c�����б�ʾ���0-�٣�һ�еķ�0��ʾ��
	//int a = 0;
	//printf("%d\n", a);
	//printf("%d\n", !a);//��Ϊ�߼������������Դ�ӡ���Ϊ1
	//int a = -2;//-���Ǹ���
	//int b = -a;
	//int c = +3;//+ͨ�����Ż�ʡ��
	//&ȡ��ַ��
	//sizeof �����������ͳ��ȣ����ֽ�Ϊ��λ��  ������Ǳ���/������ռ�Ŀռ��С
	//int a = 10;
	//printf("%d\n", sizeof(a));//a�Ŀռ��СΪ�ĸ��ֽ�
	//printf("%d\n", sizeof(int));//�ȼ������д�� ��Ϊa��������int
	//printf("%d\n", sizeof a);
	//int arr[10] = { 0 };//10������Ԫ�ص����飬��Ӧ����40
	//printf("%d\n", sizeof(arr));
	//���������Ԫ�ظ���=�����ܴ�С����ÿ��Ԫ�صĴ�С
	int arr[10] = { 0 };
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n",sz);
	return 0;
}
//int main()//��ֵ������
//{
//	int a = 10;
//	a = 20;//����һ�ָ�ֵ��ʽ  һ��=�и�ֵ ����==���ж��Ƿ����
//	a = a + 10;//�ڶ��ָ�ֵ��ʽ  �ɼ򻯳���������
//	a += 10;
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//���ϸ�ֵ�� += -= /= *= %= <<= >>= &= |= ^=
//	return 0;
//}
//int main()
//{
//	//λ������ ���Ƕ�����  & ��λ��(��)  |��λ��   ^ ��λ���
//	int a = 3;//011
//	int b = 5;//101
//	//int c = a & b;//��Ҫ�������������  ����Ϊ001 �����1
//	//int c = a | b;//ֻҪ��һ��1����������Ϊ111  �����7
//	int c = a ^ b;//���ļ�������Ƕ�Ӧ�Ķ�����λ��ͬ����Ϊ0��������Ϊ1 ����Ϊ110   �����6
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	//��λ������ �ƵĶ�����λ  <<-���Ʋ�����   >>-���Ʋ�����
//	int a = 1;
//	//1�Ķ�����������01 a������ռ�ĸ���	��32������λ   31��0��1��1
//	int b = a << 1;//���ݶ����� ����һ������2 
//		printf("%d\n", b);
//		printf("%d\n", a);
//
//	return 0;
//}
//int main()//����������
//{
//	int a = 5 % 2;//%��ģ ȡģ�õ���������
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;  ��������
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ����� ��Щ���ֶ�Ӧ���±���0 1 2 3 4 5 6 7 8 9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
	//����Ҫȫ��ӡ������Ҫ����1-10���±� ��0-9
	//printf("%d\n", arr[4]);//���±�Ϳ��Է���Ԫ��
	//arr[�±�];
	//char ch[20];
	//float arr2[5];
//	return 0;
//}
//#include<string.h>
//int Add(int x, int y)//������Add������  �������ǲ��� ��������Ǻ�����
//{
//	int z =x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	sum = Add(num1,num2);
//	//sum = a + b;
//	sum = Add(a ,b);
//	sum = Add(2, 3);
//	printf("sum =%d\n", sum);
//	return 0;
//}
//����
//f(x) = 2 * x + 1;
//f(x, y) = x + y;
//int main()
//{
//	int line = 0;
//	printf("ת�������\n");
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//	line++;
//	}
//	if(line>=20000)
//		printf("��offer\n");
//	return 0;
//}
//int main()//�����׼�������ɶ����
//{
//	int input = 0;
//	printf("ת�������\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer");
//	else
//		printf("ʧҵ");
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//  \32��ת���ַ������Գ�����13
//	return 0;
//}
//int main()
//{
//	//printf("c:\\test\\32\\test.c");//\t��ˮƽ�Ʊ��  �ټ�һ��\�Ϳ���ȡ���� ��\Ҳ��ת��
//	//printf("%c\n", '\'');
//	printf("%s\n","\"" );
//	return 0;
//}
//int main()
//{
//	printf("abc\n");//\n��ʾ����
//	return 0;
//}
//int main()
//{
//	char arr1[] = "acb";
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n", strlen(arr1));//strlen-string length �����ַ������� �ҵ�/0��ͳ�ƽ���
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{//�ַ��� ˫���������,Ҳ�п��ַ������ַ���������־��\0

	//���ݴ洢��ʱ���Ƕ�����  a-97  A-65 ASCII ����
	//char arr1[]="Here";//���� ���ַ���������  ��Ϊ"Here"���滹��һ��\0
	//char arr2[] = { 'H','e','r','e',0};//��0����Ϊ�������е�ʱ����������˸�0
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
//
//	return 0;
//}