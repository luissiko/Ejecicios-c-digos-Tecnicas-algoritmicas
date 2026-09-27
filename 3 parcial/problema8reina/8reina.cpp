#include <iostream>
#include <stdio.h>
using namespace std;

int x = 0;

// Comprueba si la reina en la fila k está en posición válida
bool comprobar(int reinas[], int n, int k) {
    for (int i = 0; i < k; i++) {
        if (reinas[i] == reinas[k] ||
            abs(k - i) == abs(reinas[k] - reinas[i])) {
            return false;
        }
    }
    return true;
}

// Función recursiva de backtracking
void Nreinas(int reinas[], int n, int k) {
    if (k == n) {
        // Caso base: ya colocamos todas las reinas
        x++;
        cout << "Solucion " << x << " : ";
        for (int i = 0; i < n; i++) {
            cout << reinas[i] << " , ";
        }
        cout << endl;
    }
    else {
        // Intentar todas las columnas en la fila k
        for (reinas[k] = 0; reinas[k] < n; reinas[k]++) {
            if (comprobar(reinas, n, k)) {
                Nreinas(reinas, n, k + 1);
            }
        }
    }
}

int main() {
    int cant;
    cout << "Ingresar la cantidad de reinas : ";
    cin >> cant;

    int* reinas = new int[cant];
    for (int i = 0; i < cant; i++)
        reinas[i] = -1;

    Nreinas(reinas, cant, 0);

    delete[] reinas;
    return 0;
}
