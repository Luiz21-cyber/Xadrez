#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int i;

printf("Movimento da Torre:\n");

for (i=1; i<=5; i++) { printf("Direita\n");
}


printf("Movimento do Bispo :\n");

i=1;
while (i<=5) {
	
	printf("Cima Direita\n");
	i++;
}


printf("Movimento da Rainha:\n");
i=1;
do {
	printf("Esquerda\n");
	i++;
} while (i<=8);


	
	
	
	
	
	
	
	return 0;
}