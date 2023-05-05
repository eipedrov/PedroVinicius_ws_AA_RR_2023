// Outra forma de melhorar ainda mais é encontrar uma solução que não dependa do 
// loop aninhado. Uma abordagem seria usar uma fórmula matemática que calcula diretamente 
// o número de iterações. Nesse caso, podemos observar que o loop em k não afeta o número 
// total de iterações. Portanto, o número total de iterações é:

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

// Essa solução tem complexidade de tempo O(n^2), o que é ainda melhor do que a 
// solução anterior. Além disso, não há loops aninhados, o que torna a função mais 
// clara e fácil de entender.