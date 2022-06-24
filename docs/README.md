![UCN](images/60x60-ucn-negro.png)


# Informe Técnico 
## Curso: Estructura de datos
### Detección e identificación de personas en secuencias de imágenes o video

**Alumnos:**

* Claudia Collinao Rojas (Coordinadora)
* Nicolás Vega Vega (Programador)

## Resumen 

> Agregar un resumen que describa el trabajo realizado y sus resultados. (Entre 150 y 180 palabras)
> Más cosas...
> El resumen indicarlo como cita con el comando `>`
> Este trabajo tiene como finalidad desarrollar e implementar un sistema de conteo e identificación de personas; para lograr nuestro objetivo tuvimos que desarrollar un programa en lenguaje C++, usando la librería OpenCV. En primera instancia, utilizamos listas enlazadas para detectar y marcar la zona ocupada por la persona que entra o sale del recinto, creando una clase llamada "Detector" la cual implementa la detección de la persona y dibuja un rectángulo alrededor de ella para su posterior identificación; luego definimos la acción de entrar y salir al lugar e implementamos un contador para poder contar las personas que entran y salen en un determinado tiempo del lugar y la cantidad de veces que lo hacen.  

## 1. Introducción
Actualmente es muy común la búsqueda de tecnología en sistemas para controlar la cantidad de persona que visita espacios cerrados, ya sea con un sistema de vigilancia, análisis de flujos de movimientos de personas, control de acceso o de aforo, etc.

La primera función de un reporte técnico es plasmar la información necesaria para que otras personas puedan reproducir el sistema propuesto o puedan entender su fucnionamiento . Para cumplir anterior se debe diferenciar claramente entre los artefactos de diseño e implementación. En el caso de un desarrollo tecnológico los algoritmos son importantes como componente de diseño y los programas generalmente son irrelevantes y deben resumidos o agregados en anexos en el documento. Los programas no son importantes en el documento, salvo si se quiere explicar conceptos expecíficos del lenguaje o del algoritmo implementado.

La redacción debe ser formal y de modo impersonal. No se debe utlizar primera persona del singular o plural. Se debe evitar el uso de cualquier calificativo sustituyéndolo siempre utilizando datos concretos y rastreables en documentos o publicaciones a través de referencias bibliográficas. Por ejemplo, no calificar algo como: "muy importante", "sustancial", "muy usadoo" o "mucho mejor".

Las comparaciones deben concretarse con hechos y datos, sin frases ambiguas o términos generales. Por ejemplo, nunca se debe redactar frases como "el método es mejor que el método B". Lo correcto es decir, el error promedio de el método A es de 5 %, correspondiendo a la mitad del error de 10% obtenido utilizando el método B". El tiempo verbal es usualmente presente. No se debe perder de vista que se está explicando ”como hacer algo”, en vez de ”qué se hizo”. Todo aspecto circunstancial es irrelevante para el documento. Por ejemplo, si se ha desarrollado en el laboratorio X, o en el curso Y, con el profesor Z, etc.

### 1.1 Descripción del problema

Dado el laboratorio describir como se entiende el problema bajo sus propias palabras.

### 1.2 Objetivos 

**Objetivo General**

Desarrollar un sistema de conteo e identificación de personas mediante algoritmos analíticos de imagenes de video.

**Objetivos específicos**

1. Implementar la detección de personas que pasan por la imagen de video.
2. Establecer zona de salida y zona de entrada al control.
3. Contar e identificar las personas que entran y salen del control.
4. Calcular la velocidad de entrada y salida de personas.



### 1.3 Solución propuesta

Esbozo de la solución propuesta, se espera que esta vaya evolucionando a medida que se avanza en el proyecto.

## 2. Materiales y métodos

IDE Visual Studio Code
Librerías para procesamiento de imágenes en C++, OpenCV

Explicar brevemente como se espera desarrollar el trabajo de implementación.

### 2.1 Instalación


Describir brevemente las librerías utilizadas para la instalación y programas utilizados para la ejecución del código. (Agregar una sección de anexo para describir como fueron instaladas las librerías de OpenCV y la IDE utilzada para el trabajo)

### 2.2 Diseño 

Explicar los componentes (módulos o clases) utilizados para resolver el problema. Indicar arquitectura propuesta, diagrama de clases u otro artefacto que estime conveniente para explicar el diseño de su implimentación.

### 2.3 Implementación

Explicar brevemente algunos aspectos de implementación: Por ejemplo, detector de caras utilizado. Se pueden realizar pequeñas reseñas al código para indicar elementos importantes en el trabajo.

Por ejemplo, 

#### Detector de caras

El detector de caras utilizado fue xxx. Para utilizarlo se debe.... El código para detectar una cara en una imagen se muestra a continuación:

```c++
 1. faceCascadePath = "./haarcascade_frontalface_default.xml";
 2. faceCascade.load( faceCascadePath )
 3. std::vector<Rect> faces;
 4. faceCascade.detectMultiScale(frameGray, faces);

 5. for ( size_t i = 0; i < faces.size(); i++ )
 6. {
 7.  int x1 = faces[i].x;
 8.  int y1 = faces[i].y;
 9.  int x2 = faces[i].x + faces[i].width;
10.  int y2 = faces[i].y + faces[i].height;
11. }
```
La primera linea carga el archivo de entrenamiento... etc

## 3. Resultados obtenidos

## 4. Conclusiones

# Anexos

## Anexo A: Instalación librerías OpenCV

## Anexo B: Instalación de IDE y configuración librerías OpenCV

# Referecia

Indicar los libros, páginas web, documentos, etc. Utilizados en el trabajo. Por ejemplo:

1. MONTERO, J.,Metodos matemáticos aplicados a la ganadería.3aed. Sevilla: Ediciones de la pradera,2007.
2. LVARADO,   J.   P.,¿Qué   debe   contener   un   artículo   científico?.http://www.ie.tec.ac.cr/palvarado/pmwiki/index.php/MSc/Art\%c3\%adculoCient\%c3\%adfico. Fe-cha de acceso:13/Nov/2018


