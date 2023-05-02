
// Codigo Base
// int VerificaAlgo (n: int);
// i, j, k, l: int;
// para l := 1 TO 10.000 faça
// 	para i := 1 TO n-5 faça
// 		para j := i+2 TO n/2 faça
// 			para k := 1 TO n faça
// 				{Inspecione elemento}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int VerificaAlgo(int n) {
    int i, j, k, l, cont = 0;
    for (l = 1; l <= 10000; l++) {
        for (i = 1; i <= n-5; i++) {
            for (j = i+2; j <= n/2; j++) {
                for (k = 1; k <= n; k++) {
                    cont++;
                }
            }
        }
    }
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s n\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    clock_t start_time = clock();
    if (!VerificaAlgo(n))
    {
        clock_t end_time = clock();
        double elapsed_time = (double) (end_time - start_time) / CLOCKS_PER_SEC;

        printf("Tempo de execução: %.2f seconds\n", elapsed_time);
    }
    
    return 0;
}
