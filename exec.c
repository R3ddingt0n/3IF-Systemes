#include <stdio.h>
#include <unistd.h>


int main(void)
{
	printf("A\n");
	execl("/bin/ls", "ls", "-l", ".", NULL);
	printf("A\n");
	return 0;
}
