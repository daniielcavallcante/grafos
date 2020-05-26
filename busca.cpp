#include <iostream>
#include <vector>
#include <pair>
#include <queue>

void main(){
    /*DFS (depth-first-search) se trata de, em cada passo, olhar os vizinhos do nó vv que se está avaliando e, para cada 
    um deles cuja componente ainda não foi determinada, fazer sua componente ser a mesma de vv e chamar a função 
    recursivamente nele.*/
    // componente[i] se trata da componente do vértice i.
    // Inicialmente, componente[i] = -1 para todo vértice.
    // Faremos a DFS como sendo uma função recursiva.
    // Antes de chamar a DFS no primeiro nó, definimos sua componente

    void DFS(int x){ // vértice com o qual vamos trabalhar
        // usaremos lista de adjacência
        for(int i = 0;i < (int)vizinhos[x].size();i++){ // para todo V vizinho a X
            int v = vizinhos[x][i];
            if(componente[v] == -1){
                componente[v] = componente[x];
                DFS(v);
            }
        }
    }

    /*BFS (breadth-first-search) se trata de fazer o mesmo procedimento da DFS. Porém, em vez de chamar a função 
    recursivamente em um vizinho, esté é adicionado a uma fila e processado posteriormente.*/
    //  o array componente está inicializado para -1 em todas suas casas
    void BFS(int x){
        
        queue<int> fila;
        fila.push(x); // fila da nossa BFS
        
        componente[x] = valor; // colocamos o valor adequado aqui
        
        int atual = 0; // atual posição que estamos na fila
        
        while(!fila.empty()){ // Enquanto a fila não for vazia
            
            // vamos trabalhar com o primeiro da fila
            int v = fila.front();
            fila.pop(); // para movermos o elemento da fila
            
            for(int i = 0;i < (int)vizinhos[v].size();i++){
                
                int u = vizinhos[v][i];
                
                if(componente[u] == -1){
                    
                    // se u ainda não tiver sido visitado, o acrescentamos a fila
                    componente[u] = componente[v];
                    fila.push(u);
                }
            }
        }
    }




}