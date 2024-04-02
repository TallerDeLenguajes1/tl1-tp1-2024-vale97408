# Taller De Lenguajes
## Trabajo Práctico Nro 1

### _Desarrollo_ 

#### 2a- **Investigar el archivo .gitignore ¿Por qué es conveniente incluirlo? ¿Cuándo se debe hacer?¿Cómo configuraría el archivo .gitignore?**

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


