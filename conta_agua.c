#include<stdio.h>
#include<stdlib.h>

int calcula_preco(int n){
    int total = 7;
    int franquia;
    if(n % 100){
        franquia = 1;
        total *= franquia;
    }
    // else{
    //     printf("%d", n%10);
    // }
        
    return total;
}

int main(void) {
	int n, conta;
	scanf("%d", &n);

	if(n <= 10) {
		conta = 7;
	} 
    else if (n>=11 && n<=30) {        
        conta = (n-10) * 1 + 7;
	} 
    else if (n>=31 && n<=100) {
		conta = (n-30) * 2 + 27;
	} 
    else {
		conta = (n-100) * 5 + 167;
	}
	
	printf("%i\n", conta);

	return 0;
}