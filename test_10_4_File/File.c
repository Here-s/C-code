#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�ļ�����

//���ļ�����Ӳ�̵��� �����Ͱ����ݳ־û����ŵ��ļ�����
//����Ϣд���ļ����� ��ʵ�������ݳ־û�

//test.c  test.h  test.exe  ��Щ���ǳ����ļ�
//�����һ���ļ�д�� data.txt ������������ļ�����������ļ���Ҳ�����ǳ�������������Ҫ��ȡ���ļ���
//printf �Ǵ�ӡ����Ļ��ȥ   scanf �ǴӼ�����������
//�ļ���ʶͨ������Ϊ�ļ���

//�ļ�ָ�룺�ļ�����ָ��
//ÿ����ʹ�õ��ļ������ڴ浱�п�������Ӧ���ļ���Ϣ��

//���ļ���ʱ�� �ͻ�����һ���ļ���Ϣ����struct FILE f;����¼�ļ�����Ϣ�����������

//���ļ���fopen ֻ�ܴ򿪵�ǰ·�����ļ�
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");//r ��ʾ���Զ�����ʽ��  pf ָ���������ļ���Ϣ������ʼ��ַ
//	//�� r �ĳ� w �Ļ� ����д�ļ� ����ļ������ڵĻ������½�һ���ļ�
//
//	FILE* pf = fopen("D:\\wxchat\\1\\2\\data.txt", "r");//�������ܸ���·���������ط����ļ���  �Ǿ���·����ʽ
//
//	//�򿪳ɹ��᷵���ļ���Ϣ����ʼ��ַ�����ʧ�ܵĻ����ͷ��ؿ�ָ�� NULL 
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//�򿪳ɹ�  ���ļ�
//
//	//�ر��ļ�  fclose �ر��ļ�  ֻҪ���ļ�ָ�봫�����ͺ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�ļ���д��ʱ���� �����д �� ˳���д
//˳���д��fgetc�����뺯�������ļ������ڴ��֣�   fputc������ַ������ڴ�д���ļ��� �����������ļ���

//˳���д
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//д�ļ�
//	fputc('b', pf);
//	fputc('u', pf);
//	//��ʾ�ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�����߶ȳ������  ���������ļ� ��Ļ ���� ���� ���̣���Щ�ⲿ����
//���ⲿ�豸�Ļ������� �������ĸ���  C�����Ѿ���װ����  ����ֻҪ�����ݷŵ������������
//�����Լ�ȥŪ��
//������ļ���ָ�� pf ָ��ľ���һ���ļ��� 
//C���Գ���������������Ĭ�ϴ�������������׼�������stdout��  ��׼��������stdin��  
//��׼��������stderr��   ������������ FILE*

//int main()
//{
//	//stdout ��׼�����
//	fputc('L', stdout);//������ֱ��д���������Ļ����  ����ϵͳ�����Լ���Ū
//	fputc('o', stdout);
//	fputc('c', stdout);
//	fputc('k', stdout);
//	fputc('e', stdout);
//	fputc('y', stdout);
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "r");//r �Ƕ��ļ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//���ļ�
//	int ch = fgetc(pf);//�ļ���ʶ��λ�þ��ǵ�һ���ַ� �ļ�ָ��ÿ��һ�ξ������ƶ�һ��
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//fgetc �ȿ��Դ��ļ�������  Ҳ���ԴӼ��̶�����
//int main()
//{
//	//�ӱ�׼����ȥ��
//	int ch = fgetc(stdin);
//	printf("%c\n", ch);
//
//	ch = fgetc(stdin);
//	printf("%c\n", ch);
//
//	ch = fgetc(stdin);
//	printf("%c\n", ch);
//	return 0;
//}


//�ı������뺯�� fgets
//�ı���������� fputs

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//д�ļ�  дһ������
//	fputs("Lockey\n", pf);//\n ��Ȼ�ǻ��е���˼
//
//	fputs("Lockey", pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//���ļ�
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//���ļ�
//	char arr[20] = { 0 };//��һ������ ֻ���һ��
//	fgets(arr, 5, pf);//���������� 4 �� ��Ϊ���һ���� \0 
//	//���д�ĺܶ��ʱ��  ��������֮�� �Ͳ�����
//	printf("%s\n", arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//��ʽ��������������  fscanf  fprintf
//struct S
//{
//	int n;
//	double d;
//};
//int main()
//{
//	struct S s = { 100, 12.5 };
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//д�ļ�  
//	fprintf(pf, "%d %lf\n", s.n, s.d);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�ٶ�����
//struct S
//{
//	int n;
//	double d;
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//���ļ�  
//	fscanf(pf, "%d %lf\n", &(s.n), &(s.d));
//
//	printf("%d %lf\n", s.n, s.d);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//������Щ�ļ����� �ı��ļ���д


//��������������� fwrite��д��  fread������

//struct S
//{
//	int n;
//	double d;
//	char name[10];
//};
//int main()
//{
//	struct S s = { 100, 3.14, "Lockey" };
//	FILE* pf = fopen("data.txt", "wb");//wb �Զ�������ʽ��д�ļ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//д�ļ�  �Զ����Ƶ���ʽ��д ����Ӧ���ö����Ƶ���ʽ����
//	fwrite(&s, sizeof(s), 1, pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�Զ�������ʽ����
//struct S
//{
//	int n;
//	double d;
//	char name[10];
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("data.txt", "rb");//wb �Զ�������ʽ��д�ļ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//д�ļ�  �Զ����Ƶ���ʽ��д ����Ӧ���ö����Ƶ���ʽ����
//	fread(&s, sizeof(struct S), 1, pf);
//
//	printf("%d %lf %s\n", s.n, s.d, s.name);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�����⣺�Ա�һ�� scanf fscanf sscanf ����
// scanf���ӱ�׼�����ȡ��ʽ�������ݣ����Ǽ������룩
// fscanf�������е��������϶�ȡ��ʽ�������ݣ����� ���� U�̣� ���� scanf ����
// sscanf����һ���ַ����ж���ʽ�������ݣ����ַ���ת��Ϊ��ʽ�������ݣ�

		//�Ա�һ�� printf fprintf sprintf
// printf����ӡ��ʽ�������ݵ���Ļ�ϣ����Ǳ�׼�����
// fprintf���Ѹ�ʽ�����������������������ϣ���Ļ �ļ���
// sprintf��дһ����ʽ�������ݵ�һ���ַ������У����ǰѸ�ʽ��������ת��Ϊ�ַ�����

struct S
{
	int n;
	double d;
	char name[10];
};
int main()
{
	char arr[100] = { 0 };
	struct S tmp = { 0 };
	struct S s = { 100, 3.14, "Lockey" };
	//��һ����ʽ��������ת��Ϊһ���ַ���
	sprintf(arr,"%d %lf %s", s.n, s.d, s.name);//���ַ����ķ�ʽ��ӡ

	//��ӡ
	printf("%s\n", arr);

	//sscanf  �� arr ���ַ������� ��ȡ��ʽ��������
	sscanf(arr, "%d %lf %s", &(tmp.n), &(tmp.d), tmp.name);
	//��ӡ
	printf("%d %lf %s\n", tmp.n, tmp.d, tmp.name);//�Ը�ʽ�������ݴ�ӡ
	return 0;
}