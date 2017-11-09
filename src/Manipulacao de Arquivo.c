/*
 ============================================================================
 Name        : Manipulacao.c
 Author      : Fernando
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	FILE *fp;
	int i;
	char c, string[100];
	fp = fopen ("fp.txt", "w+");
	if(!fp){
		printf("Erro na abertura do arquivo\n\n");
	}
	printf("Digite a string que será gravada no arquivo: ");
	fflush(stdin);
	gets(string);

	fputs(string, fp);

//	for (i=0; string[i]; i++){
//		putc(string[i],fp);
//	}

	c = getc(fp);
	while(!feof(fp)){
		printf("%c", c);
		c = getc(fp);
	}

	if(fclose(fp)==0){
		printf("Arquivo fechado com sucesso\n");
	}
	return 0;
}
