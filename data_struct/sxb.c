#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//控制输入字节长度，buf判断提醒长度
//删除操作时要将20的值赋值给19的时候检测，不能给其他引用（健壮性）
//牢牢掌握排序
//程序及作者信息
//安居宝http://www.anjubao.com/index.html?html_id=0
#define SIZE 20
enum returnvalue{full,failed,success};

struct student{
		char name[SIZE];
		float height;
};

struct slist{
		struct student stu[SIZE];
		int len;
	};
	
//初始化
struct slist *slist_init(){
	struct slist *myList=malloc(sizeof(struct slist));
	myList->len = -1;
	
	printf("顺序表初始化完成!\n");
	return myList;
}
	
int slist_insert_def(struct slist *list){//指定位置(前面)插入学生信息
	int i;
	struct student stu0;
	
	if(list->len<2/* SIZE-1 */){
		for(i=0;i<2;i++){
			printf("请输入第%d个学生的名字:\n",i);
			scanf("%s",&stu0.name[i]);
			printf("请输入第%d个学生的身高:\n",i);
			scanf("%f",&stu0.height);
			
			list->stu[list->len+1]=stu0;//结构体赋值给结构体(同类型可以直接)
			list->len++;//更新len的值
			//return 1;
		}
	}else{
		printf("this list is full!\n");
		//return -1;
	}
}

int matchInfo(char *name,struct slist *list){//匹配输入名字的学生(查看学生信息)
	int i;
	for(i=0;i<SIZE-1;i++){
		if(strcmp(name,list->stu0.name[i])==0){//list如何与stu1匹配，数据保存在哪
			printf("恭喜你匹配成功!\n");
			//printf("名字为:%s,身高为:%f\n",stu1.name[i],stu1.height[i]);
		}
	}
}

/*//尾部插入
enum returnvalue slist_insert_tail(struct slist *list){
	int i;
	//char sname[20];
	//float sheight[20];
	//bzero(sname,20);
	//bzero(sheight,20);
	struct student stu1;
	
	if(list->len<SIZE-1){//先判断是否已满
		//输出当前已有几个学生的提醒信息
		//初始化新的学生信息，并插入尾部
		//for(i=list->len;i<=SIZE;i++){
			printf("请输入第%d个学生的名字:\n",i);
			scanf("%s",&stu1.name);//&stu1.name[i]
			printf("请输入第%d个学生的身高:\n",i);
			scanf("%f",&stu1.height);//&stu1.height[i]
			
			strcpy(stu1.name[i],sname[i]);//数组做变量如何赋值
			stu1.height[i]=sheight[i];
			
			list->stu[list->len+1]=stu1;//结构体赋值给结构体(同类型可以直接)
			//list->len++;//更新len的值
			return success;
		}
		/* struct student stu1;
		strcpy(stu1.name,"zhangsan");//必须这样
		stu1.height=1.78; */
/*	}else{
		printf("this list is full!\n");
		return full;
	}
}*/

int delInfo(char *name,struct slist *list){//删除学生信息

}

int updateInfo(char *name,struct slist *list){//修改学生信息

}

//打印
int slist_print(struct slist *list){
	int i;
	for(i=0;i<=list->len;i++){
		printf("第%d个学生的名字是%s:\n",i,list->stu.name);
		printf("第%d个学生的身高是%f:\n",i,list->stu.height);
	}
	return 0;
}

int slist_sort(){//排序

}

int main(void){
	//输入查找的字段
	int i=0
	char xname[20];
	float xheight;
	bzero(xname,20);
	
	struct slist *listp=slist_init();//初始化
	
	while(i<2){
		slist_insert_def(listp);
		//slist_insert_tail(listp);//test:从0开始插入
		i++;
	}
	//slist_print(listp);
	
	//增删查改
	/* printf("请输入在哪个学生名字前面插入信息:\n");
	slist_insert_def
	printf("请输入在哪个学生名字后面插入信息:\n");
	printf("请输入需要删除学生信息的名字:\n");
	delInfo
	*/
	printf("请输入需要查看学生信息的名字:\n");
	//printf("请输入需要修改学生信息的名字:\n");
	//updateInfo
	scanf("%s",xname);
	matchInfo(xname,listp);//匹配学生信息
	
	return 0;
}