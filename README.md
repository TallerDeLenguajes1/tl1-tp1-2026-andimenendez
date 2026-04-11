## punto 2 -Archivo .gitignore

### a) Investigacin

- El archivo.gitignore se utiliza para indicarle a Git qu archivos o carpetas no deben subirse al repositorio.
- Es conveniente incluirlo para evitar compartir archivos innecesarios, como temporales, configuraciones locales, archivos compilados, etc.
- Se debe crear al inicio del proyecto o cuando se detecta que hay archivos que no deberan estar versionados.
- Para configurarlo, se agregan los nombres o patrones de archivos a ignorar.
  Ejemplo:ignorado.txt para que Git ignore ese archivo.


# TP1 - TALLER 1


## Punto 2 - debugging
### a) codigo misterioso

El archivo codigo_misterioso.c contiene funciones con nimbres poco descriptivos. Mediante el uso del depurador, se determino la logica de cada funcion

- funcionamiento general:

    El programa toma un número entero y le aplica tres transformaciones consecutivas:

    1. Invierte sus dígitos

    2. Divide el resultado por 2

    3. Suma los dígitos del número obtenido al valor actual

- analisis de funciones: 

    - f_alpha:  nvierte los dígitos del número 
        Ejemplo: 452 → 254
    - f_beta: Divide el número por 2 
        Ejemplo: 254 → 127
    - f_gamma: Suma los dígitos del número y se los agrega 
        Ejemplo: 127 → 127 + (1+2+7) = 137

- Ejecución paso a paso

    Valor inicial: 452
    Proceso: 452 → 254 → 127 → 137
    Resultado final: 137

- renombramiento de funciones:
    - f_alpha → invertirNumero
    - f_beta → dividirPorDos
    - f_gamma → sumarDigitos
    - procesar_enigma → procesarNumero
### b) codigo sin funcionar
- Errores encontrados
    1. Error de sintaxis – uso incorrecto de scanf
        scanf("%d", valor1);

        Problema: falta el operador & (dirección de memoria)

        ✔ Solución: scanf("%d", &valor1);
    2. Falta de inclusión de librería estándar
        Problema: no se incluía <stdio.h>

        ✔ Solución: #include <stdio.h>
    3. Error lógico – paso por valor
        void duplicar_numero(int numero)
        Problema: la función recibe una copia del valor

    4. Error en la llamada a la función
        duplicar_numero(valor1);
        Problema: se sigue pasando por valor

        ✔ Solución aplicada

        Se utilizó paso por referencia mediante punteros:

        void duplicar_numero(int *numero) {
        *numero = *numero * 2;
        }

        Y la llamada correcta:

        duplicar_numero(&valor1);

