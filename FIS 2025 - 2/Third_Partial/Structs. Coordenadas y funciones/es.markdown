Crea la estructura Coordenada que cuente con las siguientes propiedades:
x: propiedad de tipo float.
y: propiedad de tipo float.

Declarar e implementar las siguientes funciones:
distancia: Función de tipo float que recibe 2 coordenadas como parámetro y regresa la distancia entre las 2 coordenadas.
mostrarFuncion: Función de tipo void que recibe 2 coordenadas como parámetro y muestra la función en su forma Y = Mx + B que se crea a partir de esas 2 coordenadas.

Se puede incluir la librería cmath con #include <cmath> para tener acceso a la función sqrt(float x). Esta función nos devuelve la raiz cuadrada del valor introducido como parámetro

distancia entre 2 coordenadas = sqrt( (x2-x1)^2 + (y2-y1)^2 )

función main:
Crea 2 coordenadas y asigna valores a "x" y "y" de cada coordenada.
Manda llamar la función distancia(coord1, coord2) y guarda el valor en una variable.
Muestra la distancia.
Manda llamar la funcion mostrarFuncion(coord1, coord2)