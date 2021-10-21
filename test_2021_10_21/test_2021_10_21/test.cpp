#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	close(1);
	int fd = open("log.txt", O_WRONLY | O_CREAT, 0666);
	if (fd < 0){
		perror("open");
		return 1;
	}
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	fflush(stdout);
	close(fd);
	return 0;
}

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	close(1);
	int fd = open("log.txt", O_WRONLY|O_APPEND|O_CREAT, 0666);
	if(fd < 0){
		perror("open");
		return 1;                                                                                        
	}
	printf("hello Linux\n");
	printf("hello Linux\n");
	printf("hello Linux\n");
	printf("hello Linux\n");
	printf("hello Linux\n");
	fflush(stdout);
	close(fd);
	return 0;
}

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	close(0);
	int fd = open("log.txt", O_RDONLY | O_CREAT, 0666);
	if (fd < 0){
		perror("open");
		return 1;
	}
	char str[40];
	while (scanf("%s", str) != EOF){
		printf("%s\n", str);
	}
	close(fd);
	return 0;
}