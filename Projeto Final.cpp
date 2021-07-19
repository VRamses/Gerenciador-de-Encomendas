#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>



struct encomenda
{
	char codigo[1024];
	char nomeRemetente[1024];
	char nomeDestinatario[1024];
	char endereco[1024];
};

void cadastrar (struct encomenda [], int);
void printOrders(struct encomenda encomendas[], int n);
void buscador (struct encomenda encomendas[], int);




main(){
	int controlador;
	setlocale(LC_ALL, "Portuguese");
	int escolha;
    struct encomenda encomendas[5];
    int i = 0;
	while (escolha!=4){
		system("CLS");
		printf("===========================================PROGRAMA PARA GERENCIAR ENCOMENDAS=========================================== \n \n");
		printf("\t \t \t \t \t  Informe a op��o desejada \n \n"); // Pede para o usu�rio escolher uma op��o
		printf("\t \t \t \t \t  1  ===> Registrar pacote \n");
		printf("\t \t \t \t \t  2  ===> Buscar pacote \n");
		printf("\t \t \t \t \t  3  ===> Mostrar encomendas \n");
		printf("\t \t \t \t \t  4  ===> Sair \n \n");
		printf("\t \t \t \t \t  Insira uma op��o: ");
		scanf("%d", &escolha); // Pega o dado do tipo char e armazena na vari�vel escolha
		getchar();
		switch(escolha){
		case 1:
			system("CLS");
            if (i <= 4) {
                cadastrar(encomendas, i);
                ++i;
            } else {
                printf("N�o � poss�vel adicionar novas encomendas!\n");
            }
			break; // Faz o c�digo n�o verificar mais
		case 2:
			system("CLS");
			buscador(encomendas, i);
			break;// Faz o c�digo n�o verificar mais
		case 3:
			system("CLS");
			printOrders(encomendas, i);
			break;// Faz o c�digo n�o verificar mais
		case 4:
			break;
		default: // Se nenhuma das op��es for escolhida, mostra isso
			printf("Insira uma op��o! \n");
			scanf("%d", &escolha);
			break;
		}
	}
}

void cadastrar (struct encomenda encomendas[], int i){
	int controlador=0;
	printf("===========================================PROGRAMA PARA GERENCIAR ENCOMENDAS=========================================== \n \n");
	printf("\t \t \t \t \t Insira um c�digo de 5 d�gitos ==> ");
	fgets(encomendas[i].codigo, 1024, stdin);
	printf("\t \t \t \t \t Insira o nome do remetente ==> ");
	fgets(encomendas[i].nomeDestinatario, 1024, stdin);
	printf("\t \t \t \t \t Insira o nome do destinat�rio ==> ");
	fgets(encomendas[i].nomeRemetente, 1024, stdin);
	printf("\t \t \t \t \t Insira o endere�o ==> ");
	fgets(encomendas[i].endereco, 1024, stdin);
	printf("\n \n");
	printf("\t \t \t \t \t    Confirme as informa��es: \n \n");
	printf("\t \t \t \t \t \t C�digo: %s \n", encomendas[i].codigo);
	printf("\t \t \t \t \t \t Remetente: %s \n", encomendas[i].nomeDestinatario);
	printf("\t \t \t \t \t \t Destinat�rio: %s \n", encomendas[i].nomeRemetente);
	printf("\t \t \t \t \t \t Endere�o: %s \n", encomendas[i].endereco);
	getch();
	// fflush(stdin);	
}

void printOrders(struct encomenda encomendas[], int n) {
    for(int i = 0; i < n; ++i ){
    	printf("\n \n");
	    printf("\t \t \t \t \t Encomenda %d \n", i+1);
	    printf("\t \t \t \t \t C�digo: %s \n", encomendas[i].codigo);
	    printf("\t \t \t \t \t Destinat�rio: %s \n", encomendas[i].nomeDestinatario);
	    printf("\t \t \t \t \t Remetente: %s \n", encomendas[i].nomeRemetente);
	    printf("\t \t \t \t \t Endere�o: %s \n", encomendas[i].endereco);
	    getch();
    }
}

