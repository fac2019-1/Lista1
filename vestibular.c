#include<stdio.h>
#include<stdlib.h>
#include <curses.h>

int converte_nota(int tam, char *gabarito, char *resposta){
    int i, respostas_certas = 0;
    for(i=0; i<tam ; i++){
        if(gabarito[i] == resposta[i]){
            respostas_certas ++;
        }
    }
    return respostas_certas;
}

int main(){
    int tam_questao, respostas_certas;
    scanf("%d", &tam_questao);
    char gabarito[tam_questao], resposta[tam_questao];
    scanf("%s", gabarito);
    scanf("%s", resposta);
    respostas_certas = converte_nota(tam_questao, gabarito, resposta);
    printf("%d\n", respostas_certas);
    return 0;
}