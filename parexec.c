#include <stdio.h>
#include <assert.h>
#include <unistd.h>
#include <sys/wait.h>


int main(int argc, char** argv)
{
    printf("Bonjour je suis '%s'\n",argv[0]);
	assert(argc > 2);

	//unsigned i = 0;
	for(unsigned i=0; i < argc-2; ++i)
	{
		if(!fork())
		{
			execl(argv[1], argv[1], argv[2+i], NULL);
		}		
	}
	
	unsigned j = 0;
	for(; j < argc-2; ++j)
	{
		wait(NULL);	
	}
    return 0;
}
