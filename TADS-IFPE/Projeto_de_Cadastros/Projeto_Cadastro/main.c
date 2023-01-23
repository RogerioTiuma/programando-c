#include <stdio.h>
#include <stdlib.h>
#define MAX_REGISTRO 1000


struct almoxarifado{
    char dataRegis[10];
    char tipoDeRegis[10];
    char tipoMaterial[10];
    char dimensao[10];
    char nomeFuncRegis[9];
    float peso;
    float quantidade;
};

struct RegistroAlmoxarifado{
    Telas menu;
    int totalDeRegistros;
    almoxarifado Registros[MAX_REGISTRO];
};



enum {SAIR=-1,PRINCIPAL, CADASTRO, DESCADASTRAR, LISTAR_TODOS} Telas;

int main() {
    RegistroAlmoxarifado registro;
    int op;

int main()
{
   AgendaTelefonica agenda;
   memset(&agenda,0x0,sizeof(agenda)); ///zera todos os bytes de agenda

   ///menu da agenda
   registro.menu = TELA_PRINCIPAL;

   while (registro.menu != TELA_SAIR)
   {
       switch (registro.menu)
       {
           case TELA PRINCIPAL:
           {
               do{
               printf("DIGITE 1 PARA CADASTRO \n DIGITE 2 PARA DESCADASTRO \n DIGITE 3 PARA LISTAR TODOS OS ITENS \n DIGITE -1 PARA SAIR \n ");
               scanf()
           }
           break;

           case TELA_CADASTRAR:
            {
                do{
            printf("Qual a data de registro que deseja fazer? \n");
            scanf("%10s",registro.dataRegis);

            printf("Qual o tipo de registro que deseja fazer? \n");
            scanf("%10s",registro.tipoDeRegis);

            printf("Qual o tipo de material? \n");
            scanf("%10s",registro.tipoMaterial);

            printf("Qual a dimensão do material? \n");
            scanf("%10s",registro.dimensao);

            printf("Qual o nome do funcionario que esta registrando? \n");
            scanf("%10s",registro.nomeFuncRegis);

            printf("Qual o peso da materia prima? \n");
            scanf("%f",&registro.peso);

            printf("Qual a quantidade? \n");
            scanf("%f",&registro.quantidade);

            printf("Deseja continuar fazendo cadastro? [Digite '1' P/ CONTINUAR E '0' PARA TELA PRINCIPAL]")
            scanf("%d",&registro.menu);

            }while(registro.menu=0);

            registro.menu = TELA_PRINCIPAL;
            }
            break;

            case TELA_DESCADASTRAR:
            {
                 registro.menu = TELA_PRINCIPAL;
            }
            break;

            case TELA_LISTAR_TODOS:
            {
                 registro.menu = TELA_PRINCIPAL;
            }
            break;

            default:
                registro.menu = TELA_PRINCIPAL;
                break;

       }
   }
   return 0;
}
