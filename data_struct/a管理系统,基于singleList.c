/*
  author: jkCodi
  Email:523090538@qq.com  
  版本的描叙：0.0.1 基于单链表的学生成绩管理系统
  功能的描述：增删查改 排序 文件IO TCP/IP 多线程
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 20
/*链表设计  应用场景(K房点歌系统) 
提高随机访问效率:二级指针存放指针数组() http://www.myexception.cn/arithmetic/1930311.html
http://www.xuebuyuan.com/1017686.html
双向(循环)链表:单(循环)比较常用,双可前进但加删节点难点 
初始化函数返回值:结构体类型
新增节点函数返回值:结构体类型
其余大多int型

//控制输入字节长度，buf判断提醒长度
//删除操作时要将20的值赋值给19的时候检测，不能给其他引用（健壮性）
*/
struct student 
{
	char name[SIZE];
	float score;
};

typedef struct singlelist
{
	struct student stu;
	struct singlelist *next;
}mylist,*p;

//初始化链表
p list_init()
{
	p head = (struct singlelist *)malloc(sizeof(mylist));
	if(head == NULL)
		return NULL;
	head->next=NULL;
	//printf("单链表初始化完成!\n");
	return head;
}

//创建新节点
p createNode()
{
	p newNode = (struct singlelist *)malloc(sizeof(mylist));
	if(newNode == NULL)
		return NULL;
	//if(newNode != NULL)
	//{
		printf("请输入新插入学生的名字:\n");
		scanf("%s",newNode->stu.name);
		printf("请输入新插入学生的分数:\n");
		scanf("%f",&(newNode->stu.score));
	//}
	
	newNode->next=NULL;
	return newNode;
}

//头部插入
int insert_head(p head)
{
	p p1 = head;//head为空头节点，p1判断用
	p newNode = createNode();
	if ( p1->stu.name == NULL ){//头节点为空
		p1->next=p1->next+1;
		p1=p1->next;
		p1->next=newNode;
	}
	printf("头部插入成功!\n");
	return 0;
}

//中间插入
int insert_mid(p head,char *sname,float score)
{
	p p2 = head;
	p newNode = createNode();
	while ( p2->next != NULL )
	{
		if(strcmp(p2->stu.name,sname)==0)
		{
			break;
		}
		p2 = p2->next;
	}
	newNode->next = p2->next;//找到数的前面插入
	p2->next = newNode;
	printf("中间插入成功!\n");
	return 0;
}

//尾部插入
int insert_tail(p head)
{
	p p3 = head;
	p newNode = createNode();
	while ( p3->next != NULL )
	{
		p3 = p3->next;
	}
	p3->next = newNode;
	//printf("尾部插入成功!\n");
	return 0;
}

//综合插入 非中间插入时用(重载以节省) 使用说明:当loc传参为hed时头部插入,tail为尾部插入,mid为中间插入
int insert_tolige(p head,p loc,char *sname,char *iname,float score)
{
	p p1 = head;
	p newNode = createNode();
	
	if(strcmp(loc,"hed")==0)//头部插入
	{
		if ( p1->stu.name == NULL ){//头节点为空
		p1->next=p1->next+1;
		p1=p1->next;
		p1->next=newNode;
		printf("头部插入成功!\n");
	}
	}else if(strcmp(loc,"tail")==0)//尾部插入
	{
		while ( p1->next != NULL )
		{
			p1 = p1->next;
		}
		p1->next = newNode;
		printf("尾部插入成功!\n");
	}
	else
	{
		while ( p1->next != NULL )
		{
			if(strcmp(p1->stu.name,sname)==0)
			{
				break;
			}
			p1 = p1->next;
		}
		newNode->next = p1->next;//找到数的前面插入
		p1->next = newNode;
		printf("中间插入成功!\n");
	}
	return 0;
}

//据名查询,sname值为all时显示所有学生信息 
int search_list(p head,char *sname)
{
	p p1 = head;
	while ( p1->next != NULL )
	{
		p1 = p1->next;
		if(strcmp(p1->stu.name,sname)==0)
		{
			printf("%s的分数为:%.1f\n",p1->stu.name,p1->stu.score);
			return 0;
		}else if(strcmp("all",sname)==0)
		{
			printf("%s的分数为:%.1f\n",p1->stu.name,p1->stu.score);
		}else
		{
			printf("查无此人\n");
			return -1;
		}
	}
	return 0;
}

//删除信息
int delete(p head,char *dname)
{
	if(head == NULL)
	{
		return -1;
	}
	
	p p1 = head;
	p p2 = head->next;//遍历链表
	while(p2！=NULL)
	{
		if(strcmp(p2->stu.name,dname)==0)
			break;
		p1 = p1->next;
		p2 = p2->next;
	}
	p1->next = p2->next;//p1指向p2下一节点
	p2->next = NULL;//断线
	free(p2);
	return 0;
}

//修改信息
int update(p head,char *uname)
{
	p p1 = head;
	while(p1->next != NULL)
	{
		p1 = p1->next;
		if(strcmp(p1->stu.name,uname)==0)
		{
			printf("请输入%s的新分数:\n",p1->stu.name);
			scanf("%f",&(p1->stu.score));
			printf("修改成功,%s的新分数为:%.1f\n",p1->stu.name,p1->stu.score);
		}
	}
}

//排序
int sort(p head,char *type)
{
	
}

int main(void){
	int i,num;
	p myhead=list_init();
	while(1)
	{
		printf("请输入你想插入学生信息个数:\n");
		scanf("%d",&num);
		for(i=0;i<num;i++)
		{
			insert_tail(myhead);//头部插入的打印不出
		}
		search_list(myhead,"all");
		update(myhead,"b");
		search_list(myhead,"all");
	}
	return 0;
}