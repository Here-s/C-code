#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)//�ػ�����ֻ����Ҫһ��ѭ��������whileҲ����
	{
		printf("��ע�⣬��ĵ��Խ���һ�����ڹػ������롰��������ȡ���ػ�\n�����룺");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	
	}
	return 0;
}


//int main()//goto ����ֱ������ĳ���ط�������ֱ�������ü���ѭ��
//{//goto ���ȥ�ػ�
//	//shutdown -s -t 60  60��ػ�
//	//shutdown -a   ȡ���ػ�
//	//system����  ����ִ��ϵͳ����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//Ҫ����ͷ�ļ�   #include<stdlib.h>
//	again:
//	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ������롰��������ȡ���ػ�\n�����룺");
//		scanf("%s", input);//��Ϊ��������ַ���������%s
//	if (strcmp(input, "������") == 0)//strcmp �����Ƚ������ַ���  ����0 ˵�����  ����ͷ�ļ�   #include<string.h>
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//
//	printf("hello Byte\n");
//	goto again;//ֱ������again
//	printf("hhhh\n");
//again:
//	printf("llll\n");
//	return 0;
//}

//int main()//goto �������������ȥ
//{
//again:
//	printf("hello Byte");
//	goto again;
//	return 0;
//}