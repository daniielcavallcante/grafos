#include <iostream>
#include <vector>
#include <pair>

void main(){

    //Lista de Arestas
    vector< pair <int, int> > arestas;
    //Descreve quais são os extremos de cada aresta
    arestas.push_back( make_pair(1, 2) );
    arestas.push_back( make_pair(1, 3) );
    arestas.push_back( make_pair(1, 6) );
    arestas.push_back( make_pair(2, 3) );
    arestas.push_back( make_pair(3, 4) );

    //Matriz de Adjascência
    int grafo[10][10]; // vamos supor que a matriz esteja zerada
    //Registra, para cada possível combinação entre vértices, se há ou não conexão entre estes (indicada pelo 1).
    grafo[1][2] = grafo[2][1] = 1;
    grafo[1][3] = grafo[3][1] = 1;
    grafo[1][6] = grafo[6][1] = 1;
    grafo[2][3] = grafo[3][2] = 1;
    grafo[3][4] = grafo[4][3] = 1;

    //Lista de Adjascência
    vector<int> vizinhos[10];
    //Baseia-se em registrar, para cada vértice, quais são os outros que conectam-se a ele por uma aresta.
    vizinhos[1].push_back(2);
    vizinhos[1].push_back(3);
    vizinhos[1].push_back(6);
        
    vizinhos[2].push_back(1);
    vizinhos[2].push_back(3);
        
    vizinhos[3].push_back(1);
    vizinhos[3].push_back(2);
        
    vizinhos[4].push_back(3);
}