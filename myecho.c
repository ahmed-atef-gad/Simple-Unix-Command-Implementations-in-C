#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	if(argc <2){
		printf("\n");
        	return 0;
	}
	for(int i=1; i<argc-1; i++)
		printf("%s ", argv[i]);
	printf("%s\n",argv[argc-1]); printf("\n");
	return 0;
}
