//�������� 
//char �ַ�
//short ������
//int ����
//long ������
//longlong��������
//float �����ȸ���
//double ˫���ȸ���

//int main()
//{
//	char ch = "a";
//	short num = 10;
    //(short int)
//	float x = 10.1;
//	return 0;
//}
//sizeof(char)   1
//sizeof(short)  2
//sizeof(int)    4
//sizeof(long)   4>=int
//sizeof(longlong)  8
//..float   4
//..double  8
#include<stdio.h>
int main()
{
    int age = 10;
    double weight = 50.1;
    age = age + 1;
    weight = weight + 1.1;
    printf("%d\n", age);
    printf("%lf\n", weight);
    return 0;
}
//%-d����
//%f-float
//%lf-double