#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//declaração do ponteiro do tipo FILE
	//para acessar o arquivo
	FILE* arquivo;
	char entrada[30];
	char saida[30];
	int i;
	
	//criando um arquivo para escrita
	arquivo = fopen("Teste.txt", "w");
	
	//verificando se o arquivo abriu
	if (arquivo == NULL) {
		printf("\nErro ao abrir o arquivo!\n"); 
		//encerrando o programa e fechando
		//qualquer arquivo que foi aberto
		exit(1);
	} else {
		printf("\nArquivo aberto com sucesso!\n"); 
	}
	
	//o vetor str recebe uma série de
	//caracteres digitados pelo usuário
	gets(entrada); 
	
	//percorrendo o vetor str e escrevendo
	//a string caracter por caracter no
	//arquivo
	for(i = 0; entrada[i]; i++) {
		putc(entrada[i], arquivo);
	}
	
	//fechando o arquivo
	fclose(arquivo);
	
	printf("\nArquivo criado com sucesso");
	
	//abrindo o arquivo criado para leitura
	arquivo = fopen("Teste.txt", "r");
	
	if (arquivo == NULL) {
		printf("\nErro ao abrir o arquivo!\n"); 
		exit(1);
	} else {
		printf("\nArquivo aberto com sucesso!\n"); 
	}
	
	//exibindo o conteudo do arquivo
	printf("\nConteudo do arquivo: ");
	while(fgets(saida, 29, arquivo)) {
		printf("%s", saida);
	}
	
	//fechando novamente
	fclose(arquivo);
	
	return 0;
}
