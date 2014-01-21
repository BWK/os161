// Simple custom call

#include <types.h>
#include <copyinout.h>
#include <syscall.h>
#include <lib.h>

int sys_hello(void) {
	kprintf("Hello world!");
	return 0;
}
