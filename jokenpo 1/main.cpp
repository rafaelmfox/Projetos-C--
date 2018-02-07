#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){
	
	int p1,cpu;
	start:
		
		
	printf ("pedra=0\n");
	printf ("papel=1\n");
	printf ("tesoura=2\n");
	printf ("escolha uma das opsoes\n");	
	scanf("%d",&p1);	
	
	
	
        srand(time(NULL));
    cpu = rand() % 3; //gera um numero aleatorio
    switch(cpu)
    {
        case 0: printf ("CPU -> Pedra\n"); break;
        case 1: printf ("CPU -> Papel\n"); break;
        case 2: printf ("CPU -> Tesoura\n"); break;
    }

    
    if ((p1 == 0 && cpu==2) || (p1 == 1 && cpu == 0) || (p1 == 2 && cpu == 1))
	{
    	printf ("Jogador 1 Wins\n");
    }
    if (p1==cpu)
	{
    	printf ("EMPATE\n"); 		
    }
    else 
	{
    	printf ("CPU Wins\n");
    }
    
	printf("\n\n\n");
	system ("pause");
	system("cls");
	goto start;
}
