#include <types.h>
#include <lib.h>
#include <thread.h>
#include <synch.h>
#include <test.h>

void thread_function(void *ptr, unsigned long value) {
	char* name = ptr;
	kprintf(name);
	kprintf(curthread->t_name);
}

int mytest(int nargs, char **args) {
	kprintf("My test should work!");
	for (int i = 0; i < nargs; i++) {
		kprintf(args[i]);
		kprintf("\n");
	}
	thread_fork("test thread", NULL, thread_function, "test thread", nargs);
	return 0;
}
