# Aproximaciones-PI-Monografia
## Diferentes métodos de aproximar PI
Intetnto simular diferentes métodos de aproximar PI que se han ido desarrollando al largo del tiempo. Muchas se podrían haber heco con una librería visual, pero para augmentar la eficiencia del código, he decidido implementar las bases matemáticas o físicas necesarias.

### Polígonos Regulares
Hay dos programas que dan el mismo resultado, sólo cambia la velocidad y el número de cálculos que ejecuta el programa.
Estos programas simulan el método de Arquímedes para aproximar PI.

<p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/3/34/Liuhui_Pi_Inequality.svg/1024px-Liuhui_Pi_Inequality.svg.png" width="350" alt="Método de Arquímedes">
</p>

Si_Handicap --> Simula todos los polígonos hasta el deseado.

No-Handicap --> Simula sólo el polígono deseado.



### Método de Montecarlo
Lanzando puntos aleatorios a un curculo inscrito en un cuadrado podemos estimar el area de cada forma. Con las areas podemos aislar el radio y obtener esta ecuación:

π=(AreaCirc·4)/(AreaCuad)



### Series de Basilea
Es un método descubierto por el matemático Euler. La ecuación está descrita más abajo.
<p align="center">
  <img src="https://pbs.twimg.com/media/EnHynoZXUAEEj8R.jpg" width="350" alt="Método de Euler">
</p>



### Colisiones 
El numero π aparece en el numero de colisiones de dos masas y una pared en un sistema sin rozamiento ni pérdida de energía. Para una descripción más detallada recominedo la visualización de los videos al respecto de 3Blue1Brown:

https://www.youtube.com/watch?v=jsYwFizhncE&t=679s

## Información Importante y Como Usar los programas
### Información
Los programas son puramente computacionales y no muestran ningún gráfico ni dibujo para entender los métodos pues realentizan el proceso y añaden complejidad inecesaria a dichos programas.
Invito a quien lo desee el favor de usar mi código y manipularlo con fin de que se vea el proceso.


### Instalación
Para ejecutar cualquier simulación se debe descargar solamente el documento ejecutable (XXXXX.exe). Si uno lo desea puede descargar el código fuente y ejecutarlo desde su ordenador, pero no es necesario.

Es recomendable tener en la máquina instaldas las librerías MinGW de C++ para asegurarse de que los programas se ejecutan correctamente.
