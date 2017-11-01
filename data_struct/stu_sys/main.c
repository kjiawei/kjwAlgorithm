#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h> 
#include <unistd.h>

//ssize_t read(int fd, void *buf, size_t count);
//ssize_t write(int fd, const void *buf, size_t count);

//功能 1.在家目录新建一个文件1.txt,要求如果1.txt已经有了，将清空原本的1.txt，往新建的1.txt里面写入hello world --->在hello world后面追加一个字符串2017
//2.使用前面介绍的四个函数，实现拷贝一个文件   ./cp  /home/gec/1.txt   /home/gec/abc/2.txt
int main(void){
	if(!exit("/home/gec/1.txt")){
		write(1.txt,"hello world",);
		//read()
	}
	else{
		open("/home/gec/1.txt",O_TRUNC);
		//hello world后面追加一个字符串2017
	}
	close();
	return 0;
}