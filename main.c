#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//neste exercicio fizemos uma calculadora com looping utlizando a instrução do while, junto com switch, o exercio pedia para apresentar os operador (+,-,/,*) na tela e fizemos como pedido.

int main() {
  double num1, num2, soma, sub, div, mult = 0;
  char res;
   
  do{
    printf("Digite a opçao que DESEJA!\n");
    printf("Digite [0] Sair! \n");
    printf("Digite [1] SOMAR! \n");
    printf("Digite [2] SUBTRAIR!\n");
    printf("Digite [3] DIVIDIR!\n");
    printf("Digite [4] MULTIPLICAR!\n");
    printf("\t\t\t\t\t\t>>> ");
    scanf(" %c", &res);
    printf("\n\n"); 
    
  
    switch(res){
    
    case '0':
    printf("Volte sempre que quizer!! Voce escolheu SAIR!!");
    exit(3);
    break;
    
    case '1':
    printf("Digite o primeiro valor:\n");
    printf("\t\t\t\t\t\t>>> ");
    scanf("%lf", &num1);
    printf("Digite o segundo valor:\n");
    printf("\t\t\t\t\t\t>>> ");
    scanf("%lf", &num2);
    soma = num1 + num2;
    printf("O resultado de %.2lf + %.2lf = %.2lf\n", num1,num2,soma);
    break;

    case '2':
    printf("Digite o primeiro valor:\n");
    printf("\t\t\t\t\t\t>>> ");
    scanf("%lf", &num1);
    printf("Digite o segundo valor:\n");
    printf("\t\t\t\t\t\t>>> ");
    scanf("%lf", &num2);
    sub = num1-num2;
    printf("O resultado de %.2lf - %.2lf = %.2lf\n", num1,num2, sub);
    break;

    case '3':
    printf("Digite o primeiro valor:\n");
    printf("\t\t\t\t\t\t>>> ");
    scanf("%lf", &num1);
    printf("Digite o segundo valor:\n");
    printf("\t\t\t\t\t\t>>> ");
    scanf("%lf", &num2);
    div = num1/ num2;
    printf("O resultado de %.2lf / %.2lf = %.2lf\n", num1,num2, div);
    break;

    case '4':
    printf("Digite o primeiro valor:\n");
    printf("\t\t\t\t\t\t>>> ");
    scanf("%lf", &num1);
    printf("Digite o segundo valor:\n");
    printf("\t\t\t\t\t\t>>> ");
    scanf("%lf", &num2);
    mult=num1*num2;
    printf("O resultado de %.2lf * %.2lf = %.2lf\n", num1,num2, mult);
    break;

    default:

    printf("Você escolheu uma opção inválida\n");
    }
    
    printf("Digite 'ENTER' para CONTINUAR!!");
    setbuf(stdin, NULL);
    getchar();
    system("clear");
    
  
    }while(res != 0);
    

    return 0;
}