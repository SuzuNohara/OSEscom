<style>
    .center{
        text-align: center;
        font-style: italic;
    }
    .enfasis{
        border-width: 2px;
        border-style: solid;
        border-color: #aaa;
        background-color: #aaa;
        padding: 5px;
        border-radius: 5px;
        padding-left: 20px;
        padding-right: 20px;
        margin: 10px;
        color: #333;
    }
</style>

# Sistemas operativos

### Evaluacion:
- Practicas 50% (equipos de 4 personas)
- Examen 30%
- Tareas 20%
- Exposiciones (redondeo extra)

> Laboratorio de sistemas 1 (edificio 2) dias martes

---

## Aspectos basicos del sistema operativo

El sistema operativo es:
- El programa fundamental de la comptuadora que controla todos los recursos
- La base sobre la cual pueden escribirsee y ejecutarse progrmas de aplicacion
- Es un administrador de recursos
Su obejtivo es:
- Manejar eficientemente lso recursos de la comptuadora
- Facilitar el uso del sistema

Esta constituido por:
- Sistema gestor de procesos

Los principales recursos a administrar son:
- Memoria fisica: Almacenamiento
- Memoria: RAM
- Memoria virtual: Memoria 
- Unidad de procesamiento (Procesador): las instrucciones que se ejecutan dependiendo de la arquitectura del procesador.
- Tarjeta de red
- Gestor de perifericos de entrada y salida

Estos recursos deben ser administrados de manera eficiente y sensilla.

### Tareas y objetivos de un sistema operativo:
- De manera interna es un gestor de los recursos del sistema
- Administra los tiempor en que los procesos usan los recursos
- Resuelve los conflictos de demandas de recursos
- Optimiza el rendimiento del sistema
- Proporciona la facilidad a los procesos de acceder a los recursoso del sistema computacional
- Actual como la interfaz entre el rusuario y el hardware
- De manera externa es la parte visual al usuario.

### Evolucion de los sistemas operativos

La evolucion de los sistemas operativos va de la mano del desarrollo de nueva tecnologia y de los cambios del hardware, ya que es necesario que estos se adapten a los nuevos componentes de hardware.

Primera generacion de tubos al vacio y tableros de comunicacion (1945 - 1955)
- ibm mark 1
- Howard Aiken en Harvard (Mark 2 y 3)
- Presper Eckert y Eilliam Mauchly en la universidad de pensylvania (ENICAC Y UNICAV)
- Konrad Zuse en Alemania (Z1 - Z12)

La primera generacion de computadoras estban basadas en el uso de bulbos (se requeria mucho espacio)

La segunda generacion estaban basadas en transistores, estas se programaban en fortran y ensamblador, estas estaban basadas en tarjetas perforadas y en esta generacion se creo el primer sistema operativo de la historia en 1956 para un ordenador IBM704

Para esta generacion se genero el sistema por lotes apra IBM 1401 y 7094
Se comenzo el sistema de uso de cintas magneticas

Para la tercera generacion se comenzo con el uso de los circuitos integrados, esto permitio la multiprogramacion, el tiempo compartido.

En esta generacion se hizo la creacion de sistemas operativos, Ken Thompson escribe unix para una PDP-7

Cuarta gacion de computadoras
Se caracterizo por el uso de microprocesadores
En 1980 IBM creo la PC
IBM pride permiso a Bill Gates para usar su interprete e BASIC

Se inventa la GUI
Se crea la Apple Macintosh
Evolucionan las generciones de windows

---

## Multiprogramacion y tiempo compartido

Cada uno de los procesos o trabajos que entran al procesador se forman de manera secuencial y se procesan conforme llegan, en el caso del tiempo compartido estos procesos se mesclan dependiendo de a que usuario le esten dando atencion.

Procesamiento por lotes
El procesamiento pro lotes funciona mediante una fila de procesos de entrada, los cuales seran utilizados por el procesasor, este proceso es sumamente lento, por lo tanto el procesador mantenia tiempos de ocio bastante larglos, cosa que dio origen a la tecnica del spooling, la cual permitia el uso del disco duro para poder guardar algunso de los procesos de entrada, permitiendo velocidades de lectura mucho mallores.

