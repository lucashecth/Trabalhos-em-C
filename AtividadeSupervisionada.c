#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	char frase[300], palavra[30];
	int tamfra, tampal, i, j, n=0, cont=0, aux=0;
	
	printf("Digite a sua frase:");
	gets(frase);
	printf("Digite a palava a ser procurada:");
	gets(palavra);	
	tampal=strlen(palavra);
	tamfra=strlen(frase);
	for(i=0; i<tamfra; i++)
	{
	if((frase[i-1]==' ' && frase[i] !=' ') || frase[0]==palavra[0])
		{
			for(j=0; j<tampal; j++)
			{
				if(palavra[j] == frase[i+j]){
					n++;}
				if(n==tampal && (frase[i+tampal]==' ' || i+tampal==tamfra)){
				cont++;
				n=0;}}
			n=0;}
	}
	if (cont >0){
	printf("A palavra %s, existe na frase.\nNúmero de vezes: %d", palavra,cont);
	}
	if (cont <=0){
	printf("A palavra %s, não existe na frase.",palavra);
	}
	return 0;}
