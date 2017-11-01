#include "myhead.h"

int main()
{
	int ret;
	ret = open("/home/gec/1.txt",O_RDWR);
	if(ret == -1)
	{
		perror("文件不存在\n");
	}
	struct stat *mystat=(struct stat *)malloc(sizeof(struct stat));
	stat("/home/gec/1.txt",mystat);//获取文件的属性
	// 判断类型(文件还是文件夹)
	if(S_ISDIR(mystat->st_mode))
		printf("1.txt是目录！\n");
	if(S_ISREG(mystat->st_mode))
		printf("1.txt是普通文件！\n");
	// 判断权限
	if((mystat->st_mode&S_IRWXU)==(S_IRUSR)) 
		printf("此文件 r--\n");
	if((mystat->st_mode&S_IRWXU)==(S_IRUSR|S_IWUSR)) 
		printf("此文件 rw-\n");
	if((mystat->st_mode&S_IRWXU)==(S_IRUSR|S_IWUSR|S_IXUSR)) 
		printf("此文件 rwx\n");
	struct passwd * ptr=getpwuid(mystat->st_uid);
	          printf("%s\n",ptr->pw_name); //---》用户名
	free(mystat);
	return 0;
}