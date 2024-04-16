#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Variaveis de entrada
char nomecliente[40];
char cpf[11];
char datanasc[10];
float valorindividual, valortotal;
int qunt_dependente;

char nome_odonto[40];
char cpf_odonto[12];
char datanasc_odonto[10];
float valorindividual_odonto, valortotal_odonto; 
int qunt_dependente_odonto;
int tipoPlano;

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Informe o tipe de plano 1-Saúde ou 2-Odonto\n");
	scanf("%d", &tipoPlano);
	if (tipoPlano==1){ 
		printf("Informe seu nome\n");
	    scanf("%s" , &nomecliente);
	    printf("Informe seu CPF\n");
	    scanf("%s" , &cpf);
	    printf("Informe sua data de Nascimento\n");
	    scanf("%s" , &datanasc);
	    printf("Informe a quantidade de Dependentes\n");
	    scanf("%d" , &qunt_dependente);
	    valorindividual=120;
	    
	    printf("Nome do Cliente : %s \n" , nomecliente);
	    printf("Cpf : %s \n" , cpf);
	    printf("Data Nascimento : %s\n" , datanasc);
	    printf("Total Depepenten : %d\n" , qunt_dependente);
	    
	    valortotal = qunt_dependente * valorindividual;
        printf("Você deverá pagar: %.2f\n", valortotal);
}else{
        printf("Informe seu nome\n");
	    scanf("%s" , &nome_odonto);
	    printf("Informe seu CPF\n");
	    scanf("%s" , &cpf_odonto);
	    printf("Informe sua data de Nascimento\n");
	    scanf("%s" , &datanasc_odonto);
	    printf("Informe a quantidade de Dependentes\n");
	    scanf("%d" , &qunt_dependente_odonto);
	    valorindividual_odonto=80;
	    
        printf("Nome do Cliente : %s\n" , nome_odonto);
	    printf("Cpf : %s\n" , cpf_odonto);
	    printf("Data Nascimento : %s\n" , datanasc_odonto);
	    printf("Total Depepenten : %d\n" , qunt_dependente_odonto);
	    
	    valortotal_odonto = qunt_dependente_odonto * valorindividual_odonto;
	     printf("Você deverá pagar: %.2f\n", valortotal_odonto);
}




}