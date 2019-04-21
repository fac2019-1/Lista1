#include<stdio.h>
#include<stdlib.h>

int calcula_diferenca(int n, int m){
    int diferenca;
    diferenca = n - m;
    return diferenca;    
}

int main(){
    int n, m, diferenca;
    scanf("%d", &n);
    scanf("%d", &m);
    diferenca = calcula_diferenca(n, m);
    printf("%d\n", diferenca);
    return 0;
}