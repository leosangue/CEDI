1. (15 puntos)
Diseña un programa que tome cualquier número entero positivo que elija el usuario y lo transforme repetidamente aplicando un conjunto de reglas hasta que el número se convierta en 1.

Reglas de la Secuencia: 
El programa deberá seguir este proceso en un ciclo While:
Si el número actual es par, el siguiente número de la secuencia es el resultado de dividirlo entre 2.
Si el número actual es impar, el siguiente número de la secuencia es el resultado de sumarle 1.
El programa debe mostrar la secuencia completa de números que se generan, desde el número inicial hasta llegar al 1.

Ejemplo de Funcionamiento: 
Si el usuario introduce el número 10:
10 es par → 10 / 2 = 5
5 es impar → 5 + 1 = 6
6 es par → 6 / 2 = 3
3 es impar → 3 + 1 = 4
4 es par → 4 / 2 = 2
2 es par → 2 / 2 = 1 (El programa termina)
Salida Esperada en Pantalla:
10
5
6
3
4
2
1

2.  (25 puntos)
Escribe un programa que encuentre y muestre todos los factores de un número entero positivo que elija el usuario. Además de mostrar la lista de factores, el programa deberá contar cuántos factores se encontraron en total y mostrar esta cantidad al final.  

Un factor (o divisor) es un número que divide a otro de manera exacta, es decir, sin dejar residuo.

Proceso Sugerido: 
Para encontrar todos los factores, tu programa deberá revisar cada número, comenzando desde el 1 hasta el número que el usuario ingresó, y comprobar si la división es exacta.
Debes utilizar un ciclo Do-While.

Ejemplo de Funcionamiento: 
Si el usuario introduce el número 12:
El programa debe comprobar: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 y 12.
Determina que 1, 2, 3, 4, 6 y 12 lo dividen de forma exacta.
Salida Esperada en Pantalla:
Los factores de 12 son:
1
2
3
4
6
12
El numero 12 tiene 6 factores.