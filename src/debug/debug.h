#include "syscall_x86_64.h"
#include "syscall_number.h"
#include "syscall.h"

void printd(char *buf)
{
	long len = 0;
	
	while(buf[len++]);
	
	__syscall(SYS_write, 1 /*stdout*/, buf, len);
} 
