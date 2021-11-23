// Autor Daniel Caetano de Souza Ferreira
// Data: 23/11/2021
// Atividade de Matriz


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
  srand(time(0));
  int matriz[3][3];
  int matrizEspelho[3][5];
  double determinante=0;
  double detAux;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matriz[i][j] = rand() % 10;
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
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      detAux = matrizEspelho[i][j];
    }
    determinante=determinante+detAux;
    printf("\n");
  }
  double diagonalA=(matrizEspelho[0][0]*matrizEspelho[1][1]*matrizEspelho[2][2]);
  double diagonalB=(matrizEspelho[0][1]*matrizEspelho[1][2]*matrizEspelho[2][3]);
  double diagonalC=(matrizEspelho[0][2]*matrizEspelho[1][3]*matrizEspelho[2][4]);

  double diagonalD=(matrizEspelho[2][0]*matrizEspelho[1][1]*matrizEspelho[0][2]);
  double diagonalE=(matrizEspelho[2][1]*matrizEspelho[1][2]*matrizEspelho[0][3]);
  double diagonalF=(matrizEspelho[2][2]*matrizEspelho[1][3]*matrizEspelho[0][4]);

  determinante=(diagonalA+diagonalB+diagonalC)-(diagonalD-diagonalE-diagonalF);

  printf("\nDeterminante: |%f|\n", determinante);

}