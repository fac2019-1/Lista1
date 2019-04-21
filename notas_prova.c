#include<stdio.h>
#include<stdlib.h>

int converte_nota(int n){
    char nota;
    if (n == 0){
        nota = 'E';
    }
    else if (n >= 1 && n <= 35){
        nota = 'D';
    }
    else if (n >= 36 && n <= 60){
        nota = 'C';
    }
    else if (n >= 61 && n <= 85){
        nota = 'B';
    }
    else{
        nota = 'A';
    }    
    return nota;
}

int main(){
    int n;
    char nota;
    scanf("%d", &n);
    nota = converte_nota(n);
    printf("%c\n", nota);
    return 0;
}