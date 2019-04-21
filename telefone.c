#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
#include<string.h>

char *converte_letra(int tam, char *numero){
    int i, respostas_certas = 0;
    for(i=0; i<tam ; i++){
        if(numero[i] == 'A' || numero[i] == 'B' || numero[i] == 'C'){
            numero[i] = '2';
        }
        else if(numero[i] == 'D' || numero[i] == 'E' || numero[i] == 'F'){
            numero[i] = '3';
        }
        else if(numero[i] == 'G' || numero[i] == 'H' || numero[i] == 'I'){
            numero[i] = '4';
        }
        else if(numero[i] == 'J' || numero[i] == 'K' || numero[i] == 'L'){
            numero[i] = '5';
        }
        else if(numero[i] == 'M' || numero[i] == 'N' || numero[i] == 'O'){
            numero[i] = '6';
        }
        else if(numero[i] == 'P' || numero[i] == 'Q' || numero[i] == 'R' || numero[i] == 'S'){
            numero[i] = '7';
        }
        else if(numero[i] == 'T' || numero[i] == 'U' || numero[i] == 'V'){
            numero[i] = '8';
        }
        else if(numero[i] == 'X' || numero[i] == 'Y' || numero[i] == 'Z'){
            numero[i] = '9';
        }
    }
    return numero;
}

int main(){
    int tam;
    char telefone[15];
    scanf("%s", telefone);
    tam = strlen(telefone);
    converte_letra(tam, telefone);
    printf("%s\n", telefone);
    return 0;
}