Procesamiento mutiprogramado
Para este tipo de sistema se empleaba la memoria ram, la cual tiene una velocidad de lectura aun mayor, permitiendo asi reducir los tiempos de ocio del procesador, esto se logra segmentando la memoria entre multiples trabajos, apra mantenerlos dentro del modulo de memoria, permitiendo pasar estos trabajso a la cpu y guardando los mas pesados, grandes o que exceden el tamano de la ram dentro del disco.

Este tipo de procesamiento se encarga de seleccionar los trabajos que haran uso del cpu, permitiendo a las instrucciones ocuparlo, mientras que las que aun no lo hacen, no ocupen este espacio.

Para los sistemas de tiempo compartido el tiempo de ejecucion dedicado a cada usuario y/o proceso esta definido, de tal forma que los procesos no acaparan el procesador. 

---

## Tipos de sistemas operativos

- Sistemas operativos por lotes
- Sistemas multiprogramados
- Sistemas de tiempo compartido
- Sistemas de computadora personal: Son sistemas operativos con menores capacidades que se encargan solo del manejo de equipos de computo minimos y que solo necesitan una gestion de recursos basica.
- Sistemas paralelos: Esta disenado para sincronizar multiples procesadores y ciclos de reloj para poder atender los procesos al mismo tiempo.
- Sistemas distribuidos
- Sistemas de tiempo real

Los aspectos importantes de los sitemas operativos se tiempo compartido son:
- Concurrencia: multiples trabajos llegan a la computadora al mismo tiempo, pero estos nos se atienden al mismo tiempo (secuencial)
- Memoria virtual
- Sistema de archivos

En cuanto a los sistemas operativos paralelos es importante que el desarrollo de aplicaciones sea enfocado al computo paralelo, esto se logra mediante la utilziacion de tecnicas de programacion capaces de explotar el computo paralelo, esto se realiza meidante la utilizacion de hilos, los cuales permiten la ejecucion paralela de procesos, estos procesos deben ser una division del problema principal, lo cual es llamado granularidad, la cual puede ser fina o gruesa dependiendo de la cantidad de procesos en los cuales este se divide.

Sistemas operativos genericos
Son utilizados para procesamietno de trabajos no especializados y para el control de hardware basico en computadoras

Sistemas operativos especializados:
Estos son utilizados para procesamiento de trabajos orientados a propositos especializados como el control de hardware especifico para maximizar el uso de la computadora.

El objetivo de los sistemas distribuidos es similar al de los sistemas paralelos (elmultiprocesamiento), sin embargo, esto lo logran de distinta manera, por parte de los sistemas paralelos lo hacen mediante multiples procesadores que comparten buses y memoria, los sistemas distribuidos realizan lo msimo pero con multiples computadoras que tienen su propia memoria, buses y procesadores, de esta forma es posible dividir los probelmas entre todas las computadoras que son parte de la red.
En este caso el sistema operativo se encuentra distribuido entre todos los mimbros de la red del sistema.
Haciendo una comparativa entre los sistemas distribuidos y los sistemas paralelos es el tiempo en el cual estos resuelven los mismos problemas, esto es debido a que los tiempos de comunicacion de red es mallor al tiempo que le toma a un sistema paralelo utilizar sus buses de comunicacion.

El tiempo real es la respuesta automatica a un proceso o procedimiento en el mismo momento en el que este se genera.

Un sistema de tiempo real es un sistema minimo que se encartga de la ejecucion de procesos en lapsos de tiempo minimos o definidos, ademas de la sinctronizacion de procesos, estos se dividen en los de tiempo duro, los cuales tienen tiempos mas pequenos y no pueden sobrepasarse de los limites definidos que estos tienen y por otro lado se tienen los blandos, los cuales tienen tiempos de ejecucion mas largos. Estos tiempos de procesamiento cortos para ambos tipos son necesarios para que los procesos puedan ser atendidos de forma eficiente y estos puedan sincronizarse entre si y trabajar juntos.

---

## Nucleo del sistema operativo

El nucleo (kernel) de un sistema operativo es el componente prncipal del sistema
COntiene a los 5 administradores del sistema operativo:
- Procesos
- Memoria
- Entrada/Salida (e/s)
- Archivos
- Red

### Arquitectura de nucleo monolitico
En un solo programa se encuentran contenidos los 4 o 5 administradores que lo integran. En este tipo de programa no se encuentran modulos de codigo que administren cada uno de los procesos, sino que todo el programa administra cada cosa.

