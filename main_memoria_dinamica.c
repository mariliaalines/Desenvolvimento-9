#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int i, tam, *p, resposta;
	
	//chamada da função malloc para reservar espaço para 22 elementos do tipo int.
	p = malloc(22 * sizeof(int));
		
	if (p){
		
		printf("Memoria alocada com sucesso!!!\n");
		printf("p[%d] = ", 22);
		
		for(i = 0; i < 22; i++){
			
			p[i] = rand() % 100;
			printf("%d ", p[i]);
		}
		
		printf("\n");
		
		printf("\nPrecisa de mais espaco no vetor?\n1 - SIM\n2 - NAO\n");
		scanf("%d", &resposta);
		
		if (resposta == 1){
			
			printf("Digite o novo tamanho do vetor: ");
			scanf("%d", &tam);
			
			p = (int *) realloc(p, tam * sizeof(int));
			
			printf("\nMemoria realocada com sucesso!!!");
			printf("\np[%d] = ", tam);
		
			for(i = 0; i < tam; i++){

				printf("%d ", p[i]);
			}
			
			printf("\n\nPrograma finalizado!!!");
			
		}else {
			
			if(resposta == 2){
				
				printf("\nPrograma finalizado!!!");
			}
		}
	}else{
		
		printf("Erro ao alocar memoria!!!");
	}

	
	//chama a função free para liberar o bloco indicado por p.
	free(p);
	
	return 0;
}
