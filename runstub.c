#include <stdio.h> 
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
int uid;
int gid;
char runprog[512];
int main(int argc, char *argv[])
{
uid = 0;
gid = 0;
setgid(gid); /* <gid> is whatever GID you want to switch to */
setuid(uid);  /* <uid> is whatever UID you want to switch to */
snprintf(runprog, 512, argv[0]);  /* runprog is the buffer, 512 is the size of the buffer, the rest is the script you're trying to run and any arguments you want to pass to it, specified on the run stub's command line */
return 0;
}