- El gran embrollo: Dar mantenimiento a este tipo de sistema operativo es un porblema y es insostenible.
- No hay una estructura bien definida de sus componentes
- No hay ocultamiento de informacion ya que cualquier procedimiento puede acceder a cualquier otro.

### Modelo de capas de sistema operativo
THE creado por Technische Hogeschool Eindhoven por E. W Dijkstra es un sistema operativo que posee una capa de codigo para cada funcion del mismo

| Capa        | Funcion
| ------------- |:-------------:
| 5 | Operador
| 4 | Progrmaa de usuario
| 3 | Administrador de entrada y salida
| 2 | Comunicacion operador - proceso
| 1 | Administracion de memoria y tambor
| 0 | Reparto del procesador y multiprogramacion

La direfencia es que en lugar de ser capas eran anillos concentricos

---

## Capas de un sistema operativo

Capa 4 [aplicaciones]
> Esta capa se encarga de alojar las aplicaciones del usuario

> Interfaz de comandos: Esta interfaz esta orientada a los usuarios que no programan ni desarrollan aplicaciones sino que quieren simplemente usar el sistema sin la necesidad de utilizar instrucicones de programacion, el sistema operativo proveera comando que permitan manipular las opciones y funciones del sistema operativo.

Capa 3 [Servicios]

> Estas capas se comunican mediante la interfaz de llamadas al sistema
Es una funcion proporcionada por el sistema operativo para que una aplicacion desarrollada en cualquier lenguaje de programacion que pueda hacer llamadas al sistema pueda comunicarse a travez de estas funciones y hacer llamadas al sistema.

> Las llamdas al sistema son funciones nativas de cada sistema operativo que son accesibles con las librerias adecuadas dentro de cada sistema operativo.

> Las llamadas al sistema tambien pueden comunicarse entre la capa de aplicaciones y el kernel.

Capa 2 [Kernel o nucleo]

> Estas capas se comunican mediante una interfaz de interrupciones, las cuales mediante los id de procesos que le pertenecen a cada elemento de hardware, permiten mandar acciones, mensajes e intercambiar datos con el kernel logico.
C permite el manejo de la interfaz de interrupciones

Capa 1 [Hardware]

---

## Micronuclceo
Fue desarrollado dentro de los sistemas operativos distribuidos, permitiendole estar entre multiples computadoras se crea la opcion de un micronucleo, esto se hace extrayendo las funciones no criticas de un sistema operativo y se dejan solo las funciones minimas necesarias. Una vez extraidas se crea una serie de servidores que son repartidos en distintas computadoras y mantienen las funciones de un grupo de administradores dentro de esas computadoras, manteniendo de esta forma la comunicaicon y coordinacion entre estos sistemas.

- Consiste ensubir el codigo a capas superiroes y quitar lo que mas se pueda del modo kernel dejando un microkernel minimo.
- cuando un usuario (cliente) solicita un servicio (servidor) lo unico que hace el kernel es manejar la comunicacion entre estas dos intancias
- Si llegara a falla un servidor solo ese servirod falla y no todo el sistema.

> Asi funciona docker y kubernetes

