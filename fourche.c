#include <stdio.h>
#include <unistd.h>


int main(int argc, char** argv)
{
    printf("Bonjour je suis '%s'\n",argv[0]);
	int f_pid = fork();
	unsigned pid = getpid();
	if(f_pid != 0){
	//Parent
		printf("%d: je suis le parent\r\n", pid);
	}
	else{
	//Enfant
		printf("%d: je suis l'enfant\r\n", pid);
	}	
    return 0;
}
