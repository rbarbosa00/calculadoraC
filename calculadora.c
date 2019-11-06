#include <stdio.h> 
#include <stdlib.h>

void soma()
{
    int numero1, numero2, resultado;

    printf("Indique o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Indique o segundo numero: ");
    scanf("%d", &numero2);

    resultado = numero1+numero2;
    printf("O e Resultado = %d \n", resultado);

    system ("pause");
    system("cls");
    menu();
}

void subtrai()
{
  int num1;
	int num2;
	int res;
    
    printf("Indique o primeiro numero: ");
    scanf("%d", &num1);
    printf("Indique o segundo numero: ");
    scanf("%d", &num2);
    
    res = num1-num2;
    
    printf("Resultado = %d \n", res);
  
    system ("pause");
    system("cls");
    menu();
}

void divide()
{
    int numero1, numero2, resultado;

    printf("Indique o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Indique o segundo numero: ");
    scanf("%d", &numero2);


    resultado = numero1/numero2;
    printf("O Resultado e= %d \n", resultado);

    system ("pause");
    system("cls");
    menu();
}

void multiplica()
{ 
  int num1; 
	int num2;
	int res;
    
    printf("Indique o primeiro numero: ");
    scanf("%d", &num1);
    printf("Indique o segundo numero: ");
    scanf("%d", &num2);
    
    res = num1*num2;
    
    printf("Resultado = %d \n", res);
    
    system ("pause");
    system("cls");
    menu();
}

void menu()
{ 
    int escolha;

    printf("\t\tBem vindo a calculadora em C\n\n");

    printf("Selecione uma operacao matematica:\n");
    printf("\t1- Adicao\n");
    printf("\t2- Subtracao\n");
    printf("\t3- Divisao\n");
    printf("\t4- Multiplicacao\n");
    printf("\t5- Sair\n");
    printf("Operacao: ");
    scanf ("%d", &escolha);

    switch (escolha)
    {
        case 1: 
            soma(); 
        break; 

        case 2:
            subtrai();
        break;

        case 3:
            divide();
        break;

        case 4:
            multiplica();
            break;

        case 5:
            system("exit");
            printf("\nFim...\n\n");
        break;

        default: 
            printf("\nComando invalido, tente novamente!\n\n");
            system ("pause");
            system ("cls");
            menu(); 
            break;
    }
}


int main() 
{
    menu();
    system("pause");
    return 0;
}
