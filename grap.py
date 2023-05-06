import matplotlib.pyplot as plt

# Valores de N usados nas medições de tempo
N_values = [100, 200, 300, 400, 500, 600, 700, 800, 900, 1000]

# Médias de tempo correspondentes aos valores de N acima
time_means = [1.78, 13.73, 46.94, 107.87, 209.72, 361.39, 574.07, 856.47, 1219.40, 1676.30]

n_cube = [3, 4, 5, 6, 7, 8, 9, 10, 11, 12]

# Calcular os valores de N^3 correspondentes aos valores de N acima
N_cubed = [n**3 for n in n_cube]

# Plotar o gráfico com as médias de tempo e a curva de tendência N^3
plt.plot(N_values, time_means, label='Média de tempo')
plt.plot(N_values, N_cubed, label='N³')
plt.xlabel('N')
plt.ylabel('Tempo')
plt.title('Curva de Tencia a N³')
plt.legend()
plt.ylim(bottom=0, top=2000)  # definindo o limite do eixo y
plt.show()
