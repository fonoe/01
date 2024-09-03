//char 字符类型
//“  ''  ”为一个字符     'a'  ,  char x='a'
//由""引起的一串字符为字符串 ,  "abcde"
//10--int
//'a'--char
//"abcde" 无字符串类型
//字符串也为常量
//  \0  为字符串结束标志,是一个转义字符
//strlen求字符串长度的函数，为库函数，需<string.h>,   string length

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcde";
	char arr2[] = { 'a', 'b', 'c', 'd', 'e', '\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//int len = strlen(arr1);//整形len为得返回结果
	//printf(" % d", len);//5 \0为终止标志，无需打印
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}
