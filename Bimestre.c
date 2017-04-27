#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char nome[15];
	char sobrenome[20];
	int nota1;
	int nota2;
	int nota3;
	int nota4;
	int media;
	int exame;
	int guardar;
	int nota_final;
	
	printf("Digite o seu nome:");
	scanf("%s",nome);
	printf("Digite seu sobrenome:");
	scanf("%s",sobrenome);
	printf("Digite a nota do primeiro bimestre:");
	scanf("%i",&nota1);
	printf("Digite a nota do segundo bimestre:");
	scanf("%i",&nota2);
	printf("Digite a nota do terceiro bimestre:");
	scanf("%i",&nota3);
	printf("Digite a nota do quarto bimestre:");
	scanf("%i",&nota4);
	
	media=(nota1+nota2+nota3+nota4)/4;
	
	if(media>=7){
		printf("%s %s voce foi APROVADO, com as notas %i, %i, %i e %i.",nome,sobrenome,nota1,nota2,nota3,nota4);
	}
	if(media>4&&media<7){
		printf("%s %s voce vai fazer o EXAME FINAL!",nome,sobrenome);
		printf("\nQual foi sua nota no exame?");
		scanf("%i",&exame);
		guardar=(100-media);
		nota_final=100-guardar;
		if(exame>=nota_final){
			printf("Voce passou no exame final, esta APROVADO.");
		}
		else{
			printf("Infelizmente voce nao passou no exame final, esta REPROVADO.");
		}
		
	}
	if(media<4){
		printf("%s %s voce foi REPROVADO, com as notas %i, %i, %i e %i.",nome,sobrenome,nota1,nota2,nota3,nota4);
	}
	return 0;
}
