import numpy as np
import matplotlib.pyplot as plt
import time

def solve_nqueens(n):
    """
    Genera soluciones al problema de las N reinas con backtracking.
    Devuelve un generador que rinde cada solución (lista de posiciones de columnas).
    """
    board = [-1] * n
    cols = set()
    diag1 = set()
    diag2 = set()

    def backtrack(row):
        if row == n:
            yield board.copy()
            return
        for c in range(n):
            d1 = row - c
            d2 = row + c
            if c in cols or d1 in diag1 or d2 in diag2:
                continue
            board[row] = c
            cols.add(c)
            diag1.add(d1)
            diag2.add(d2)

            yield from backtrack(row + 1)

            cols.remove(c)
            diag1.remove(d1)
            diag2.remove(d2)

    yield from backtrack(0)

def draw_solution(sol):
    """
    Dibuja una solución del problema N-reinas sobre un tablero de ajedrez.
    """
    n = len(sol)
    # Patrón de tablero
    board = np.add.outer(range(n), range(n)) % 2

    plt.clf()
    plt.imshow(board, cmap='gray', interpolation='nearest')
    xs = sol
    ys = list(range(n))
    plt.scatter(xs, ys, marker='o', s=200, c='gold')
    plt.xticks([])
    plt.yticks([])
    plt.title(f'Solución: {sol}')
    plt.gca().invert_yaxis()
    plt.pause(0.5)  # Pausa para ver la solución

if __name__ == "__main__":
    n = int(input("Ingrese el número de reinas: "))
    plt.figure(figsize=(6, 6))
    plt.ion()  # Modo interactivo
    count = 0
    for sol in solve_nqueens(n):
        count += 1
        print(f"Solución {count}: {sol}")
        draw_solution(sol)
    plt.ioff()
    print(f"Total de soluciones para n={n}: {count}")
    input("Presione Enter para salir...")
