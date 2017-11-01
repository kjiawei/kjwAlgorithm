/*linux kernel list
实质是双向循环链表：Linux大神把指针的使用封装好，让开发者直接引用函数实现功能
*/
#include "myhead.h"
#include "kernel_list.h"

#define INIT_LIST_HEAD(ptr)  do{(ptr)->prev = (ptr);(ptr)->next = (ptr)}while (0); 
 //明确大结构体和小结构体
/* struct kernel _list_add(struct *new,struct *head,struct *prev){
	
} */ 
struct student{
	char name[10];
	float score;
};

struct kernel_list{//宿主
	struct student stu;
	struct list_head myList;//包含两个指针的（小）结构体,容易搞错，不要定义成指针
};

//init
struct kernel_list *kernel_init(){
	struct kernel_list *head=malloc(sizeof(struct kernel_list));
	INIT_LIST_HEAD(&(head->myList));//上面避错不要定义指针
	return head;
}

//create new
struct kernel_list *create_new(){
	struct kernel_list *newnode=malloc(sizeof(struct kernel_list));
	printf("姓名!\n");
	scanf("%s",newnode->stu.name);
	printf("分数!\n");
	scanf("%f",&newnode->stu.score);
	INIT_LIST_HEAD(&(newnode->stu.score));
	return newnode;
}

//insert_tail
//list_add_tail具体实现

//del
struct kernel_list *del(struct kernel_list *head,char *name){
	struct kernel_list *p=head;
	struct kernel_list *q=head;
	if(strcmp(p->myList.stu.name,name)==0){
		break;
	}
	//q做辅助删除元素
	//处理节点变化
	p->myList.next = p->myList.prev;
	
	
	/*备用 while(p->myList.next!=NULL){
		p->myList = p->myList.next;
	}
	if(p->myList.next=NULL) */
}

//del
int kernel_del(struct kernel_list *head ,char *name){
	
}

//move
int kernel_move(struct kernel_list *head ,char *name){
	
}

int kernel_print(struct kernel_list *head){
	struct kernel_list *pos;//这里不用head
	//这是错误的struct list_head *pos=head;
	list_for_each_entry(pos,&head->myList,myList){//这里就是for循环
	printf("姓名为:%s,分数为:%f",pos->stu.name,&pos->stu.score);//这里省略了myList
	}
	return 0;
}

//重点：指定位置前插
int kernel_assign(struct kernel_list *head ,struct kernel_list *new ,char *name){
	struct kernel_list *pos; 
	/*list_for_each list_for_each_entry_safe*/
	list_for_each_entry(pos,&head->myList,myList){
		if(strcmp(pos->stu.name,name)==0)
			break;
	}
	//注意：这里的pos是大结构体的,不能直接用
	pos->myList.prev->next = &new->myList;
	new->myList.next = &pos->myList;
	new->myList.prev = pos->myList.prev;//与下面交换，连接会断，转换处理
	pos->myList.prev = &new->myList;//本来在第三，连接会断，所以放第四
	/*list_add()又有什么不同*/
	return 0；
	//什么时候会要pos.myList=pos.myList->next;
}

//打印
int print(struct kernel_list *head){
	struct kernel_list *p=head;
	printf(""p->myList.stu.name);
}

int main(void){
	struct kernel_list *curbigstruct;
	struct kernel_list *new=malloc(sizeof(struct kernel_list));
	//插入等操作
	
	list_for_each(pos,&head->myList);//第一个参数遍历第二个参数内容,小结构体->大结构体
	{
			list_entry(ptr,type,member);//通过小结构体指针得到大结构体
	}
	
	return 0;
}


list_add()