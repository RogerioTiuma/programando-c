#include <stdio.h>
struct funcionario {
char primeiroNome[10];
char ultimoNome[10];
double salario;
};
int main() {
struct funcionario func = {"Maria", "Antunes", 3459.99};
printf("Funcionário: %s %s R$ %.2lf\n",
func.primeiroNome, func.ultimoNome, func.salario);
return 0;}
