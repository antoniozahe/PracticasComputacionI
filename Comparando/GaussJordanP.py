from timeit import default_timer as timer

variables = 3 #input("Número de ecuaciones: ")

filas = variables
columnas = int(variables) + 1

# Inicializamos Matriz en 0
matriz = []
for i in range(0, int(filas)):
    a = [0] * columnas
    matriz.append(a)

# Usuario asigna valore de la matriz
for i in range(0, int(filas)):
    for j in range(0, columnas):
        mensaje = 'Valor elemento [' + str(i) + '][' + str(j) + ']: '
        matriz[i][j] = input(str(mensaje))

start = timer()

# Row Echelon
for i in range(0, int(variables)):
    for j in range(0, int(variables)):
        if i != j:
            coc = float(matriz[j][i]) / float(matriz[i][i])
            for k in range(0, columnas):
                matriz[j][k] = float(matriz[j][k]) - float(coc) * float(matriz[i][k])

# Igualamos Diagonal a 1
for i in range(0, int(variables)):
    div = float(matriz[i][i])
    for j in range(0, int(columnas)):
        matriz[i][j] = float(matriz[i][j]) / div

end = timer()

# Imprimimos Soluciones
print("Solución")
for i in range(0, int(variables)):
    print("x" + str(i) + " = " + str(matriz[i][int(variables)]))

print((end - start)*(10**6))
