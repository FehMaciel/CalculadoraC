
#include <stdio.h>


float SOMA(float a, int b){
    float result;
    result = a + b;
    return result;
}

float SUB(float a, int b){
    float result;
    result = a - b;
    return result;
}

float DIVISAO(float a, int b){
    float result;
    result = a / b;
    return result;
}

float MULT(float a, int b){
    float result;
    result = a * b;
    return result;
}


int main()
{
    float num1;
    char op;
    float num2;
    printf("================================\n");
    printf("    Calculadora de 4 Operações  \n");
    printf("================================\n");
    printf("Digite um número: ");
    scanf("%f", &num1);


    printf("\nPara Somar digite +");
    printf("\nPara Subtrair digite -");
    printf("\nPara Multiplicar digite *");
    printf("\nPara Dividir digite -");
    printf("\n\nDigite o operador que deseja:");
    scanf(" %c", &op);
    
    
    
    printf("Digite outro número: ");
    scanf("%f", &num2);
        
    if(op == '+'){
        float result;
        result = SOMA(num1, num2);
        printf("%.2f", result);
    }
    else if(op == '-'){
        float result;
        result = SUB(num1, num2);
        printf("%.2f", result);
    }
    else if(op == '*'){
        float result;
        result = MULT(num1, num2);
        printf("%.2f", result);
    }
    else if(op == '/'){
        float result;
        result = DIVISAO(num1, num2);
        printf("%.2f", result);
    }else{
        printf("\nOperador Inválido");
        printf("\nPara Somar digite +");
        printf("\nPara Subtrair digite -");
        printf("\nPara Multiplicar digite *");
        printf("\nPara Dividir digite -");
        printf("\n\nDigite o operador que deseja:");
        scanf(" %c", &op);
    }
    

    return 0;
}