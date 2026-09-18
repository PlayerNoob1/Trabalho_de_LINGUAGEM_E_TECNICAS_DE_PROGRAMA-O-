#include <stdio.h>
#include <stdlib.h>

	
	
	
	
	int abacax;
	void abacaxi(int abacax){
	
		char a,b,c,x,i,test;
		int inicio,tentativas,op;
		
		tentativas = 0;
		a = '_';
		b = '_';
		c = '_';
		x = '_';
		i = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		void jogo(int op) {
			printf("A palavra e : %c %c %c %c %c %c %c \n", a,b,a,c,a,x,i);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if (test == 'a'){
				a = test;
				if (a == 'a' && b == 'b' && c == 'c' && x == 'x' && i =='i'){
					printf("Parabens, acertou!! Total de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);	
			}else if(test == 'b'){
				b = test;
				if (a == 'a' && b == 'b' && c == 'c' && x == 'x' && i =='i'){
					printf("Parabens, acertou!! Total de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);	
			}else if(test == 'c'){
			c = test;
					if (a == 'a' && b == 'b' && c == 'c' && x == 'x' && i =='i'){
					printf("Parabens, acertou!! Total de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);	
			}else if(test == 'x'){
				x = test;
				if (a == 'a' && b == 'b' && c == 'c' && x == 'x' && i =='i'){
					printf("Parabens, acertou!! Total de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);
			}else if(test == 'i'){
				i = test;
				if (a == 'a' && b == 'b' && c == 'c' && x == 'x' && i =='i'){
					printf("Parabens, acertou!! Total de erros: %d", tentativas);
					exit(0);
				}else 
					jogo (op);
			}else if (tentativas == 10 || tentativas >=10){
				printf("Mais de 10 tentativas erradas!\n ...................FIM DE JOGO...................");
				exit(0);
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
				jogo(op);
			}
			}
			
		jogo(op);
	
		
		}
	

int main() {
	int niveis,forca,iniciar,inicio;
	void tela_niveis(int niveis){
		printf("Niveis: \n1.Facil");
		scanf("%d",&forca);
	
		switch(forca){
			case 1:
				abacaxi(abacax);
				break;
			default:
				printf("Option Invalida, tente novamente\n");
				tela_niveis(niveis);
				break;
		}
	}
	printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
	printf("Iniciar jogo? \n1.sim\n2.nao\n");
	scanf("%d",&inicio);
	if (inicio == 1){
		tela_niveis(niveis);
	}		
	else{
		printf("Beleza entao vacilao");
		exit(0);
	}
	
	
	return 0;
}         
