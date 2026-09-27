cat > README.md <<'EOF'
# Técnicas Algorítmicas — Ejercicios y Proyectos

Repositorio académico que reúne ejercicios, prácticas, códigos y proyectos desarrollados durante la asignatura **Técnicas Algorítmicas**.

El objetivo de este repositorio es documentar de forma organizada el aprendizaje y aplicación de diferentes técnicas utilizadas para diseñar algoritmos, resolver problemas computacionales y analizar distintas estrategias de solución.

Los materiales se encuentran organizados principalmente de acuerdo con los parciales de la asignatura, conservando dentro de cada uno los ejercicios, programas y documentos correspondientes.

---

## Estructura del repositorio

La organización general sigue la estructura académica utilizada durante el curso:

```text
Ejecicios-c-digos-Tecnicas-algoritmicas/
│
├── 1 parcial/
│   ├── ejercicios
│   ├── códigos
│   ├── prácticas
│   └── documentación
│
├── 2 parcial/
│   ├── ejercicios
│   ├── algoritmos
│   ├── proyectos
│   └── documentación
│
├── 3 parcial/
│   ├── ejercicios
│   ├── recursividad
│   ├── proyectos
│   └── documentación
│
├── README.md
└── .gitignore
```

> La estructura específica puede variar según los ejercicios y materiales desarrollados en cada parcial.

---

## Organización por parciales

### Primer parcial

El primer parcial contiene ejercicios relacionados con los fundamentos necesarios para comprender el diseño y funcionamiento de algoritmos.

Estos ejercicios permiten practicar aspectos como:

- Resolución estructurada de problemas.
- Diseño de algoritmos.
- Manejo de variables.
- Estructuras condicionales.
- Ciclos.
- Funciones.
- Manipulación de datos.
- Implementación de soluciones mediante código.

El propósito de esta primera sección es establecer las bases necesarias para posteriormente estudiar técnicas algorítmicas de mayor complejidad.

---

### Segundo parcial

En el segundo parcial se incorporan problemas que requieren analizar diferentes estrategias para recorrer, buscar y procesar información.

Dentro de esta etapa pueden encontrarse ejercicios relacionados con estructuras de datos y algoritmos de búsqueda.

Entre las técnicas importantes estudiadas se encuentran **BFS** y **DFS**.

#### BFS — Breadth-First Search

**Breadth-First Search (BFS)** o búsqueda en anchura es un algoritmo utilizado para recorrer estructuras como grafos y árboles.

Su característica principal consiste en explorar los elementos por niveles.

De manera conceptual:

```text
        A
       / \
      B   C
     / \   \
    D   E   F
```

Un recorrido BFS puede seguir el orden:

```text
A → B → C → D → E → F
```

Primero se visita el nodo inicial y posteriormente los nodos más cercanos antes de continuar hacia niveles más profundos.

Generalmente BFS utiliza una estructura de datos tipo **cola (Queue)** para controlar los elementos pendientes de visitar.

Algunas aplicaciones de BFS incluyen:

- Recorrido de grafos.
- Recorrido de árboles.
- Búsqueda de caminos.
- Exploración por niveles.
- Problemas de conectividad.
- Búsqueda del camino más corto en grafos no ponderados.

---

#### DFS — Depth-First Search

**Depth-First Search (DFS)** o búsqueda en profundidad utiliza una estrategia diferente.

En lugar de recorrer primero todos los elementos de un mismo nivel, DFS avanza lo más profundamente posible por una rama antes de regresar y explorar otras alternativas.

Utilizando el mismo ejemplo:

```text
        A
       / \
      B   C
     / \   \
    D   E   F
```

Un posible recorrido DFS sería:

```text
A → B → D → E → C → F
```

DFS puede implementarse utilizando:

- Recursividad.
- Pilas (Stack).

Entre sus aplicaciones se encuentran:

- Recorrido de grafos.
- Recorrido de árboles.
- Exploración de caminos.
- Detección de componentes.
- Resolución de problemas mediante búsqueda.
- Problemas de backtracking.

---

## Comparación entre BFS y DFS

| Característica | BFS | DFS |
|---|---|---|
| Nombre | Breadth-First Search | Depth-First Search |
| Estrategia | Búsqueda en anchura | Búsqueda en profundidad |
| Recorrido | Por niveles | Por ramas |
| Estructura común | Cola | Pila / Recursividad |
| Prioridad | Nodos cercanos | Profundizar una ruta |
| Aplicación | Caminos y niveles | Exploración y búsqueda profunda |

Ambos algoritmos son fundamentales para comprender técnicas de búsqueda y recorrido dentro de estructuras de datos.

---

## Tercer parcial

El tercer parcial incluye ejercicios de mayor profundidad algorítmica.

