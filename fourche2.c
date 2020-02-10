#include <stdio.h>
#include <unistd.h>


int main(int argc, char** argv)
{
    fork(); // +1 = 2
	if(fork()) // +2 = 4
	{
		fork(); // +2 = 6
	}
	printf("A\n");
	return 0;
}
