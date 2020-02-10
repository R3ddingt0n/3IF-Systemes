#include <stdio.h>
#include <unistd.h>


int main(int argc, char** argv)
{
    printf("Bonjour je suis '%s'\n",argv[0]);
	char* i;
	if(fork())
	{
		i = "5";
	}
	else
	{
		i = "2";
	}
	execl("./rebours", "rebours", i, NULL);
    return 0;
}
