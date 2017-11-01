#include "myhead.h"
        
struct stack *sta{
	int a[10];
	int top;//指向栈顶位置
};

//init 
struct stack *stack_init(struct stack *){
		struct stack *mystack=malloc(sizeof(struct stack));
		bzero(mystack->a,80);
		mystack.top=-1;
		return mystack;
}


//create data
/* struct stack *create_data(){
	struct stack *newnode=malloc(sizeof(struct stack*));//堆与栈区别
	printf("输入a的值:\n");
	scanf("%s",newnode.a);
	
	return newnode;
} */

//进（压）栈
int push(struct stack *mystack,int data){
	//int i;
	//struct stack *st_input=create_data();
	//用循环从低到高放入st_input
	//for(i=0;i<num;i++){
	//	st_input++;
	//}
	//判断有没满
	(mystack->top)++;
	mystack->a[mystack->top]=data;
	
	return 0;
}

//出（弹）栈
int pop(struct stack *mystack){//st  num
	/* int i;
	for(i=num;i>0;i--){
		free(st);
	} */
	//判断空了就不出
	int ret = a[mystack->top];
	(mystack->top)--;
	reutrn ret;
}

int main(void){
	int i,data;//,num
	struct stack *empty=stack_init()//malloc(sizeof(struct stack*));
	
	//这里还要循环吗
	for(i=0;i<5;i++){
		printf("请输入你想创建栈的shuju:\n");
		scanf("%d",&data);
		push(empty,data);//入
	}
	for(i=0;i<5;i++){
		printf("弹出:%d\n",pop(empty));//出
	}
	return 0;
}