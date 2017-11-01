#include <stdio.h>

int main(void){
	int i,j,temp;
	int buf[10];
	printf("input num:\n");
	for(i=0;i<10;i++){
		scanf("%d",&buf[i]);
	}
	printf("before sort:");
	for(i=0;i<10;i++){
		printf("%d\t",buf[i]);
	} 
	printf("\n");
	for(i=0;i<10;i++){
		for(j=0;j<9-i;j++){
			if(buf[j]>buf[j+1]){
				temp=buf[j];
				buf[j]=buf[j+1];
				buf[j+1]=temp;
			}
		}
	}
	printf("after sort:");
	for(i=0;i<10;i++){
		printf("%d\t",buf[i]);
	}
	printf("\n");
	return 0;
}