#include <stdio.h>
#include <pwd.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#define LEN 1024 //命令最大长度
#define NUM 32 //命令拆分后的最大个数
int main()
{
	char cmd[LEN]; //存储命令
	char* myargv[NUM]; //存储命令拆分后的结果
	char hostname[32]; //主机名
	char pwd[128]; //当前目录
	while (1){
		//获取命令提示信息
		struct passwd* pass = getpwuid(getuid());
		gethostname(hostname, sizeof(hostname)-1);
		getcwd(pwd, sizeof(pwd)-1);
		int len = strlen(pwd);
		char* p = pwd + len - 1;
		while (*p != '/'){
			p--;
		}
		p++;
		//打印命令提示信息
		printf("[%s@%s %s]$ ", pass->pw_name, hostname, p);
		//读取命令
		fgets(cmd, LEN, stdin);
		cmd[strlen(cmd) - 1] = '\0';
		//拆分命令
		myargv[0] = strtok(cmd, " ");
		int i = 1;
		while (myargv[i] = strtok(NULL, " ")){
			i++;
		}
		pid_t id = fork(); //创建子进程执行命令
		if (id == 0){
			//child
			execvp(myargv[0], myargv); //child进行程序替换
			exit(1); //替换失败的退出码设置为1
		}
		//shell
		int status = 0;
		pid_t ret = waitpid(id, &status, 0); //shell等待child退出
		if (ret > 0){
			printf("exit code:%d\n", WEXITSTATUS(status)); //打印child的退出码
		}
	}
	return 0;
}

pid_t id = fork();
if (id == 0){
	execvp(myargv[0], myargv);
	exit(1);
}

int status = 0;
wait(&status);
waitpid(id, &status, 0);