#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){
	
	int p1,cpu;
	int vitp1,vitcpu,empate;	
	
	vitp1 =0;
	vitcpu =0;
	empate =0;
	
	
	start:
		
	printf ("------------------\n");
	printf ("-----JO KEN PO----\n");
	printf ("------------------\n");	
	printf ("---pedra = 0------\n");
	printf ("---papel = 1------\n");
	printf ("---tesoura = 2---\n");
	printf ("---Sair = 9------\n\n");
	printf ("Player 1 Vitoria: %.0d\n ",vitp1);
	printf ("Empate: %.0d\n ",empate);
	printf ("CPU Vitoria: %.0d\n\n",vitcpu);
	printf ("escolha uma das opsoes\n");	
	scanf("%d",&p1);
	printf("\n");	
	
	
	
	srand(time(NULL));
    cpu = rand() % 3; 
    switch(cpu)
    {
        case 0: printf ("CPU -> Pedra\n"); break;
        case 1: printf ("CPU -> Papel\n"); break;
        case 2: printf ("CPU -> Tesoura\n"); break;
    }

    
    if ((p1 == 0 && cpu==2) || (p1 == 1 && cpu == 0) || (p1 == 2 && cpu == 1))
	{
    	printf ("Jogador 1 Wins\n");
    	vitp1++;
    }
    if (p1==cpu)
	{
    	printf ("EMPATE\n");
		empate++; 		
    }
    if ((cpu == 0 && p1==2) || (cpu == 1 && p1 == 0) || (cpu == 2 && p1 == 1)) 
	{
    	printf ("CPU Wins\n");
    	vitcpu++;
    }
	if (p1==9)
	{
		goto sair;
	}
    
    
	printf("\n\n\n");
	system ("pause");
	system("cls");
	goto start;
	sair:
	system ("exit");
}
