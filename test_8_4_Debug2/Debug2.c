#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//���д������Ĵ���
//1 ������������
//2 bug����
//3 Ч�ʸ�
//4 �ɶ��Ը�
//5 ��ά���Ը�
//6 ע������
//7 �ĵ���ȫ


//������coding����
//1 ʹ��assert
//2 ����ʹ��const
//3 �������õı�����
//4 ��ӱ�Ҫ��ע��
//5 ������������


//ģ��ʵ��strcpy����  ���ǿ����ַ���  ��һ���ַ�������������һ���ַ���
//������ĵ��������� Null null ˵������ط��� '\0' 

//�汾 1   �����Ż�
//void my_strcpy(char* dest, char* src)//��Ϊ����Ԫ�ص�ַ ������ָ��������
////ҲҪ�� '\0' ������
//{
//	//dest ִ��Ŀ��ռ�     src  ָ��Դ�ַ���
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//�汾 2 
//void my_strcpy(char* dest, char* src)//��Ϊ����Ԫ�ص�ַ ������ָ��������
////ҲҪ�� '\0' ������
//{
//	//dest ִ��Ŀ��ռ�     src  ָ��Դ�ַ���
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//��Ϊ�Ǻ���++ ��Ϊ++���ȼ����ߣ����ǽ�����Ҳ�ǵõ�ԭ��ֵ 
//		//����Ҳ��������д
//	}
//	*dest = *src;
//}

//�汾 3
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)//����д�������� int a = 10;   int b = (a++); ����Ҳ����ִ��
//		//���� a ������֮�� ���ʽΪ a Ϊ�� ���Լ���ѭ��  ������ '\0' ��ʱ�򣬱��ʽ���� 0
//		//���ʽ�� 0 ������ѭ��
//	{
//		;
//	}
//}

//�汾 4
//void my_strcpy(char* dest, char* src)//��һ�����ǿ�ָ�� ��ô����ͻ�ҵ�
//{
//	//
//	assert(src != NULL);//���� ����һ���� release�汾�����Ż��� 
//	//���assert ����Ļ� �ͻᱨ���ڵڼ���
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//�汾 5
//void my_strcpy(char* dest, const char* src)//����const �Ϳ��Է�ֹ while����˳��д��
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++)//�������д���� �ͳ����� 
//	{
//		;
//	}
//}

//�汾 6
//char* my_strcpy(char* dest, const char* src)//
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//���ؿ�������ַ���
//	return ret;
//}

//int main()
//{
//	//char arr1[] = "abcdef";
//	//char arr2[10] = { 0 };
//
//	//char arr1[] = { 'a','b','c' };//��Ϊû�� '\0' ���Ծͻ�Խ����� 
//	//char arr2[10] = "xxxxxxxx";
//
//	//char arr1 = "abcdef";
//	//char arr2[3] = { 0 };//����Ҳ����� ��ΪĿ��ռ䲻�� ����Ҳ��Խ�����  ��������
//
//	//������Ŀ��ռ�����㹻�� 
//
//	char arr1 = "abcdef";
// //Ŀ��ռ������޸� ��Ȼ�Ų���ȥ
//	const char* arr2 = "xxxxxxxxx";//����Ҳ���� ָ��ָ����ǳ����ַ��� �ڳ��������� �������޸� �޸ľͻᱨ��
//	//����const �����ȫ
//
//	char* ret = my_strcpy(arr2, arr1);
//	printf("%s\n", ret);
//	return 0;
//}


//const ʹ��
//const ���� * ����� ���ε���ָ��ָ������� (*p)��ָ��ָ�������(*p) �Ͳ��ܸı���
//����ָ����������ǿ��Ըı��
// 
//const ���� * ���ұ�  ���ε���ָ���������(p)��ָ��ָ�������(*p) �����޸� 
//����ָ������������޸�
// 

//int main()
//{
//	const int num = 10;
//	//num = 20;//���� const  num�Ͳ����޸���
//	//int* p = &num;// ͨ��ָ�����޸�num��ֵ
//
//	//const int* p = &num;// ���� const Ҳ�Ͳ����޸���  const ���� * ��� ���ε���ָ����ָ��Ķ���
//	//���Ƶ��� *p  ���� *p �����޸���   ���ǿ����� pָ������һ�����ĵ�ַ
//   const int* p = &num; �ȼ���  int const* p = &num;
//
//	int* const p = &num;// �����Ļ� pָ��Ķ���Ͳ��ܸı���  const���� *���ұ�  ���ε���p ���Ƶ���p
//	//����  *p����ʹ��  ������ pָ������һ������
//
//	*p = 20;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}


//���������ԭ������ǷǷ����� ָ��Խ�� �Ƿ������ڴ�

//��ӡ�ַ�����ʱ����Ҫȡ��ַ ����Ҫ�����ã���Ϊ����%s ��ʽ��ӡ�� 
//�����ַ����ǲ����޸ĵ�

//int main()
//{
//	const char* str = "abcdef";//����ط������ǰ� abcdef �ŵ� str���� ���ǰ���������ַ������ַ� a �ĵ�ַ
//	//�ŵ� str ����
//	printf("%s\n", str);
//	printf("%c\n", *str);//��Ϊ�ŵ��� a �ĵ�ַ ���Խ����ó����� a 
//	return 0;
//}


//�ֲ�����ֻ������������ʹ��

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* ret = test();
//	*ret = 20;//һ����������д ��Ϊ���ú�������֮�� �Ͱѱ��� a �Ŀռ������� ��������д�û� ����bug
//	return 0;
//}


//ģ��ʵ�� strlen 

//unsigned int my_strlen(const int* arr)//��Ϊ�ַ������ȿ϶��� ���ڵ��� 0 �� ���Կ���ʹ�� unsigned int
//{
//	assert(arr != NULL);
//	int count = 0;
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//����strlen�ķ���ֵ���޷����� ����Ҳ�ᵼ��һЩ����
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");//��� hehe ��Ϊstrlen ���ص��� �޷�����  �����޷������������ΪҲ���޷�����
//		// 3 - 6 = -3  �������˷���λ ���Է���λҲ������Чλ��  ��λȡ�� +1 
//		//���� 11111111111111111111111111111101 ���Ծ͵õ������  ������ hehe 
//		//�޷�����������һ��  ԭ������ͬ 
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//ͳ��һ�������� ������1 �ĸ���������ǲ���ģ�   �ȸ��������
//size_t count_bit(int n)// size_t ��ʾ�޷�����
////��λ�� 1 ����� 1 ��count++ Ȼ��num����һλ
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//��������д
//size_t count_bit(unsigned int n)//�����Ļ� �����Ǹ��� Ҳ����������
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)//˵��������λ��һ��1
//		{
//			count++;
//
//		}
//		n /= 2;
//	}
//	return count;
//}

//����д 
//size_t count_bit(int n)
//{
//	//n = n & (n - 1)   ÿ������ ���� ʹ�ö�����λ��һ�� 1 
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = count_bit(num);
//	printf("%d\n", ret);
//	return 0;
//}


//��һ�����ǲ��� 2 �Ĵη�   n = n & (n - 1)  ����һ��������� 0 �Ļ� ��˵���� 2 �Ĵη� 
//��Ϊ 2 �Ĵη��Ķ�����λ ֻ��һ�� 1  ���� if(((n & (n - 1)) == 0)

int main()
{
	int n = 0;
	scanf("%d", &n);
	if ((n & (n - 1)) == 0)
	{
		printf("��2�Ĵη�\n");
	}
	else
	{
		printf("����2�Ĵη�\n");
	}
	return 0;
}