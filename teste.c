////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, 
ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

#include <stdio.h>

int main(){
	int n, fibo01 = 0, fibo02 = 1;
	int i, proxFibo, found = 0;
	
	printf ("Informe um numero: ");
	scanf ("%d", &n);
	
	for (i = 0; i<= n; i++){
		if (i <= 1){
			proxFibo = i;
		} else {
			proxFibo = fibo01 + fibo02;
			fibo01 = fibo02;
			fibo02 = proxFibo;
		}
		
		if (proxFibo == n){
			found = 1;
			break;
		}
	} 
	
	if (found ){
		printf ("O numero %d pertence a sequencia de Fibonacci!", n);
	} else {
		printf ("O numero %d nao pertence a sequencia de Fibonacci!", n);
	}		
}*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
• O menor valor de faturamento ocorrido em um dia do mês;
• O maior valor de faturamento ocorrido em um dia do mês;
• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.

#include <stdio.h>

int main() {
    float vetValores[30] = {22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 0.0, 42889.2258, 46251.174, 11191.4722, 0.0, 0.0, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.2614, 0.0, 0.0, 35240.1826, 43829.1667, 18235.6852, 4355.0662, 13327.1025, 0.0, 0.0, 25681.8318, 1718.1221, 13220.495, 8414.61};// vetor que guarda o faturamento diário
    float somaFaturamento = 0.0, mediaMensal = 0.0, menorFaturamento = 0.0, maiorFaturamento = 0.0;
    int i, diasAcimaMedia = 0; 

    mediaMensal = somaFaturamento/30;

    menorFaturamento = vetValores[0];
    maiorFaturamento = vetValores[0];
    
    for (i = 1; i < 30; i++) {
        if (vetValores[i] < menorFaturamento) {
            menorFaturamento = vetValores[i];
            
        } if (vetValores[i] > maiorFaturamento) {
            maiorFaturamento = vetValores[i];
        }
    }

    for (i = 0; i < 30; i++) {
        if (vetValores[i] > mediaMensal) {
            diasAcimaMedia++;
        }
    }
    printf("Menor faturamento diario: %.2f\n", menorFaturamento);
    printf("Maior faturamento diario: %.2f\n",maiorFaturamento);
    printf("Dias em que o faturamento diario foi superior a media mensal: %d\n", diasAcimaMedia);
}*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:

SP – R$67.836,43
RJ – R$36.678,66
MG – R$29.229,88
ES – R$27.165,48
Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal 
da distribuidora.

#include <stdio.h>

int main() {
    float fatTotal = 0.0;
    float fatSP = 67836.43;
    float fatRJ = 36678.66;
    float fatMG = 29229.88;
    float fatES = 27165.48;
    float fatOutros = 19849.53;
    float percentualSP, percentualRJ, percentualMG, percentualES, percentualOutros;

    fatTotal = fatSP + fatRJ + fatMG + fatES + fatOutros;

    percentualSP = (fatSP / fatTotal) * 100;
    percentualRJ = (fatRJ / fatTotal) * 100;
    percentualMG = (fatMG / fatTotal) * 100;
    percentualES = (fatES / fatTotal) * 100;
    percentualOutros = (fatOutros / fatTotal) * 100;

    printf("Percentual de faturamento por estado:\n");
    printf("SP: %.2f%%\n", percentualSP);
    printf("RJ: %.2f%%\n", percentualRJ);
    printf("MG: %.2f%%\n", percentualMG);
    printf("ES: %.2f%%\n", percentualES);
    printf("Outros: %.2f%%\n", percentualOutros);
}*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*5) Escreva um programa que inverta os caracteres de um string.

#include <stdio.h>
#include <string.h>

int main(){
    char string[100], x;
    int i, j;

    printf("Informe uma string: ");
    gets(string);
    printf ("\n");
    
    printf ("String informada: %s\n", string);

    j = strlen(string) - 1;

    for (i = 0; i < j; i++, j--) {
        x = string[i];
        string[i] = string[j];
        string[j] = x;
    }

    printf("String informada invertida: %s\n", string);
}*/ 

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
