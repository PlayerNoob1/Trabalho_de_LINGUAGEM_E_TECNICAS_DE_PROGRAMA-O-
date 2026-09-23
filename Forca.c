#include <stdio.h>
#include <stdlib.h>

int laranjax;
	void laranja(int laranjax){
		
		char a,r,n,j,l;
		int inicio,tentativas,op;
		char test1;
	    
		tentativas = 0;
		l = '_';
		a = '_';
		r = '_';
		a = '_';
		n = '_';
		j = '_';
		a = '_';
			
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		void jogo(int op) {
			printf("A palavra e : %c %c %c %c %c %c %c \n", l,a,r,a,n,j,a);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test1);
			if (test1 == 'l'){
				l = test1;
				if (l == 'l' && a == 'a' && r == 'r' && n == 'n' && j =='j'){
					printf("Parabens, acertou!!\nPalavra: Laranja\nTotal de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);	
			}else if(test1 == 'a'){
				a = test1;
				if (l == 'l' && a == 'a' && r == 'r' && n == 'n' && j =='j'){
					printf("Parabens, acertou!!\nPalavra: Laranja\nTotal de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);	
			}else if(test1 == 'r'){
			r = test1;
					if (l == 'l' && a == 'a' && r == 'r' && n == 'n' && j =='j'){
					printf("Parabens, acertou!!\nPalavra: Laranja\nTotal de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);	
			}else if(test1 == 'n'){
				n = test1;
				if (l == 'l' && a == 'a' && r == 'r' && n == 'n' && j =='j'){
					printf("Parabens, acertou!!\nPalavra: Laranja\nTotal de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);
			}else if(test1 == 'j'){
				j = test1;
				if (l == 'l' && a == 'a' && r == 'r' && n == 'n' && j =='j'){
					printf("Parabens, acertou!!\nPalavra: Laranja\nTotal de erros: %d", tentativas);
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

int armadurax;
	void armadura (int armadurax){
		
		char a,r,m,d,u;
		int inicio,tentativas,op;
		char test1;
	    
		tentativas = 0;
		a = '_';
		r = '_';
		m = '_';
		a = '_';
		d = '_';
		u = '_';
		r = '_';
		a = '_';
			
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		void jogo(int op) {
			printf("A palavra e : %c %c %c %c %c %c %c %c \n", a,r,m,a,d,u,r,a);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test1);
			if (test1 == 'a'){
				a = test1;
				if (a == 'a' && r == 'r' && m == 'm' && d == 'd' && u =='u'){
					printf("Parabens, acertou!!\nPalavra: Armadura\nTotal de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);	
			}else if(test1 == 'r'){
				r = test1;
				if (a == 'a' && r == 'r' && m == 'm' && d == 'd' && u =='u'){
					printf("Parabens, acertou!!\nPalavra: Armadura\nTotal de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);	
			}else if(test1 == 'm'){
			m = test1;
					if (a == 'a' && r == 'r' && m == 'm' && d == 'd' && u =='u'){
					printf("Parabens, acertou!!\nPalavra: Armadura\nTotal de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);	
			}else if(test1 == 'd'){
				d = test1;
				if (a == 'a' && r == 'r' && m == 'm' && d == 'd' && u =='u'){
					printf("Parabens, acertou!!\nPalavra: Armadura\nTotal de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);
			}else if(test1 == 'u'){
				u = test1;
				if (a == 'a' && r == 'r' && m == 'm' && d == 'd' && u =='u'){
					printf("Parabens, acertou!!\nPalavra: Armadura\nTotal de erros: %d", tentativas);
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

	int bananax;
	void banana(int bananax){
	
		char a,b,n;
		char test;
		int tentativas, op;
		
		tentativas = 0;
		a = '_';
		b = '_';
		n = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		void jogo(int op) {
			printf("A palavra e : %c %c %c %c %c %c \n", b,a,n,a,n,a);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if (test == 'b'){
				b = test;
				if (b == 'b' && a == 'a' && n == 'n'){
					printf("Parabens, acertou!!\nPalavra: Banana\nTotal de erros: %d", tentativas);
					exit(0);
				}else jogo(op);
			}else if(test == 'a'){
				a = test;
				if (b == 'b' && a == 'a' && n == 'n'){
					printf("Parabens, acertou!!\nPalavra: Banana\nTotal de erros: %d", tentativas);
					exit(0);
				}else jogo(op);
			}else if(test == 'n'){
				n = test;
				if (b == 'b' && a == 'a' && n == 'n'){
					printf("Parabens, acertou!!\nPalavra: Banana\nTotal de erros: %d", tentativas);
					exit(0);
				}else jogo(op);
			}else if (tentativas == 10 || tentativas >= 10){
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
					printf("Parabens, acertou!!\nPalavra: Abacaxi\nTotal de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);	
			}else if(test == 'b'){
				b = test;
				if (a == 'a' && b == 'b' && c == 'c' && x == 'x' && i =='i'){
					printf("Parabens, acertou!!\nPalavra: Abacaxi\nTotal de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);	
			}else if(test == 'c'){
			c = test;
					if (a == 'a' && b == 'b' && c == 'c' && x == 'x' && i =='i'){
					printf("Parabens, acertou!!\nPalavra: Abacaxi\nTotal de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);	
			}else if(test == 'x'){
				x = test;
				if (a == 'a' && b == 'b' && c == 'c' && x == 'x' && i =='i'){
					printf("Parabens, acertou!!\nPalavra: Abacaxi\nTotal de erros: %d", tentativas);
					exit(0);
				}else 
				 jogo (op);
			}else if(test == 'i'){
				i = test;
				if (a == 'a' && b == 'b' && c == 'c' && x == 'x' && i =='i'){
					printf("Parabens, acertou!!\nPalavra: Abacaxi\nTotal de erros: %d", tentativas);
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
		printf("Niveis: \n1.Facil\n2.Facil\n3.Facil\n4.Facil\n");
		scanf("%d",&forca);
	
		switch(forca){
			case 1:
				abacaxi(abacax);
				break;
			case 2:
				banana(bananax);
				break;
			case 3:
				armadura(armadurax); //Adicionei mais 1 case para armadura
				break;
			case 4:
				laranja(laranjax);
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
