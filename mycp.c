#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define COUNT 100
int main(int argc, char* argv[]){
	if(argc !=3){
		printf("Usage: %s source-file destination-file\n", argv[0]);
		exit(-1);
	}
	char buf[COUNT];
	int source_fd= open(argv[1], O_RDONLY);
	if(source_fd < 0){
		printf("could not open the souece file\n");
		exit(-2);
	}
	int dest_fd = open(argv[2], O_WRONLY|O_CREAT|O_TRUNC, 0664);
	if(dest_fd <0){
                printf("could not open the destination file\n");
                exit(-2);
        }

 	int num_read;
	while((num_read = read(source_fd, buf, COUNT)) >0){
		if(write(dest_fd, buf, num_read) < 0){
			printf("write failed\n");
			exit(-3);
		}
	}
	close(source_fd);
	close(dest_fd);
	return 0;
}
