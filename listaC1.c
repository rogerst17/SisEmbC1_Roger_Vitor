#include <stdio.h>
//----------------------------------- QUESTÃO 1 ------------------------------------
void separarPartes (double numero, int *parteInteira, double *parteFracionaria){
    *parteInteira = (int)numero;

    *parteFracionaria = numero - *parteInteira;
}

int main(){
    double numero = 237.48;
    int parteInteira;
    double parteFracionaria;

    separarPartes (numero, &parteInteira, &parteFracionaria);

    printf ("Numero: %.2lf\n", numero);
    printf ("Parte inteira: %d\n", parteInteira);
    printf ("Parte fracionaria: %.2lf\n", parteFracionaria)

    return 0;
}

//----------------------------------- QUESTÃO 2 ------------------------------------
int somaDosCemPrimeirosPares (){
    int soma = 0;
    int numero = 2;

    for (int i = 1; i<=100; i++){
        soma += numero;
        numero += 2;
    }

    return soma;
}

int main (){
    int resultado = somaDosCemPrimeirosPares();
    printf ("A soma dos cem primeiros pares eh: %d\n", resultado);
    return 0;
}

//----------------------------------- QUESTÃO 3 ------------------------------------
float tempCelsius, tempFahrenheit;

float calcularTemperatura(){
    tempFahrenheit = ((tempCelsius * 1.8) + 32);
}

int main(){
    printf ("Digite uma temperatura em graus Celsius para ser convertida em graus 
    Fahrenheit: ");
    scanf ("%f", &tempCelsius);

    calcularTemperatura();

    printf ("A temperatura em graus Fahrenheit eh: %.2f °F", tempFahrenheit );

    return 0;
}

//----------------------------------- QUESTÃO 4 ------------------------------------
void verificarParImparPositivoNegativo (int numero){
    if (numero % 2 == 0){
        printf ("%d eh um numero par.\n", numero);
    }else{
        printf ("%d eh um numero impar.\n", numero);
    }

    if (numero > 0){
        printf ("%d eh um numero positivo.\n", numero);
    }else if (numero < 0){
        printf ("%d eh um numero negativo.\n", numero);
    }else {
        printf ("%d eh igual a zero.\n", numero);
    }
}

int main (){
    int numero;

    printf ("Digite um numero: ");
    scanf ("%d", &numero);

    verificarParImparPositivoNegativo (numero);

    return 0;
}

//----------------------------------- QUESTÃO 5 ------------------------------------
float calcularCustoTotal (int quantidade){
    float custoUnitario;

    if (quantidade < 12){
        custoUnitario = 1.30;
    }else {
        custoUnitario = 1.00;
    }

    float custoTotal = quantidade * custoUnitario;

    return custoTotal;
}

int main (){
    int quantidade;

    printf ("Quantidade de macas compradas: ");
    scanf ("%d", &quantidade);

    float custo = calcularCustoTotal(quantidade);

    printf ("Custo total da compra: R$ %.2f\n", custo);

    return 0;
}

//----------------------------------- QUESTÃO 6 ------------------------------------
long long int fatorial;
int n, i;

int calcularFatorial (){
    if (n>=0){
        fatorial = 1;
            for(i=1; i<=n; i++){
                fatorial = fatorial * i;
            }
        printf ("lld\n", fatorial);    
    }else{
        printf("Digite um numero inteiro e positivo!");
    }
}

int main (){
    printf("Digite um numero inteiro e positivo para descobrir seu fatorial: ");
    scanf ("%d", &n);

    calcularFatorial ();

    return 0;
}