# Comparación
## Computación 1 - Antonio ZH
### COMPARACIÓN

Se comparó el tiempo de ejecución de tres algoritmos prácticamente iguales de Gauss Jordan; uno en C++ y dos en Python, uno utilizando arrays de la libreria "Numpy" y otro  usando lists.

Códigos Usados:
1. C++
2. Python Puro
3. Python Numpy

Se comparó con el mismo sistema de ecuaciones, para mantener la prueba lo más controlada posible:

```
[  2	 1	-1	|   8]
[ -3	-1	 2	| -11]
[ -2	 1	 2	|  -3]

#Donde las soluciones esperadas son:
x0 =  2
x1 =  3
x2 = -1
```

Los tiempos de ejecución (en microsegundos) en C++ fueron los siguientes:

    Prueba    | C++ | Python | Numpy 
:--:|:--:|:--:|:--:
1|3.4|75.59|69.1
2|3.9|56.1|67.9
3|3.4|58.9|69.6
4|3.3|55.5|67.0
5|3.7|60.4|65.6
6|3.7|56.9|64.2
7|3.3|57.4|68.5
8|3.7|55.8|68.9
9|3.5|56.7|62.3
10|3.4|56.1|65.5
**Promedio**|**3.53**|**58.94**|**66.86**

### CONCLUSIONES

Si bien no son pruebas a de laboratorio con grandes controles, sí nos ayuda a observar ciertas tendencias de rendimiento entre algoritmos muy similares en diferentes lenguajes de programación. Por los resultados obtenidos, podemos observar que el lenguaje que tomó mucho menos tiempo fue C++, que rondó los 3.5 milisegundos. Mientras que Python en sus variaciones pura y de Numpy, tuvieron un tiempo de ejecución de alrededor de 60 milisegundos.



------

**NOTA:** Los tiempos fueron medidos de la forma siguiente

````
1. Ingreso de datos de matriz
2. Start Timer
3. Método Gauss Jordan
4. End Timer
5. Imprimir Resultados de Gauss Jordan
6. Imprimir Tiempo de Ejecución (End-Start)
````