![](https://lh3.googleusercontent.com/u/0/drive-viewer/AITFw-xINQ0Ag54okWFHyqmANA8QsOM4ljphrSmT_yYEKlqBZolHqcuPtvt0jkXZoSNAj08ywjSRFgex_2MWU993EyyNumizZw=w1320-h664)

---

## Maquina virtual
Es un tipo de sistema operativo que permite mantener un sistema operativo dentro de otro, permitiendo mantener las funciones del mismo. Siempre existira un sistema operativo nativo, el cual 

- Las primeras versiones del OS/360 era estrictamente por ltoes
- Se escribieron sistemas de tiempo compartido para esas maquinas como el sistema IBM fue TSS/360
- En IBM se crea el CP/CMS (Control Program/Conversational Monitos System) que mas adelante se convierte el VM/370

## Modos de operacion de un sistema operativo. Interrupciones

Una interrupcion es la forma de comunicacoin a bajo nivel entre el sistema operativo y el hardware de la computadora
- Se le considera una forma directa de comunicacion del sistema operaativo
- Las interrupciones pueden ser:
- - De software
- - De hardware
- Los elementos generales de una interrupcion son:
- - Un numero de identificacion
- - Rutina de atencion

### Interrupcion a nivel hardware
Cuanod una aplicacion realiza alguna operacin que necesita ocuapr algun elemento de hardware, la aplicacion enviara mediante el cpu una interrupcion al elemento de hardware, posteriormente el elemento de hardware envia su numero de interrupcion al controlador de interrupciones (este genera el numoer y determina la memoria y el proceso de la interrupcion) para que este pueda acceder a la interrupcion designada, el cpu salta a la direccion de memoria designada para poder atender la interrupciondesignada, esto lo hace guardando el contexto del programa

### Modos de operacion de un sistema operativo. Usuario y Kernel

Existen dos modos de operacion en un sistema operativo internamente funciona:
- Modo Usuario. Es un modo restrictivo en el que las aplicaciones ejecutandose en el sistema oeprativo solo se les permite acceder limitadamente a los recursoso de la computadora.
- Modo Kernel. Es un modo ilimitadoden el que las aplicaciones del sistema operativo se les permite acceder limitadamente a los recursos de la computadora

Los procesadores tienen modos de operacion que pueden permitir a los programas funcionar en modo kernel

![](https://lh3.googleusercontent.com/fife/AKsag4Nhv2Kh9xPV7AmZvrE2c3WqRWANAuo_MqB1r57mGEmENMG_jMmTPz98fouMbD4pWeO4SRoDywSsFpcxZmBvWzR2L5tiDfCBvTlYiKOemc1o3-3QCfLQO73aLYpwX67jkcHsFJ1PkiknUFVzV6qFxaPM5Ojuhu05P1_NdbySOKAUFqQ_ZKQGSq03ZdgG4yGFifdses-F8zQuegHsViLGG_SCApmeZ04HshuejHJh35A1qhILKiYjoBZp4jzMukbs0D2aLvLsJpbi4KuDqb6x41KfhUTG68oyqq4VkZFvr7Z9QGPYlbIHS6vpYKOclId4RqdWBqicl8eRaavv74I86jPrhl-Wl_rmPm7nas9gNlEgM4zac-XBLFANXtaCEfx9N-AaEyhtOz-HNTxxHq-OvbKpAZ2fI3bcYTTgjxpp0Ydylha0fdn0EXYkC3LzI7S4OEYirfi5uLMXVUS937qdJmH8LEuGN5mLouvShea0jUjQhuV1oPYtCc_fHNy3lOYJekoPsgUuVRm5tcPPfr4JRURm9eabN56JD4GKZA6vw-KTNXgfl2xaX8EmyOhGGvPZf8axLDQ-FPuplTQmGQGYvh4XJ2BlVDueE8ii1YCHXR9RsiN9aLXQ9BssrCvLlmRMJc6ySIqmYA7x7UoKKeSl2YmZzwLpgZ33xYAdZrzjLPFqYD_CBxfMA2HOjOOTUSG0HTlGJ4PfprEY5i09VRAyep5xXNxhC2OdLDE5skSuJHUJYloP2BMxN3EBYh6eLUwABX4V9UfK1EHoN88XZ4e5LmagV8AD0IOBfnHCwZ0bdffgZOaEuWdHQ1lOgii7tgmmMwCcNHB5xataUTGQqcJW5LpMEo9PrJAt9jSjQbKSyQQp-_iO2KbkQSRUEE-hCQwDCpKF2cuuNpegp32POrXAvaG2I3jWSTObt7bKOA-6KBchnCN0HNtaSi4pt6crHcYvo8gUh13wMLP8J2NhOFeQWr7b6lV2f5AVb6jBmCXSYYo8iFGHalNIugIZA0y6aFwSWTd6BXEpPdlMWK5fsUBZECjO1Hyhb7olZuRt8jEK40-8Qr6TrCcY6qqMIItsZyamMPGJA5CxJQEYcaJKTyhes2bTyogREOBKcVlrG3jj46nGI2YLADSTa09vHex2O6O6DWEti2qLZ55dc7wCKVa6KbtJpGP-VLC6BQNob8dtYO8HdUneTntXcq490VAkmURzVh6j0hJ-vwwh9hLG8ORuRDz1bpijKoBgnrqjMVct_ovlH8dTZtSQpswhH3B3NIozgfmxRPVGLVix6poRdu4CcCIBKhs0uWAUl5y0tvLBnO1yUjitLjco7QKvY7jcEn3OBkaDexkiigDzCniLN8qIE-1YDnknqE-T6hyWDC3SwTb7chfJieaJH1AlfCV9mXFVqiDQVyFgYiq7UUFqAIZ_x1Cc74KH5gGCPAMNsojbgBSvMHnDmtuT5kwY7mjA79mAOah_xpXLjQYhauLzP2hZPBksb6wDHo8sDc_qNk-Xq1vDbHXc6Ip3EPuabrz_T6XjeR3kLgAebpH0pb9Za5aZyibyTHbpf8-z11jhwpO5wyIImETScyQRNr2TLePGw0kQtBhwqKpickxHbRqhCs4kl012BywEgAI=w811-h648)

## Llamadas al sistema

Una llamada al sistema es la forma de comunicacion a nivel intermedio entre el sistema operativo y el hardware de lacomputadora.
- Se le considera de una forma indirecta de comunicacion en el sistema oeprativo.
- Se implementan mediante un conjunto de funciones de biblioteca (API del sistema operativo) para algun lenguaje de programacion de alto nivel.
- Existen llamadas al sistema partucylares para cada administrador del sistema operativo.

| Llamada | Descripcion |
| --- | --- |
| `pid = fork()` | Crea un proceso hijo, identico al padre |
|` pid = waitpid(pid & statloc, opciones)` | Espera a que un hijo termine |
| `s = execve(nombre, argc, entornp)` | Reemplaza la imagen del nucleo de un proceso |
| `exit(estado)` | Termina la ejecucion de un proceso y devuelve el estado |

### Senales
Son ordenes directas que se generan para el sistema operativo.
| Senal | Causa |
| --- | --- |
| SIGABRT | Se envia para abortar un proceso y forzar un vaciado del nucleo |
| SIGALRM | Se activo el reloj de alarma|
| SIGFPE | Ocurrio un error de un to flotante (por ejemplo, division entre 0) |
| SIGHUP | La linea telefonica que utilizaba el proceso se colgo |
| SIGILL | El usuario oprimio SUPR para interrumpir el proceso|
| SIGQUIT | El usuario oprimio la tecla que solicita un vaciado de nucleo|
| SIGKILL | Se envio para eliminar un proceso |
| SIGPIPE ||
| SIGSEGV ||
| SIGTERM ||
| SIGUSR1 ||
| SIGUSR2 ||

### Directorios y archivos

### Proteccion

- CHMOD
- CHOWN

## Ejecucion de programas

|Segmento de codigo|
|-|
|Segmento de datos|
|Segmento de pila|

Este es el codigo ejecutable que genera el compilador, el cual sera ejecutado dentro del sistema operativo. Todo esto se envia directamente al procesador, el cual mediante la arquitectura de von newman procesa todas estasn instrucciones

| Pastes del procesador | Objetivo|
|-|-|
|Unidad de control| Se asegura que la ejecucion de las instrucciones de ejecuten de una manera correcta |
|Unidad areitmetico-logica|Unidad encargada de ejecucion de instrucciones de tipo matematico, aritmetico-logicas|
| Memoria cache | Acceso rapido a datos e instrucciones para mejroar el rendimiento |
| registros internos | Son buffers de alta velocidad que podran almacenar la informacion requerida para el procesamiento de las instrucciones, hay dos tipos: Proposito general y proposito especifico, en el caso de los generales se puede almacenar cualquier tipos de informacion, esta informacion tiene dos posibilidades, puede gardar datos directamente o apuntadores a la informacion, para el caso de los especificos se caracterizan porque la informacion guardada en ellos es informaicon concreta y esta pensada para almacenarse exactamente en ese dispositivo. |
| pc | es un registro de proposito especifico, es un grupo de instrucciones definidas del procesador |

## Pipeline

Es el proceso secuencial de la ejecucion de las instrucciones.

### IF ()
### ID ()
Etapa de decodificacion
Instrucciones logicas
Instrucciones aritmeticas
Instruccinoes de control
### EX (Ejecucion)
Se inicia el componente que realiza las operacines correspondientes.
### MEM (Acceso a memoria)

