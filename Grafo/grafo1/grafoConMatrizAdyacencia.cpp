#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// Clase para representar un Grafo con matriz de adyacencia
class Grafo {
private:
    vector<vector<int>> matriz;  // Matriz de adyacencia
    vector<char> nodos;  // Lista de nodos
    int num_vertices;
    bool dirigido;

public:
    // Constructor
    Grafo(int vertices, bool es_dirigido) {
        num_vertices = vertices;
        dirigido = es_dirigido;
        matriz.resize(num_vertices, vector<int>(num_vertices, 0));

        // Asignar nombres de nodos (A, B, C, ...)
        for (int i = 0; i < num_vertices; i++) {
            nodos.push_back('A' + i);
        }

        // Llenar la matriz con valores aleatorios (0 o 1)
        for (int i = 0; i < num_vertices; i++) {
            for (int j = 0; j < num_vertices; j++) {
                if (i != j) {
                    matriz[i][j] = rand() % 2; // Genera 0 o 1 aleatorio
                    if (!dirigido) {
                        matriz[j][i] = matriz[i][j]; // Refleja en la diagonal para grafos no dirigidos
                    }
                }
            }
        }
    }

    // Imprimir la matriz de adyacencia en consola
    void imprimirMatriz() {
        cout << "\n" << (dirigido ? "DIRIGIDO" : "NO DIRIGIDO") << endl;
        cout << num_vertices << endl;
        cout << "* ";
        for (char nodo : nodos) {
            cout << setw(3) << nodo;
        }
        cout << endl;

        for (int i = 0; i < num_vertices; i++) {
            cout << nodos[i] << " ";
            for (int j = 0; j < num_vertices; j++) {
                cout << setw(3) << matriz[i][j];
            }
            cout << endl;
        }
    }

    // Guardar la matriz en un archivo
    void guardarEnArchivo(const string& nombreArchivo) {
        ofstream outFile(nombreArchivo);
        if (!outFile) {
            cout << "Error al abrir el archivo.\n";
            return;
        }

        outFile << (dirigido ? "DIRIGIDO" : "NO DIRIGIDO") << endl;
        outFile << num_vertices << endl;
        outFile << "* ";
        for (char nodo : nodos) {
            outFile << nodo << " ";
        }
        outFile << endl;

        for (int i = 0; i < num_vertices; i++) {
            outFile << nodos[i] << " ";
            for (int j = 0; j < num_vertices; j++) {
                outFile << matriz[i][j] << " ";
            }
            outFile << endl;
        }

        outFile.close();
        cout << "\nMatriz de adyacencia guardada en '" << nombreArchivo << "'.\n";
    }
};

int main() {
    srand(time(0)); // Inicializar la semilla aleatoria
    int num_vertices;
    char opcion_dirigido;
    bool es_dirigido;

    // Pedir al usuario el número de vértices
    cout << "Ingrese el numero de vertices: ";
    cin >> num_vertices;

    if (num_vertices < 1 || num_vertices > 26) {
        cout << "Error: El numero de vertices debe estar entre 1 y 26.\n";
        return 1;
    }

    // Preguntar si el grafo es dirigido
    cout << "Es grafo es dirigido? (S/N): ";
    cin >> opcion_dirigido;
    es_dirigido = (opcion_dirigido == 's' || opcion_dirigido == 'S');

    Grafo grafo(num_vertices, es_dirigido);

    // Mostrar matriz de adyacencia en pantalla
    grafo.imprimirMatriz();

    // Guardar en archivo
    grafo.guardarEnArchivo("matriz.txt");

    cout << "\nAhora puedes usar Python para analizarla.\n";

    return 0;
}
