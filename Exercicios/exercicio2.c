#include <stdio.h>


void fibonacci(int limite) {
    int fib1 = 0, fib2 = 1, proximo;
    
    printf("%d, %d, ", fib1, fib2);
    
    proximo = fib1 + fib2;
    while (proximo <= limite) {
        printf("%d, ", proximo);
        fib1 = fib2;
        fib2 = proximo;
        proximo = fib1 + fib2;
    }
    printf("\n");
}


int pertenceFibonacci(int n) {
    int fib1 = 0, fib2 = 1, proximo;
    
    if (n == fib1 || n == fib2) {
        return 1; 
    }
    
    proximo = fib1 + fib2;
    while (proximo <= n) {
        if (proximo == n) {
            return 1; 
        }
        fib1 = fib2;
        fib2 = proximo;
        proximo = fib1 + fib2;
    }
    
    return 0; 
}

int main() {
    int limite = 100, numero;
    
    fibonacci(limite); 
    
    printf("Digite um numero para verificar se pertence a sequencia de Fibonacci: ");
    scanf("%d", &numero);
    
    if (pertenceFibonacci(numero)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", numero);
    }
    
    return 0;
}