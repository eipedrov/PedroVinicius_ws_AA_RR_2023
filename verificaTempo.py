import subprocess
import matplotlib.pyplot as plt

num_executions = 13
ns = [100 + i*100 for i in range(10)]
total_times = []

for n in ns:
    times = []
    for i in range(num_executions):
        # Executa o programa C e captura o tempo de execução
        process = subprocess.Popen(["./verficaAlgo", str(n)], stdout=subprocess.PIPE)
        output, error = process.communicate()
        elapsed_time = float(output.decode().split()[-2])
        print(f"Tempo de execução da {i+1}ª execução para n={n}: {elapsed_time:.2f} segundos")
        times.append(elapsed_time)

    # Calcula o tempo médio de execução e adiciona à lista de tempos totais
    total_time = sum(times)
    average_time = total_time / num_executions
    total_times.append(average_time)
    print(f"Tempo médio de execução para n={n}: {average_time:.2f} segundos")

# Plota o gráfico
plt.plot(ns, total_times)
plt.xlabel('Valor de n')
plt.ylabel('Tempo de execução (s)')
plt.title('Tempo de execução em função de n')
plt.show()