Entre los temas trabajados se encuentra la **recursividad**, incluyendo material como:

```text
Introduccion_a_la_recursividad.pdf
```

### Recursividad

La recursividad es una técnica mediante la cual una función puede llamarse a sí misma para resolver versiones más pequeñas de un mismo problema.

Una función recursiva generalmente necesita dos elementos principales:

1. **Caso base:** condición que permite detener las llamadas recursivas.
2. **Caso recursivo:** parte del algoritmo que vuelve a llamar a la función utilizando un problema más pequeño.

Ejemplo conceptual:

```text
problema grande
      ↓
problema más pequeño
      ↓
problema más pequeño
      ↓
caso base
```

Una representación sencilla puede observarse mediante el cálculo factorial:

```text
5!
↓
5 × 4!
    ↓
    4 × 3!
        ↓
        3 × 2!
            ↓
            2 × 1!
                ↓
                1
```

La recursividad es importante en algoritmos relacionados con:

- Árboles.
- Grafos.
- Búsquedas.
- Divide y vencerás.
- Backtracking.
- Problemas matemáticos.
- Procesamiento de estructuras jerárquicas.

---

## Técnicas algorítmicas

A lo largo del repositorio se estudian diferentes conceptos relacionados con el desarrollo y análisis de algoritmos.

Entre ellos:

- Diseño de algoritmos.
- Resolución de problemas.
- Estructuras de control.
- Funciones.
- Recursividad.
- Búsqueda.
- Recorrido de estructuras.
- BFS.
- DFS.
- Manejo de estructuras de datos.
- Análisis de diferentes estrategias de solución.

---

## Importancia de las técnicas algorítmicas

El estudio de técnicas algorítmicas permite comprender que un mismo problema puede tener diferentes soluciones.

El objetivo no consiste únicamente en desarrollar un programa que produzca un resultado correcto, sino también en aprender a seleccionar una estrategia adecuada para resolver el problema.

Esto implica considerar aspectos como:

```text
Problema
   ↓
Análisis
   ↓
Diseño del algoritmo
   ↓
Implementación
   ↓
Pruebas
   ↓
Evaluación de resultados
```

Este proceso constituye una parte fundamental de la formación en programación, ingeniería de software, ciencia de datos e informática.

---

## Objetivos del repositorio

Este repositorio tiene como objetivos:

- Conservar los ejercicios realizados durante la asignatura.
- Organizar los códigos por parcial y proyecto.
- Documentar diferentes técnicas algorítmicas.
- Mostrar la evolución del aprendizaje durante el curso.
- Servir como material de consulta.
- Mantener evidencia de proyectos académicos.
- Formar parte de un portafolio técnico en GitHub.

---

## Ejecución de los programas

Debido a que el repositorio contiene diferentes ejercicios y proyectos, cada programa puede tener requisitos distintos.

Se recomienda ingresar primero a la carpeta correspondiente:

```bash
cd "1 parcial"
```

o:

```bash
cd "2 parcial"
```

o:

```bash
cd "3 parcial"
```

Posteriormente se debe identificar el lenguaje y archivo principal utilizado por cada ejercicio.

---

## Documentación

Además del código fuente, algunas carpetas contienen documentos utilizados durante las actividades académicas.

Estos materiales permiten conservar:

- Explicaciones teóricas.
- Instrucciones de ejercicios.
- Evidencias.
- Reportes.
- Material de apoyo.
- Documentación de algoritmos.

Por ejemplo, dentro del tercer parcial se encuentra material relacionado con la introducción a la recursividad.

---

## Posibles mejoras

El repositorio puede continuar mejorándose mediante:

- README individual para proyectos importantes.
- Diagramas de funcionamiento.
- Pseudocódigo.
- Diagramas de flujo.
- Ejemplos de entrada y salida.
- Explicaciones de complejidad temporal.
- Análisis Big-O.
- Comparaciones entre algoritmos.
- Casos de prueba.
- Organización uniforme de nombres y carpetas.

---

## Aplicación en Ingeniería de Datos

Las técnicas algorítmicas constituyen una base importante para áreas relacionadas con Ingeniería de Datos e Inteligencia Organizacional.

Conceptos como búsqueda, recorridos, estructuras de datos, recursividad y análisis de algoritmos pueden aplicarse posteriormente en áreas como:

- Procesamiento de datos.
- Optimización.
- Inteligencia artificial.
- Machine Learning.
- Análisis de grafos.
- Bases de datos.
- Sistemas distribuidos.
- Procesamiento de grandes volúmenes de información.

---

## Autor

**Luis Barahona**

Proyecto académico desarrollado como parte de la asignatura **Técnicas Algorítmicas**.

Universidad del Caribe.

EOF
