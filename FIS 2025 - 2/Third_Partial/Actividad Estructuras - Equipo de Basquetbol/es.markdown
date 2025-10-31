Crea un programa de C++ que permita mantener el control de de un equipo de basqutebol.
Debes crear las siguientes estructuras con las siguientes propiedades:
Estadisticas
puntosAnotados: número entero
asistencias: número entero

Jugador
nombre: Cadena de caracteres
numeroCamiseta: número entero
stats: estructura de tipo Estadisticas

Variables globales:
Equipo: Arreglo de tipo Jugador de tamaño 5.

Crea las siguientes funciones:
mostrarEquipo():
Muestra los detalles de cada jugador, así como sus estadísticas.

calcularPuntosTotales(): 
Calcula y regresa el total de puntos anotados por el equipo.

mostrarJugadorMasValioso()
Muestra el jugador más valioso del equipo. Cada punto anotado suma 1 punto a su calificación y cada asistencia suma 0.5 puntos. El jugador con más puntos es el jugador más valioso 

mostrarJugadorMenosValioso()
Muestra el jugador menos valioso del equipo. Cada punto anotado suma 1 punto a su calificación y cada asistencia suma 0.5 puntos. El jugador con menos puntos es el jugador menos valioso

promedioPuntosAnotados()
Calcula y regresa el promedio de puntos anotados por jugador.

promedioAsistencias()
Calcula y regresa el promedio de las asistencias por jugador.