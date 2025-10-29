1: (Valor: 10 pts) 
Una profesora quiere repartir una cantidad de dulces de forma equitativa entre sus estudiantes. Crea un programa que le pida a la profesora cuántos dulces tiene y cuántos estudiantes hay en su salón. El programa debe calcular y mostrar cuántos dulces le tocan a cada estudiante y cuántos dulces sobran.
Consideraciones:
Utiliza variables de tipo int para los dulces y los estudiantes.
Usa los operadores de división y módulo para realizar los cálculos.
El programa debe mostrar los dos resultados de forma clara.
Ejemplo de salida:
Introduce la cantidad de dulces: 115
Introduce la cantidad de estudiantes: 30
A cada estudiante le tocan 3 dulces.
Sobran 25 dulces.

2: (Valor: 20 pts) 
Una empresa telefónica cobra las llamadas que realizan sus clientes con base en la duración de la llamada. 
El costo de la llamada se calcula de la siguiente manera:
- Los primeros 5 minutos cuestan $1.00 cada uno.
- Los siguientes 3 minutos (minutos 6, 7 y 8) cuestan $0.80 cada uno.
- Los siguientes 2 minutos (minutos 9 y 10) cuestan $0.50 cada uno.
- Cualquier minuto adicional después de los primeros 10 minutos cuesta $0.30 cada uno.

Crea un programa que permita al usuario introducir el número de minutos (número entero) que duró la llamada y calcule el costo total de la llamada.
Consideraciones:
El programa debe cumplir con lo siguiente:
Solicita al usuario que ingrese la duración total de la llamada en minutos (debe ser un número entero).
Calcula el costo total aplicando las tarifas por niveles correspondientes.
El resultado se debe de mostrar de la siguiente manera: 
"El total a pagar por la llamada de {min} minutos es de ${costo}" donde {min} es el número de minutos que duró la llamada y {precio} es el costo total de la llamada
Ejemplo de Funcionamiento: 
Si un usuario introduce que la llamada duró 9 minutos:
Entrada: 9
Cálculo:
Primeros 5 min: 5 * $1.00 = $5.00
Siguientes 3 min (del 6 al 8): 3 * $0.80 = $2.40
Siguiente minuto (el 9no): 1 * $0.50 = $0.50
Costo Total: $5.00 + $2.40 + $0.50 = $7.90
Salida del Programa:
"El total a pagar por la llamada de 9 minutos es de $7.90"