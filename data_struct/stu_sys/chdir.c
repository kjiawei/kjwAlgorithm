#include "myhead.h"

int main()
{
	chdir("/home/gec"); // ��������ʹ��cd �����˼�Ŀ¼��Ȼ��򿪼�Ŀ¼�����abc��������ֱ��д���·��������
	DIR *mydir=opendir("abc");
	if(mydir==NULL)
	{
		perror("opendir failed!\n");
		return -1;
		
	}
	//chdir("/mnt/hgfs/share");
	//opendir("abc");  
	
	
}