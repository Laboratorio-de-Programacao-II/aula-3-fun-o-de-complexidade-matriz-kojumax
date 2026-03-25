#include <stdio.h>

int conta_pares(int n, int mat[][n]) {
    int cont=0;
   for (int i = 0; i < n; i++){
         for (int j = 0; j <= i; j++){
                if (mat[i][j]%2 == 0) {
                    cont++;
                }
             }
        } 
    
    return cont; 

    /* TODO: Implemente esta função.
     * Para verificar se um número é par, use a expressão (x % 2 == 0) */
}

int main() {
    int n;
    scanf("%d", &n);

    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            scanf("%d", &mat[i][j]);

    printf("%d\n", conta_pares(n, mat));
    return 0;
}
