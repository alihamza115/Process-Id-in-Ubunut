#include <stdio.h>
#include <unistd.h>

int main ()
{
int pid, cid;

pid = getppid();
cid = getpid();

printf("Parent Process ID: %d\n", pid);
printf("Parent Process ID: %d\n", pid);

return 0;

}
