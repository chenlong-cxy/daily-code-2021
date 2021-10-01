#include <stdio.h>
#include <pwd.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#define LEN 1024 //������󳤶�
#define NUM 32 //�����ֺ��������
int main()
{
	char cmd[LEN]; //�洢����
	char* myargv[NUM]; //�洢�����ֺ�Ľ��
	char hostname[32]; //������
	char pwd[128]; //��ǰĿ¼
	while (1){
		//��ȡ������ʾ��Ϣ
		struct passwd* pass = getpwuid(getuid());
		gethostname(hostname, sizeof(hostname)-1);
		getcwd(pwd, sizeof(pwd)-1);
		int len = strlen(pwd);
		char* p = pwd + len - 1;
		while (*p != '/'){
			p--;
		}
		p++;
		//��ӡ������ʾ��Ϣ
		printf("[%s@%s %s]$ ", pass->pw_name, hostname, p);
		//��ȡ����
		fgets(cmd, LEN, stdin);
		cmd[strlen(cmd) - 1] = '\0';
		//�������
		myargv[0] = strtok(cmd, " ");
		int i = 1;
		while (myargv[i] = strtok(NULL, " ")){
			i++;
		}
		pid_t id = fork(); //�����ӽ���ִ������
		if (id == 0){
			//child
			execvp(myargv[0], myargv); //child���г����滻
			exit(1); //�滻ʧ�ܵ��˳�������Ϊ1
		}
		//shell
		int status = 0;
		pid_t ret = waitpid(id, &status, 0); //shell�ȴ�child�˳�
		if (ret > 0){
			printf("exit code:%d\n", WEXITSTATUS(status)); //��ӡchild���˳���
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