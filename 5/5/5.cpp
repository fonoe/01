//char �ַ�����
//��  ''  ��Ϊһ���ַ�     'a'  ,  char x='a'
//��""�����һ���ַ�Ϊ�ַ��� ,  "abcde"
//10--int
//'a'--char
//"abcde" ���ַ�������
//�ַ���ҲΪ����
//  \0  Ϊ�ַ���������־,��һ��ת���ַ�
//strlen���ַ������ȵĺ�����Ϊ�⺯������<string.h>,   string length

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcde";
	char arr2[] = { 'a', 'b', 'c', 'd', 'e', '\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//int len = strlen(arr1);//����lenΪ�÷��ؽ��
	//printf(" % d", len);//5 \0Ϊ��ֹ��־�������ӡ
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}
