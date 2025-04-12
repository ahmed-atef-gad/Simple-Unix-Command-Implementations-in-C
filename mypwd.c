#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 1000
int main(){
	char buf[SIZE];
	char* path=getcwd(buf, SIZE);	
	printf("%s\n", path);
	return 0;
}
