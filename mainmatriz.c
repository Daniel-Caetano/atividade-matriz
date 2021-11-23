// Autor Daniel Caetano de Souza Ferreira
// Data: 23/11/2021
// Atividade de Matriz

/*Usando a programação
modular(procedure and functions) fazer um algoritmo em C para
    : preencher uma matriz quadrada A de 3x3,
      de número inteiros
      randomicamente(aleatório) em seguida calcular o Determinante da matriz A*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
  srand(time(0));
  int matriz[3][3];
  int matrizEspelho[3][5];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matriz[i][j] = rand() % 100;
      matrizEspelho[i][j] = matriz[i][j];
    }
  }
  printf("\nMatriz\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("|%.2d|", matriz[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      matrizEspelho[i][j+3] = matriz[i][j];
    }
  }

  printf("\nMatriz Espelho\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      printf("|%.2d|", matrizEspelho[i][j]);
    }
    printf("\n");
  }

}