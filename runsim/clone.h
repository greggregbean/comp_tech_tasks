#define _GNU_SOURCE

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <signal.h>
#include <malloc.h>

#define COMMAND_SIZE 1000

#include <sched.h>
#define STACK_SIZE (1024*1024)
char child_stack[STACK_SIZE];

int new_namespace();
int str_to_num(char* str);
void my_handler(int sig);
void run_execl(const char* command);
void run_sim(int N);