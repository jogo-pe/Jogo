#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct _ATRIBUTOS
{
    int ataque, defesa, vigor, magia;
}ATRIBUTOS;

typedef struct _PERSONAGEM
{
    int vida;
    ATRIBUTOS habilidade;
    char nome[40];
    int inimigo[10];
    int posicao[30];

}PERSONAGEM;

void press();
void limpar_tela();
void imprimir_menu();

int main()
{
    setlocale(LC_ALL, "portuguese");
    PERSONAGEM jogador1;
    int i, opcao = 1;
    int vazio = 0;
    char comando;
    system("cls");

    printf("\nBem Vindo ao nosso jogo!");
    while(opcao)
    {
        limpar_tela();
        imprimir_menu();
        scanf("%c", &comando);
        switch(comando)
        {
            case 'A':
            printf("\nVocê atacou");
            press();

            break;
            
            
            case 'Q':
            opcao = 0;
            break;

            default:
            opcao = 0;

            break;
        }
    }
    printf("\nsaiu");
    // scanf("%d", &jogador1.habilidade.defesa);
    // printf("\nvoce tem %d de defesa", jogador1.habilidade.defesa);
    return 0;
}

void press()
{
    int temp;
    printf("\n \nPressione qualquer letra para se continuar...\n");
    scanf("%d", &temp);
}
void limpar_tela()
{
  
    system("cls");
    fflush(stdin);



}
void imprimir_menu()
{
    printf("\n%10s %10s %10s %10s %10s %10s\n", "A - Atacar", "M - Menu", "O - Olhar", "I - Ir", "Q = Sair", "D - Dica");
    printf("\nEscolha uma opção:\n     >>> ");
}