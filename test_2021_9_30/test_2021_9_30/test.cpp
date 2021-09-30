execl("/usr/bin/ls", "ls", "-a", "-i", "-l", NULL);

execlp("ls", "ls", "-a", "-i", "-l", NULL);

char* myargv[] = { "ls", "-a", "-i", "-l", NULL };
execv("/usr/bin/ls", myargv);

char* myargv[] = { "ls", "-a", "-i", "-l", NULL };
execvp("ls", myargv);