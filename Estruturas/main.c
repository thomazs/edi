#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    int codigo;
    char nome[50];
    int idade;
}Cliente;

void tabela(Cliente c[], int tamanho);

int main()
{
    Cliente c[5];
    int i;
    setlocale(LC_ALL, "Portuguese");
    for(i=0; i<5; i++){
        printf("Cadastro do Cliente %d\n------------------\n", i+1);
        printf("Código: %d\n", i+1);
        c[i].codigo = i+1;
        printf("Nome:");
        gets(c[i].nome);
        printf("Idade:");
        scanf("%d", &c[i].idade);
        fflush(stdin);
        printf("\n\n");
    }
    tabela(c, 5);
    return 0;
}

void tabela(Cliente c[], int tamanho){
    int i;
    printf("Cód.|%-30s|Idade\n","Nome");
    printf("----+------------------------------+-----\n");
    for(i=0; i<tamanho; i++){
        printf("%.4d|%-30s|%5d\n", c[i].codigo, c[i].nome, c[i].idade);
    }
    printf("----+------------------------------+-----\n\n");
}
