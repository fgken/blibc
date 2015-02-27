#include "syscall_x86_64.h"
#include "syscall_number.h"
#include "syscall.h"

void printd(const char *buf)
{
	long len = 0;
	
	while(buf[len++]);
	
	__syscall(SYS_write, 1 /*stdout*/, buf, len);
}

//x86_64 serial port output
//void printd(const char *buf)
//{
//	unsigned long i;
//
//	for(i=0; buf[i] != 0x00; i++){
//		asm volatile("outb %b0, %w1" : : "a"(buf[i]), "Nd"(0x3f8));
//	}
//} 

