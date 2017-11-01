#include <stdio.h> 

int main()
{
	/*int NUM;//当前行最大被乘数
	int i,j;//控制行数个数
	for(i=0;i<9;i++)
		{	NUM = i + 1;
			for(j=0;j<NUM;j++)
			{
				printf("%d*%d=%d\t",j+1,NUM,(j+1)*NUM);	
			}
			printf("\n");
		}*/
	int x = -1;
	
	do 
	{	
		x = x*x;
		printf("%d",x);
	}
	while(!x);
	return 0;
}