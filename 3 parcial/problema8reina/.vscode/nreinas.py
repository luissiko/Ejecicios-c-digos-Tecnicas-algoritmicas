import numpy as np
import matplotlib.pyplot as plt

def solve_nqueens(n):
    """
    Resuelve el problema de las N reinas mediante backtracking recursivo.
    Devuelve una lista de soluciones, donde cada solución es una lista
    de longitud n con la columna de la reina en cada fila.
    """
    solutions = []
    board = [-1] * n
    cols = set()
    diag1 = set()
    diag2 = set()
    
    def backtrack(row):
        if row == n:
            solutions.append(board.copy())
            return
        for c in range(n):
            if c in cols or (row - c) in diag1 or (row + c) in diag2:
                continue
            board[row] = c
            cols.add(c)
            diag1.add(row - c)
            diag2.add(row + c)
            
            backtrack(row + 1)
            
            cols.remove(c)
            diag1.remove(row - c)
            diag2.remove(row + c)
    
    backtrack(0)
    return solutions

def draw_solution(sol):
    """
    Dibuja una solución del problema N-reinas sobre un tablero de ajedrez.
    `sol` es una lista de longitud n con la columna de la reina en cada fila.
    """
    n = len(sol)
    # Crear patrón de tablero (0 y 1 alternados)
    board = np.add.outer(range(n), range(n)) % 2
    
    plt.figure(figsize=(6, 6))
    plt.imshow(board, cmap='gray', interpolation='nearest')
    
    # Superponer reinas como círculos
    xs = sol        # columnas
    ys = list(range(n))  # filas
    plt.scatter(xs, ys, marker='o', s=200, c='gold')
    
    plt.xticks([])
    plt.yticks([])
    plt.title(f'N-Queens solution for n={n}')
    plt.gca().invert_yaxis()  # para alinear fila 0 arriba
    plt.show()

if __name__ == "__main__":
    n = 8
    solutions = solve_nqueens(n)
    print(f"Total solutions for n={n}: {len(solutions)}")
    if solutions:
        draw_solution(solutions[0])
