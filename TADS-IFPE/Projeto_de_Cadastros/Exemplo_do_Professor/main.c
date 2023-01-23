#include <stdio.h>
#include <stdlib.h>

#define MAX_CONTATOS 1000 //numero máximo de contatos

enum {TELA_SAIR=-1,TELA_PRINCIPAL, TELA_CADASTRAR, TELA_DESCADASTRAR, TELA_LISTAR_TODOS} Telas;

struct{
    char nome[128];
    char telefone[64];
}Contato;


struct{
    Telas menu;
    int totalContatos;
    Contato contatos[MAX_CONTATOS];
} AgendaTelefonica;

int main()
{
   AgendaTelefonica agenda;
   memset(&agenda,0x0,sizeof(agenda)); ///zera todos os bytes de agenda

   ///menu da agenda
   agenda.menu = TELA_PRINCIPAL;

   while (agenda.menu != TELA_SAIR)
   {
       switch (agenda.menu)
       {
           case TELA PRINCIPAL:
           {
           }
           break;

           case TELA_CADASTRAR:
            {
                agenda.menu = TELA_PRINCIPAL;
            }
            break;

            case TELA_DESCADASTRAR:
            {
                 agenda.menu = TELA_PRINCIPAL;
            }
            break;

            case TELA_LISTAR_TODOS:
            {
                 agenda.menu = TELA_PRINCIPAL;
            }
            break;

            default:
                agenda.menu = TELA_PRINCIPAL;
                break;

       }
   }
   return 0;
}
