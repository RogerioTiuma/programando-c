#include <stdio.h>
#include <stdlib.h>
#define MAX_REGISTRO 1000


typedef struct {
    char dataRegis[11];
    char tipoMaterial[10];
    char dimensao[50];
    char nomeFuncRegis[50];
    char peso[10];
    char quantidade[4];
}Almoxarifado;

typedef enum {TELA_SAIR=-1,TELA_PRINCIPAL, TELA_CADASTRAR, TELA_DESCADASTRAR, TELA_LISTAR_TODOS} Telas;

typedef struct {
    Telas menu;
    int totalDeRegistros;
    Almoxarifado Registros[MAX_REGISTRO];
}RegistroAlmoxarifado;



int main()
{
   RegistroAlmoxarifado registro;
   memset(&registro,0x0,sizeof(registro)); ///zera todos os bytes de registro


   ///menu de controle de almoxarifado
   registro.menu = TELA_PRINCIPAL;

     FILE * memoria = fopen("cadastros.bin", "rb");
   if (memoria == NULL)
   {
       printf("Erro ao abrir arquivo de memoria de almoxarifado. \n");
       printf("Voce deve criar o arquivo 'cadastros.bin' na primeira execucao. \n");
       return 1;
   }

   size_t lidos = fread(registro.Registros, sizeof(Almoxarifado),MAX_REGISTRO, memoria);
   printf("Lidos %zd cadastros \n", lidos);
   registro.totalDeRegistros = (int)lidos;
   fclose(memoria);


   while (registro.menu != TELA_SAIR)
   {
       switch (registro.menu)
       {
           case TELA_PRINCIPAL:
           {
               printf("------------------------------------------------\n");
               printf("\tCONTROLE DE ALMOXARIFADO: \n");
               printf("------------------------------------------------\n");
               int opcao =-1;

               do{
                printf("Escolha uma opcao: \n");
                printf("\tDigite 1 para cadastrar item \n");
                printf("\tDigite 2 para remover item \n");
                printf("\tDigite 3 para listar itens \n");
                printf("\tDigite 0 para sair do programa \n");
                scanf("%d",&opcao);
               }while(opcao<0||opcao>3);

               if (opcao == 0)
                registro.menu = TELA_SAIR;

               if(opcao == 1)
               {
                   registro.menu = TELA_CADASTRAR;
                   if(registro.totalDeRegistros >= MAX_REGISTRO)
                   {
                       printf("\tControle de almoxarifado lotado, não é possível adicionar novo item. \n");
                       registro.menu = TELA_PRINCIPAL;
                   }
               }
               if(opcao == 2)
               {
                   registro.menu = TELA_DESCADASTRAR;
                   if (registro.totalDeRegistros == 0)
                   {
                       printf("\tNão há itens no almoxarifado.\n ");
                       registro.menu = TELA_PRINCIPAL;
                   }
               }
               if(opcao == 3)
               {
                   registro.menu = TELA_LISTAR_TODOS;
                   if (registro.totalDeRegistros==0)
                   {
                       printf("\tNao ha itens no almoxarifado.\n");
                       registro.menu = TELA_PRINCIPAL;
                   }
               }
           }
           break;

           case TELA_CADASTRAR:
            {
                printf("------------------------------------------------\n");
                printf("\tCONTROLE DE CADASTRO: \n");
                printf("------------------------------------------------\n");

                Almoxarifado novo;
                char opcao2 = 's';
                printf("Voce deseja inserir um novo cadastro? Enter para continuar \n");

                int c = 0;
                while((c = getchar()) != '\n' && c != EOF) {}

                do
                {
                    memset(&novo,0x0,sizeof(novo));
                    printf("Digite a data de registro: \n");
                    fgets(novo.dataRegis,11,stdin);
                    int id = 0;
                    while (novo.dataRegis[id] != '\0' && novo.dataRegis[id] != '\n')
                        id++;
                    novo.dataRegis[id] = '\0';
                    while((c = getchar()) != '\n' && c != EOF) {}

                    printf("Qual o tipo de materia prima?(digite: Tubo, Chapa, Arame ou Bobina) \n");
                    fgets( novo.tipoMaterial,10,stdin);
                    id = 0;
                    while(novo.tipoMaterial[id] != '\0' && novo.tipoMaterial[id] != '\n')
                        id++;
                    novo.tipoMaterial[id] = '\0';
                    while((c = getchar()) != '\n' && c != EOF) {}

                    printf("Qual a dimensao do item? \n");
                    fgets(novo.dimensao,50,stdin);
                    id = 0;
                    while(novo.dimensao[id] != '\0' && novo.dimensao[id] != '\n')
                        id++;
                    novo.dimensao[id] = '\0';

                    printf("Qual o nome do funcionario responsavel pelo registro ? \n");
                    fgets(novo.nomeFuncRegis,50,stdin);
                    id = 0;
                    while(novo.nomeFuncRegis[id] != '\0' && novo.nomeFuncRegis[id] != '\n')
                        id++;
                    novo.nomeFuncRegis[id] = '\0';

                    printf("Qual o peso do item registrado ? \n");
                    fgets(novo.peso,10,stdin);
                    id = 0;
                    while(novo.peso[id] != '\0' && novo.peso[id] != '\n')
                        id++;
                    novo.peso[id] = '\0';

                    printf("Qual a quantidade do item registrado ? \n");
                    fgets(novo.quantidade,5,stdin);
                    id = 0;
                    while(novo.quantidade[id] != '\0' && novo.quantidade[id] != '\n')
                        id++;
                    novo.quantidade[id] = '\0';


                    printf("Tem certeza que quer este item? [s/n]\n");
                    opcao2 = getchar();

                    } while(opcao2 == 'n'||opcao2 == 'N');

                        registro.Registros[registro.totalDeRegistros]=novo;
                        registro.totalDeRegistros++;
                        memoria = fopen("registros.bin","w+b");

                        if(memoria == NULL)
                        {
                            printf("Erro ao abrir registros.bin");
                            return 0;
                        }
                        size_t salvos = fwrite(registro.Registros, sizeof(RegistroAlmoxarifado),
                        registro.totalDeRegistros,memoria);
                        if (salvos != (size_t)registro.totalDeRegistros)
                        {
                            printf("Erro ao salvar o registro de almoxarifado. \n");
                            return 1;
                        }
                    fclose(memoria);

                registro.menu = TELA_PRINCIPAL;
            }
            break;


            case TELA_DESCADASTRAR:{

                printf("------------------------------------------------\n");
                printf("\tTELA DE DESCADASTRO: \n");
                printf("------------------------------------------------\n");
                registro.menu = TELA_PRINCIPAL;
                int i;

                for (i=0; i < registro.totalDeRegistros;i++)
                {
                    printf("Item %d\n",i);
                    printf("\tData de Registro:%s\n",registro.Registros[i].dataRegis);
                    printf("\tTipo de item: %s\n", registro.Registros[i].tipoMaterial);
                    printf("\tDimensao: %s\n", registro.Registros[i].dimensao);
                    printf("\tNome do funcionario que registrou: %s\n", registro.Registros[i].nomeFuncRegis);
                    printf("\tPeso unitario: %s\n", registro.Registros[i].peso);
                    printf("\tQuantidade: %s\n", registro.Registros[i].quantidade);
                    printf("-------------------------------------------------\n");
                }

                int indice = -1;
                do
                {
                    printf("Digite um indice de item para descadastrar: de 0 até %d\n :");
                    scanf("%d", &indice);

                    //limpa o buffer para evitar problemas
                int c = 0;
                while((c = getchar()) != '\n' && c != EOF) {}
                }while (indice <0 || indice>=registro.totalDeRegistros);

                for(i = indice; i<registro.totalDeRegistros - 1; i++)
                    registro.Registros[i] = registro.Registros[i+1];

                registro.totalDeRegistros--;

                memoria = fopen("registros.bin","w+b");
                if(memoria == NULL)
                {
                    printf("erro ao abrir registros.bin\n");
                    return 0;
                }

                size_t salvos = fwrite(registro.Registros, sizeof(Almoxarifado),registro.totalDeRegistros,memoria);

                if(salvos != (size_t)registro.totalDeRegistros)
                {
                    printf("Erro ao salvar contatos na memoria contatos.bin \n");
                    return 1;
                }
                registro.menu = TELA_PRINCIPAL;

            }
            break;

            case TELA_LISTAR_TODOS:
            {
                printf("---------------------------\n");
                printf("\tLISTAGEM DOS ITENS DE ALMOXARIFADO CADASTRADOS: \n");
                printf("---------------------------\n");
                int i;
                for(i=0;i < registro.totalDeRegistros;i++)
                {
                    printf("Item %d\n",i);
                    printf("\tData de Registro:%s\n",registro.Registros[i].dataRegis);
                    printf("\tTipo de item: %s\n", registro.Registros[i].tipoMaterial);
                    printf("\tDimensao: %s\n", registro.Registros[i].dimensao);
                    printf("\tNome do funcionario que registrou: %s\n", registro.Registros[i].nomeFuncRegis);
                    printf("\tPeso unitario: %s\n", registro.Registros[i].peso);
                    printf("\tQuantidade: %s\n", registro.Registros[i].quantidade);
                    printf("-------------------------------------------------\n");

                }
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
