#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <assert.h>


int main(int argc, char** argv)
{
    printf("Bonjour je suis '%s'\n",argv[0]);
	unsigned pid = getpid();
	printf("%d: debut\r\n", pid);
	unsigned i = atoi(argv[1]);
	assert(i>0);
	for(; i > 0; --i){
		sleep(1);
		printf("%d: %d\r\n", pid, i);
	}
	printf("%d: fin\r\n", pid);
    return 0;
}
