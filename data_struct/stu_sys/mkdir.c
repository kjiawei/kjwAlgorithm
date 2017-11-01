#include "myhead.h"

int mkdir()
{
	//创建目录
	int ret;
	ret=mkdir("/home/gec/student_sys",0777);
	if(ret==-1)
	{
		perror("mkdir failed!\n");
		return -1;
	}
	
}