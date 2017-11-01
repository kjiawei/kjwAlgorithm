#include <stdio.h>
#include <math.h>

#define TRI 三角形//字符串" "中永远不包含宏
/*
三角形求内部最大长方形

原理：海伦-秦九昭公式:s²=p(p-a)(p-b)(p-c)
三角形面积公式:p=(a+b+c)/2
三角形内最大长方形面积为:s/2->对折三角形

后期：图形 js扩展
*/

int main(void){
	float s,p,a,b,c;
	while(1){
	printf("请输入三角形三边长(米),空格隔开:\n");
	scanf("%f%f%f",&a,&b,&c);//这里还不熟练
	
	if(a>0&&b>0&&c>0){
		if(a+b>c&&a+c>b&&c+b>a){	
			p=(a+b+c)/2;
			s=sqrt(p*(p-a)*(p-b)*(p-c));
			printf("三角形面积为:%.2f平方米,\n",s);
			//printf("------:%.2f,\n",c/a);测试精度用
			printf("三角形内最大长方形面积为:%.2f平方米,约为%.2f亩,%0.2f分\n\n",s/2,s/2/666.67,s/2/66.67);
		}
		else{
			printf("不能构成三角形！\n\n");//直接跳出
		}
	}
	else{
		printf("输入非法，请重新输入！\n\n");
		continue;
	}
	}
	
	return 0;
}
