#include <iostream>
#include <stdio.h>
#include <stdlib.h>

main (){
	
	float n1,n2,n3,nf;
	int med;
	
	printf("digite nota 1\n");
	scanf("%f",&n1);
	printf("digite nota 2\n");
	scanf("%f",&n2);
	printf("digite nota 3\n");
	scanf("%f",&n3);
	printf("digite media\n");
	scanf("%i",&med);
	
	nf=(n1+n2*2+n3*3+med)/7;
	
	switch(nf)
	{
		case >=9:printf("A");break;
	//	case >=7.5 && <9:printf("B");break;
	//	case >=9:printf("C");break;
	//	case >=9:printf("D");break;
	//	case >=9:printf("E");break;
	}
	

}
