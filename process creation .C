#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main() {
   pid_t pid, child_pid, child_ppid;
   pid = getpid();
   printf("+ Process id : %d\n", pid);
   pid = fork();
   if (pid < 0) {
      perror("x fork() failure\n");
      return 1;
   }
   if (pid == 0) {
      printf("- This is child process\n");
      child_pid = getpid();
      child_ppid = getppid();
      printf("+ Process id: %d \t PPID: %d\n", child_pid, child_ppid);
   } else {  
      sleep(2);
      printf("+ Parent process \n");
      child_pid = getpid();
      child_ppid = getppid();
      printf("+ Process id: %d \t PPID: %d\n", child_pid, child_ppid);
      printf("+ Newly created process/Child pid :  %d\n", pid);
   }
   _exit(0);
    printf("Terminating process %d \n",pid);
   return 0;
}
