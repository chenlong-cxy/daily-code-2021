//return num          exit(num)          _exit(num)

exitCode = (status >> 8) & 0xFF; //�˳���
exitSignal = status & 0x7F;      //�˳��ź�

exitCode = WEXITSTATUS(status);  //�˳���
exitSignal = WIFEXITED(status);  //�˳��ź�

while :; do ps axj | head -1 && ps axj | grep proc | grep -v grep; echo "##################"; sleep 1; done