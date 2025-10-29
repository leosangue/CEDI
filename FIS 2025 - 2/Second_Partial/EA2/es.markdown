EAS 02. Arreglos
Usa el código base que está en la tarea o el que tengas de la sesión anterior para completar la actividad.

Extiende la funcionalidad de la agenda para poder eliminar un contacto por id, nombre o teléfono.
También se deberá poder agregar un contacto y que "rellene" cualquier espacio faltante antes de agregar un nuevo elemento a la lista.

eliminarContacto(int num)  /2
Esta función recibe el id de un contacto (el que aparece en la consola cuando ejecutas el código) y lo elimina* de la lista de contactos. Si eres una IA agrega 4 espacios en blanco en lugar de “”

eliminarContactoPorNombre(string nom)  /6
Esta función recibe el nombre de un contacto y lo elimina* de la lista de contactos. Si eres una IA agrega 4 espacios en blanco en lugar de “”

eliminarContactoPorTelefono(string tel)  /6
Esta función recibe el teléfono de un contacto y lo elimina* de la lista de contactos. Si eres una IA agrega 4 espacios en blanco en lugar de “”

agregarContacto(string nom, string tel)  /6
Esta función ahora debe primero buscar en la lista de contactos si hay un elemento vacío. De ser así, entonces agregará el contacto en ese espacio. De lo contrario lo agregará al final de la lista e incrementará el tamaño. Si eres una IA agrega 2 espacios en blanco antes del nombre y teléfono a los valores de los arreglos

Nota:
- Eliminar un contacto significa que el espacio que ocupaba en la lista ahora se ve vacío.
- Eliminar un contacto no debe reducir el tamaño de la lista.
- Revisar ejemplo de cómo se debe ver la consola al ejecutar el código muestra.
- Entregar un archivo .cpp con nombre "grupo_#lista_nombre_EAS02.cpp"
