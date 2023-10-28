 #include <stdio.h>
#include <stdbool.h>

#define SIZE 4

bool is_valid(int grid[SIZE][SIZE], int clues[SIZE][SIZE], int row, int col) {
    // Verifica si el número en la posición actual es válido según las pistas (clues)
    
    // Verifica si hay números duplicados en la fila actual
    for (int i = 0; i < SIZE; i++) {
        if (i != col && grid[row][i] == grid[row][col]) {
            return false;
        }
    }

    // Verifica si hay números duplicados en la columna actual
    for (int i = 0; i < SIZE; i++) {
        if (i != row && grid[i][col] == grid[row][col]) {
            return false;
        }
    }

    // Verifica las pistas de la parte superior
    if (clues[row][col] > 0 && row == 0) {
        int count = 0;
        int max_height = 0;
        for (int i = 0; i < SIZE; i++) {
            if (grid[i][col] > max_height) {
                max_height = grid[i][col];
                count++;
            }
        }
        if (count != clues[row][col]) {
            return false;
        }
    }

    // Verifica las pistas de la parte inferior
    if (clues[row][col] > 0 && row == SIZE - 1) {
        int count = 0;
        int max_height = 0;
        for (int i = SIZE - 1; i >= 0; i--) {
            if (grid[i][col] > max_height) {
                max_height = grid[i][col];
                count++;
            }
        }
        if (count != clues[row][col]) {
            return false;
        }
    }

    // Verifica las pistas de la parte izquierda
    if (clues[row][col] > 0 && col == 0) {
        int count = 0;
        int max_height = 0;
        for (int i = 0; i < SIZE; i++) {
            if (grid[row][i] > max_height) {
                max_height = grid[row][i];
                count++;
            }
        }
        if (count != clues[row][col]) {
            return false;
        }
    }

    // Verifica las pistas de la parte derecha
    if (clues[row][col] > 0 && col == SIZE - 1) {
        int count = 0;
        int max_height = 0;
        for (int i = SIZE - 1; i >= 0; i--) {
            if (grid[row][i] > max_height) {
                max_height = grid[row][i];
                count++;
            }
        }
        if (count != clues[row][col]) {
            return false;
        }
    }

    return true;
}

bool solve_skyscrapers(int grid[SIZE][SIZE], int clues[SIZE][SIZE], int row, int col) {
    // Función recursiva para resolver el juego de los "Skyscrapers" utilizando backtracking
    
    if (row == SIZE) {
        // Se han asignado todos los valores correctamente
        return true;
    }

    if (col == SIZE) {
        // Se ha completado una fila, pasar a la siguiente fila
        return solve_skyscrapers(grid, clues, row + 1, 0);
    }

    if (grid[row][col] != 0) {
        // La celda actual ya tiene un valor asignado, pasar a la siguiente celda
        return solve_skyscrapers(grid, clues, row, col + 1);
    }

    for (int num = 1; num <= SIZE; num++) {
        grid[row][col] = num;

        if (is_valid(grid, clues, row, col)) {
            // El número asignado es válido, pasar a la siguiente celda
            if (solve_skyscrapers(grid, clues, row, col + 1)) {
                return true;
            }
        }

        grid[row][col] = 0; // Deshacer la asignación si el número no es válido
    }

    return false;
}

void print_grid(int grid[SIZE][SIZE]) {
    // Imprime el tablero de juego
    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

void enter_clues(int clues[SIZE][SIZE]) {
    // Permite al usuario ingresar las pistas (clues) para el juego de los "Skyscrapers"
    
    printf("Ingrese las pistas (clues) para el juego de los Skyscrapers:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Pista para la posición [%d][%d]: ", i, j);
            scanf("%d", &clues[i][j]);
        }
    }
}

int main() {
    int clues[SIZE][SIZE]; // Pistas para el juego de los Skyscrapers
    int grid[SIZE][SIZE] = {0}; // Tablero de juego inicialmente vacío

    enter_clues(clues); // Permite al usuario ingresar las pistas

    if (solve_skyscrapers(grid, clues, 0, 0)) {
        printf("Solución encontrada:\n");
        print_grid(grid);
    } else {
        printf("No se encontró ninguna solución.\n");
    }

    return 0;
}
