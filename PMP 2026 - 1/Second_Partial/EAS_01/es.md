# Ejercicio de Apuntadores

Usa tu conocimiento de apuntadores para cumplir con los siguientes requisitos:

**Nombre del archivo:** `P2_EAS01_Nombre_NoLista.cpp`

## Funciones

Declara e implementa las siguientes funciones, usa 2 notaciones diferentes para trabajar con los valores del arreglo:

### `capturarPrecios`
- Recibe un apuntador a un arreglo de tipo `float` y un entero indicando el tamaño del arreglo.
- No regresa nada.
- Debe pedir y guardar cada precio ingresado por el usuario.
- Si el apuntador es nulo, la función debe terminar inmediatamente.

### `mostrarPrecios`
- Recibe un apuntador a un arreglo de tipo `float` y un entero indicando el tamaño del arreglo.
- No regresa nada.
- Debe mostrar el listado de precios. Se debe mostrar `$` antes de cada precio.
- Si el apuntador es nulo, la función debe terminar inmediatamente.

### `calcularPromedio`
- Recibe un apuntador a un arreglo de tipo `float` y un entero indicando el tamaño del arreglo.
- Regresa el promedio de los precios.
- Si el apuntador es nulo, la función debe terminar inmediatamente y regresar 0.

## Main

Deberás realizar lo siguiente usando estrictamente el uso de apuntadores:

1. Pregunta al usuario cuántos precios desea registrar y guárdalos en una variable de tipo entero.
2. Declara un apuntador de tipo `float` que sea nulo.
3. Asigna al apuntador un nuevo arreglo de tipo `float` del tamaño indicado por el usuario.
4. Captura los precios mandando llamar la función `capturarPrecios`.
5. Muestra los precios mandando llamar la función `mostrarPrecios`.
6. Muestra el promedio de los precios mandando llamar la función `calcularPromedio`.
7. Haz un `delete[]` para eliminar el apuntador de arreglo.
8. Asigna el apuntador de nuevo a nulo.

## Preguntas de teoría

Agrega un comentario multilínea al final de tu archivo con la respuesta a las siguientes preguntas:

1. ¿Qué almacena exactamente una variable de tipo apuntador a un `float`?
2. ¿Cómo se le llama a la acción de obtener el valor que está guardado en una dirección de memoria? (`*ptr`)
3. Si el programa termina y olvidaste escribir la línea `delete[] ptr` ¿Qué sucede con esa memoria RAM que solicitaste?
4. ¿Qué significa que un apuntador tenga el valor `nullptr`?
5. Si quisieras obtener la dirección de memoria de una variable común (`int x`, por ejemplo) para guardarla en un apuntador, ¿qué operador tendrías que usar (`*` o `&`)?
6. ¿Cuál es la diferencia entre `arreglo[i]` y `*(arreglo + i)`?