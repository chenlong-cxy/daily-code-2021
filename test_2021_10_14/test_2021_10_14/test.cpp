//#include <stdio.h>
//int main()
//{
//	FILE* fp = fopen("log.txt", "w");
//	if (fp == NULL){
//		perror("fopen");
//		return 1;
//	}
//	int count = 5;
//	while (count){
//		fputs("hello world\n", fp);
//		count--;
//	}
//	fclose(fp);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	FILE* fp = fopen("log.txt", "r");
//	if (fp == NULL){
//		perror("fopen");
//		return 1;
//	}
//	char buffer[64];
//	for (int i = 0; i < 5; i++){
//		fgets(buffer, sizeof(buffer), fp);
//		printf("%s", buffer);
//	}
//	fclose(fp);
//	return 0;
//}

//extern FILE *stdin;
//extern FILE *stdout;
//extern FILE *stderr;

//#include <stdio.h>
//int main()
//{
//	fputs("hello stdin\n", stdout);
//	fputs("hello stdout\n", stdout);
//	fputs("hello stderr\n", stdout);
//	return 0;
//}

int open(const char *pathname, int flags, mode_t mode);
O_WRONLY | O_CREAT