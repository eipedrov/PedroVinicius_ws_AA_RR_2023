#include <stdio.h>
#include <stdlib.h>

// int VerificaAlgo(int n) {
//     int i, j, k, l, cont = 0;
//     for (l = 1; l <= 10000; l++) {
//         for (i = 1; i <= n-5; i++) {
//             for (j = i+2; j <= n/2; j++) {
//                 for (k = 1; k <= n; k++) {
//                     cont++;
//                 }
//             }
//         }
//     }
//     return cont;
// };

int VerificaAlgo(int n) {
    int num_iteracoes = 0;
    for (int l = 1; l <= 10000; l++) {
        for (int i = 1; i <= n-5; i++) {
            for (int j = i+2; j <= n/2; j++) {
                num_iteracoes++;
            }
        }
    }
    return num_iteracoes * n;
}

int main(int argc, char const *argv[])
{
    printf("resultado: %d\n ",VerificaAlgo(6));

    return 0;
}
