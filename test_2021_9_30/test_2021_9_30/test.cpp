execl("/usr/bin/ls", "ls", "-a", "-i", "-l", NULL);

execlp("ls", "ls", "-a", "-i", "-l", NULL);

char* myenvp[] = { "MYVAL=2021", NULL };
execle("./mycmd", "mycmd", NULL, myenvp);

char* myargv[] = { "ls", "-a", "-i", "-l", NULL };
execv("/usr/bin/ls", myargv);

char* myargv[] = { "ls", "-a", "-i", "-l", NULL };
execvp("ls", myargv);

char* myargv[] = { "mycmd", NULL };
char* myenvp[] = { "MYVAL=2021", NULL };
execve("./mycmd", myargv, myenvp);