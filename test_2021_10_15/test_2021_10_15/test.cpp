//#define O_RDONLY         00
//#define O_WRONLY         01
//#define O_RDWR           02
//#define O_CREAT        0100
//int open(arg1, arg2, arg3){
//	if (arg2&O_RDONLY){
//		//设置了O_RDONLY选项
//	}
//	if (arg2&O_WRONLY){
//		//设置了O_WRONLY选项
//	}
//	if (arg2&O_RDWR){
//		//设置了O_RDWR选项
//	}
//	if (arg2&O_CREAT){
//		//设置了O_CREAT选项
//	}
//	//...
//}

//umask(0);

//#include <stdio.h>
//#include <sys/stat.h>
//#include <sys/types.h>
//#include <fcntl.h>
//int main()
//{
//	umask(0);
//	int fd1 = open("log1.txt", O_RDONLY | O_CREAT, 0666);
//	int fd2 = open("log2.txt", O_RDONLY | O_CREAT, 0666);
//	int fd3 = open("log3.txt", O_RDONLY | O_CREAT, 0666);
//	int fd4 = open("log4.txt", O_RDONLY | O_CREAT, 0666);
//	int fd5 = open("log5.txt", O_RDONLY | O_CREAT, 0666);
//	printf("fd1:%d\n", fd1);
//	printf("fd2:%d\n", fd2);
//	printf("fd3:%d\n", fd3);
//	printf("fd4:%d\n", fd4);
//	printf("fd5:%d\n", fd5);
//	return 0;
//}

//#include <stdio.h>                                                                                       
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>
//int main()
//{
//    int fd = open("test.txt", O_RDONLY);
//    printf("%d\n", fd);
//    return 0;
//}

//int close(int fd);

//ssize_t read(int fd, void *buf, size_t count);

//ssize_t write(int fd, const void *buf, size_t count);

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	int fd = open("log.txt", O_WRONLY | O_CREAT, 0666);
	if (fd < 0){
		perror("open");
		return 1;
	}
	const char* msg = "hello syscall\n";
	for (int i = 0; i < 5; i++){
		write(fd, msg, strlen(msg));
	}
	close(fd);
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	int fd = open("log.txt", O_RDONLY);
    if (fd < 0){
		perror("open");
		return 1;
	}
	char ch;
	while (1){
		ssize_t s = read(fd, &ch, 1);
		if (s <= 0){
			break;
		}
		write(1, &ch, 1);
	}
	close(fd);
	return 0;
}