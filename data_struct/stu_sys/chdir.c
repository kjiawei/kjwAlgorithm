#include "myhead.h"

int main()
{
	chdir("/home/gec"); // 类似于先使用cd 进入了家目录，然后打开家目录下面的abc，所以你直接写相对路径就行了
	DIR *mydir=opendir("abc");
	if(mydir==NULL)
	{
		perror("opendir failed!\n");
		return -1;
		
	}
	//chdir("/mnt/hgfs/share");
	//opendir("abc");  
	
	
}