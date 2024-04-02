# Taller De Lenguajes
## Trabajo Práctico Nro 1

###                            *_Desarrollo_* 

### _2a- **Investigar el archivo .gitignore ¿Por qué es conveniente incluirlo? ¿Cuándo se debe hacer?¿Cómo configuraría el archivo .gitignore?_

#### El archivo .gitignore es un archivo de texto que le dice a Git qué archivos o carpetas ignorar en un proyecto.
#### Es conveniente incluirlo ya que ayuda a evitar la inclusión de archivos innecesarios y que puedan causar conflictos en nuestro proyecto, manteniendo nuestro repositorio enfocado en los archivos importantes. 
#### Se debe incluir el archivo preferentemente desde el comienzo de nuestro proyecto para evitar los archivos no deseados en nuestro repositorio desde un inicio.
#### El archivo .gitignore lo configuramos primeramente creándolo en la raíz de nuestro repositorio. Para que cumpla su función debemos escribir en lineas separadas de este archivo los patrones de archivos que se desean ignorar, cada nueva línea incluye un archivo o carpeta adicional que quieras que Git lo ignore.
#### Las entradas de este archivo también pueden seguir un patrón coincidente:

#### - * se utiliza como una coincidencia comodín.
#### - / se usa para ignorar las rutas relativas al archivo  gitignore.
#### - # es usado para agregar comentarios
#### Este es un ejemplo de cómo puede lucir el archivo .gitignore :
#### Ignora archivos del sistema Mac: .DS_store 
#### Ignora la carpeta node_modules: node_modules 
#### Ignora todos los archivos de texto: *.txt
#### Ignora los archivos relacionados a API keys: .env

#### Para realizar un uso mas adecuado del .gitignore en C ,por ejemplo,me guiaría de la página: https://www.toptal.com/developers/gitignore/api/c


### _3c- Revise los archivos subidos en su repositorio de github. ¿Qué archivos vé?¿Cuál cree que no hace falta que esté?_

#### En mi repositorio de github veo los archivos .gitignore, ignorado.txt, README.md, tp1_1.cpp y tp1_1.exe. 
#### El archivo que no hace falta en nuestro repositorio es el ejecutable .exe de mi archivo creado .cpp.

### _g- Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué? Responder en el archivo readme.md_

#### El resultado de los apartados 2 y 3 es el mismo ya que en una variable de tipo puntero se almacena la dirección de memoria de alguna variable declarada a la que apunta dicho puntero. Entonces, la dirección de memoria almacenada en el puntero sería la dirección de memoria de la variable declarada obtenida con el operador &, por ende , son iguales.  

#### En el punto 4 obtenemos una dirección de memoria distinta a la de los puntos 2 y 3 debido a que obtuvimos la dirección de memoria del puntero mismo. Siendo el puntero una *variable* que contienen una direccion de memoria, este también consta de una dirección de memoria, por ello obtuvimos la dirección de memoria de la variable puntero declarado y  no la dirección de la variable a la que apunta el puntero ( ya obtenida en los puntos 2 y 3).
