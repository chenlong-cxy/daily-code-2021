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


#include <stdio.h>
int main()
{
	FILE* fp = fopen("log.txt", "r");
	if (fp == NULL){
		perror("fopen");
		return 1;
	}
	char buffer[64];
	for (int i = 0; i < 5; i++){
		fgets(buffer, sizeof(buffer), fp);
		printf("%s", buffer);
	}
	fclose(fp);
	return 0;
}