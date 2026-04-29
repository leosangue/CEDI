
# EVIDENCIA DE APRENDIZAJE SUMATIVA  
## Parcial 3 — Herencia en C++

---

## 1. Contexto de la actividad

El hospital general **"Salud Total"** cuenta con médicos de distintas especialidades. Cada especialidad tiene una forma diferente de calcular su honorario por consulta:

- Los **cirujanos** cobran una tarifa base más un cargo por el número de cirugías realizadas en el mes.  
- Los **pediatras** ajustan su tarifa según la cantidad de pacientes menores de edad atendidos.

Tu tarea es modelar este sistema en C++ usando **herencia pública**, de modo que el programa pueda registrar:

- Un médico genérico  
- Especialistas (**Cirujano**, **Pediatra**)  

Calculando el honorario de cada uno mediante el método `calcularHonorario()`.

---

## 2. Archivos del proyecto

El proyecto debe organizarse en **7 archivos**. Los dos primeros ya están proporcionados:

| Archivo         | Descripción                                      |
|----------------|--------------------------------------------------|
| Medico.hpp     | Clase base (proporcionada)                      |
| Medico.cpp     | Implementación de la clase base (proporcionada) |
| Cirujano.hpp   | Clase derivada 1 (crear)                        |
| Cirujano.cpp   | Implementación de Cirujano (crear)              |
| Pediatra.hpp   | Clase derivada 2 (crear)                        |
| Pediatra.cpp   | Implementación de Pediatra (crear)              |
| main.cpp       | Programa principal (crear)                      |

**Nombre del proyecto:**  
`nombre_eas1_herencia.cbp`

---

## 3. Clase proporcionada

### Medico (clase base)

Contiene:

- `string nombre` — nombre del médico  
- `string especialidad` — especialidad (ej. "General", "Cirujano")  
- `int aniosExperiencia` — años de experiencia  

Incluye:

- Constructor vacío  
- Constructor completo  
- `virtual int calcularHonorario()` → devuelve `aniosExperiencia * 500`  
- `void mostrar()` → imprime datos y llama a `calcularHonorario()`

---

## 4. Tareas a realizar

### 4.1 Cirujano.hpp / Cirujano.cpp

Clase derivada de `Medico` (**herencia pública**):

- `int cirugiasMes` — número de cirugías en el mes  

Debe incluir:

- Constructor completo con:
  - nombre  
  - especialidad  
  - aniosExperiencia  
  - cirugiasMes  
- Uso de **lista de inicialización** para llamar al constructor de `Medico`

Sobreescribir:

```cpp
virtual int calcularHonorario();
````

Fórmula:

```
honorario = aniosExperiencia * 500 + cirugiasMes * 2000
```

---

### 4.2 Pediatra.hpp / Pediatra.cpp

Clase derivada de `Medico` (**herencia pública**):

* `int pacientesMes` — pacientes atendidos en el mes

Debe incluir:

* Constructor completo con:

  * nombre
  * especialidad
  * aniosExperiencia
  * pacientesMes

Sobreescribir:

```cpp
virtual int calcularHonorario();
```

Fórmula:

```
honorario = aniosExperiencia * 500 + pacientesMes * 300
```

---

### 4.3 main.cpp

Debe:

* Crear:

```cpp
vector<Medico*> personal;
```

* Agregar al menos **3 objetos con `new`**:

  * 1 `Medico`
  * 1 `Cirujano`
  * 1 `Pediatra`

* Usar mezcla de constructores (vacíos y completos)

* Recorrer con `for`:

```cpp
for (...) {
    personal[i]->mostrar();
}
```

* Liberar memoria:

```cpp
delete ...
```

---

## 5. Restricciones

* Herencia **pública obligatoria**
* Cada clase derivada en su propio `.hpp` y `.cpp`
* No usar variables globales para el vector
* Entregar un archivo `.zip` del proyecto (Code::Blocks)

---

## 6. Rúbrica de evaluación

| Criterio                      | Indicador de logro                                      | Valor  |
| ----------------------------- | ------------------------------------------------------- | ------ |
| Herencia pública              | Uso correcto de `: public` en clases derivadas          | 20 pts |
| Clases derivadas (.hpp/.cpp)  | Separación correcta en archivos                         | 20 pts |
| Método virtual sobreescrito   | `calcularHonorario()` correctamente sobrescrito         | 20 pts |
| main.cpp: vector de punteros  | Uso correcto de `vector<Medico*>` y recorrido con `for` | 20 pts |
| Compilación y salida correcta | El programa compila y funciona correctamente            | 20 pts |

---

```



