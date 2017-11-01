#include <stdio.h>
#include <string.h>

//字符数组和指针,地址的测试应用
//strcpy和strcat函数的对比使用

int main(void)
{
	char *p2=NULL;//最好赋NULL,防野
	p2="ABCD";
	char p1[10]="abcd";/*p1数组(首元素)地址,p1[n]代表n+1元素地址(输出时需带&)和第一个元素(的值)*/
	char str[10]="xyz";
	
	printf("%c\n",*(p1+2));//p1( abcd  %p时0xbf9787c8) p1+1(不能输出单字符)  *(p1[1]+2)[出错]   *(p1+2)[p1只代表首元素地址]
	printf("%c\n",*p1);//a,p1也是首元素地址 *p1等同p1[0] p1+2第3个元素地址  *(p1)+2  c
	printf("%c\n",p1[10]);//越界输出x
	printf("%c\n",p1[0]+1);

	strcpy(str+2,strcat(p1+2,p2+1));
	printf(" %s\n",str);

    return 0;
}