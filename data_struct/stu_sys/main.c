#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h> 
#include <unistd.h>

//ssize_t read(int fd, void *buf, size_t count);
//ssize_t write(int fd, const void *buf, size_t count);

//���� 1.�ڼ�Ŀ¼�½�һ���ļ�1.txt,Ҫ�����1.txt�Ѿ����ˣ������ԭ����1.txt�����½���1.txt����д��hello world --->��hello world����׷��һ���ַ���2017
//2.ʹ��ǰ����ܵ��ĸ�������ʵ�ֿ���һ���ļ�   ./cp  /home/gec/1.txt   /home/gec/abc/2.txt
int main(void){
	if(!exit("/home/gec/1.txt")){
		write(1.txt,"hello world",);
		//read()
	}
	else{
		open("/home/gec/1.txt",O_TRUNC);
		//hello world����׷��һ���ַ���2017
	}
	close();
	return 0;
}