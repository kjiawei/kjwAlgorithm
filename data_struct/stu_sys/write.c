#include <stdio.h>	//printf
#include <sys/types.h>	//open
#include <sys/stat.h>	//open
#include <fcntl.h>	//open
#include <errno.h>	//errno
#include <string.h>	//strerror
#include <unistd.h>	//close,write

int main(void)
{
	int fd;
	int rtv;
	ssize_t wrtv;

	//char *buf = "hello";	//const char *
	char buf[]= "hello";	//char *


	fd = open("/home/gec/file_io_dir/a.txt", O_RDWR|O_CREAT, 
					S_IRWXU|S_IRWXG|S_IRWXO); 
	if(fd == -1)
	{
		printf("the errno:%s\n", strerror(errno));
		perror("open failed:");
		return -1;
	}

	wrtv = write(fd, buf, 5);
	if(wrtv == -1)
		goto err;
	if(wrtv == 0)
	{
		printf("write end\n");
	}

	printf("wrtv = %d\n", wrtv);
	
	rtv = close(fd);
	if(rtv == -1)
	{
		perror("close file failed\n");
		return -1;		
	}

	
	return 0;

err:
	close(fd);
	return -1;

}
