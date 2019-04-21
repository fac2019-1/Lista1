#include<stdio.h>
#include<stdlib.h>

int soma_n(int n){
    int aux = 0, i, num;
    for(i=0; i < n; i++){
        scanf("%d", &num);
        aux += num;
    }
    return aux;
}

int main(){
    int n, soma;
    scanf("%d", &n);
    soma = soma_n(n);
    printf("%d\n", soma);
    return 0;
}