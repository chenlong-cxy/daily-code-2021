//return num          exit(num)          _exit(num)

exitCode = (status >> 8) & 0xFF; //退出码
exitSignal = status & 0x7F;      //退出信号

exitCode = WEXITSTATUS(status);  //退出码
exitSignal = WIFEXITED(status);  //退出信号

while :; do ps axj | head -1 && ps axj | grep proc | grep -v grep; echo "##################"; sleep 1; done