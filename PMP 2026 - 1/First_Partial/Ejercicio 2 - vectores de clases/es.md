Guía de Ejercicios: Vectores de Objetos y Modularidad
La librería "Punto y Coma" necesita automatizar sus reportes. Utilizarás el proyecto de la Clase Libro y añadirás un módulo de funciones globales.
Crear los archivos de funciones.hpp y funciones.cpp donde se declararán e implementarán los siguientes ejercicios:
Ejercicio 1: Reporte de Inventario
En el archivo funciones.cpp, implementa la función calcularValorTotal.
Recibe como parámetro vector<Libro> .
Recorrer el vector y sumar el resultado de getPrecioFinal() de cada objeto.
Regresa un float con el total calculado.
Ejercicio 2: Buscador de Autores
Implementa la función mostrarLibrosDeAutor.
Recibe como parámetros vector<Libro> y un string con el nombre del autor a buscar.
Recorrer la copia del vector. Si el autor del libro coincide con el nombre recibido, llamar al método mostrarDetalles() de ese objeto.
No regresa nada.
Ejercicio 3: Ajuste de Precios (Copia y Retorno)
Implementa ajustarPreciosPorInflacion.
Recibe un vector<Libro> y un float con el porcentaje de aumento.
Modificar el precioBase de cada libro en la copia recibida usando setPrecioBase.
nuevoPrecio = precioActual * (1 + porcentaje/100).
Regresa el vector<Libro> ya modificado para poder actualizar el vector original en el main.