void buscador (struct encomenda encomendas[], int buscador){
	char verificador[1024];
	char alterar;
	buscador = 0;
	printf("===========================================PROGRAMA PARA GERENCIAR ENCOMENDAS=========================================== \n \n");
	printf("\t \t \t \t \t Insira o c�digo da encomenda ==> ");
	fgets(verificador, 1024, stdin);
	for(int i = 0; i < 5; i++){
		if (strcmp(encomendas[i].codigo, verificador) == 0){
			printf("\n \n");
			printf("\t \t \t \t \t Achei!");
			printf("\n \n");
	    	printf("\t \t \t \t \t C�digo: %s \n", encomendas[i].codigo);
	    	printf("\t \t \t \t \t Destinat�rio: %s \n", encomendas[i].nomeDestinatario);
	    	printf("\t \t \t \t \t Remetente: %s \n", encomendas[i].nomeRemetente);
	    	printf("\t \t \t \t \t Endere�o: %s \n", encomendas[i].endereco);
	    	buscador == i;
	    	getch();
	    	printf("\n \n");
	    	printf("\t \t \t \t \t Voc� deseja alterar algum dado? (s ou n) ==> ");
	    	scanf("%c", &alterar);
	    	if (alterar == 's'){
	    		while(alterar!=4){
    	    		system("CLS");
    	    		printf("===========================================PROGRAMA PARA GERENCIAR ENCOMENDAS=========================================== \n \n");
    	    		printf("\n \n");
    	    		printf("\t \t \t \t \t Qual dado voc� deseja alterar? \n \n");
    	    		printf("\t \t \t \t \t  1  ===> Nome do Remetente \n");
    				printf("\t \t \t \t \t  2  ===> Nome do Destinat�rio \n");
    				printf("\t \t \t \t \t  3  ===> Endere�o \n");
    				printf("\t \t \t \t \t  4  ===> Sair \n  \n");
    				printf("\t \t \t \t \t  Insira uma op��o: ");
    				scanf("%d", &alterar); // Pega o dado do tipo char e armazena na vari�vel escolha
    				getchar();
				    switch(alterar){
					    case 1:
    						system("CLS");
    						printf("===========================================PROGRAMA PARA GERENCIAR ENCOMENDAS=========================================== \n \n");
    						printf("\n \n");
    						printf("\t \t \t \t \tRemetente atual ===>  %s", encomendas[i].nomeRemetente);
    						printf("\t \t \t \t \tInsira o novo nome do remetente ===> ");
    						fgets(encomendas[i].nomeRemetente, 1024, stdin);
    						printf("\n \n");
    						printf("\t \t \t \t \t Remetente alterado!");
    						getchar();
    						break; // Faz o c�digo n�o verificar mais
    					case 2:
    						system("CLS");
    						printf("===========================================PROGRAMA PARA GERENCIAR ENCOMENDAS=========================================== \n \n");
    						printf("\n \n");
    						printf("\t \t \t \t \tDestinat�rio atual ===>  %s", encomendas[i].nomeDestinatario);
    						printf("\t \t \t \t \tInsira o novo nome do destinat�rio ===> ");
    						fgets(encomendas[i].nomeDestinatario, 1024, stdin);
    						printf("\n \n");
    						printf("\t \t \t \t \t Destinat�rio alterado!");
    						getchar();
    						break;// Faz o c�digo n�o verificar mais
    					case 3:
    						system("CLS");
    						printf("===========================================PROGRAMA PARA GERENCIAR ENCOMENDAS=========================================== \n \n");
    						printf("\n \n");
    						printf("\t \t \t \t \tEndere�o atual ===>  %s", encomendas[i].endereco);
    						printf("\t \t \t \t \tInsira o novo nome do endere�o ===> ");
    						fgets(encomendas[i].endereco, 1024, stdin);
    						printf("\n \n");
    						printf("\t \t \t \t \t Endere�o alterado!");
    						getchar();
    						break;// Faz o c�digo n�o verificar mais
    					case 4:
    						break;
    					default: // Se nenhuma das op��es for escolhida, mostra isso
    						printf("Insira uma op��o! \n");
    						scanf("%d", &alterar);
    						break;
				    }
				}
			}
		    break;
			
		}
	}
}
