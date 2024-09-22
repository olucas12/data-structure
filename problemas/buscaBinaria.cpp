#include <iostream>
#include <cstdlib>

using namespace std;

void fillArray(int *lista, int &tam){
    for(int i = 0, j = 0; j < tam; i+=(rand() % 5 + 2), j++){
        lista[j] = i+1;
    }
}

void printArray(int *lista, int tam){
    for(int i = 0; i < tam; i++){
        cout << lista[i] << " ";
    }
    cout << endl;
}

int *find(int valor, int *lista, int &tam){
    if(valor == lista[tam/2]){
        cout << "Valor existe." << endl;
    } else if(valor < lista[tam/2]) {
        tam/=2;
        int *novaLista = new int[tam];
        for(int i = 0; i < tam; i++){
            novaLista[i] = lista[i];
        }
        delete(lista);
        return novaLista;
    } else {
        tam/=2;
        int *novaLista = new int[tam];
        for(int i = tam, j = 0; i < tam*2; i++, j++){
            novaLista[j] = lista[i];
        }
        delete(lista);
        return novaLista;
    }
}

int main(){

    srand (time(NULL));

    int tam = 20, *lista = new int[tam], valor = 65;

    fillArray(lista, tam);
    printArray(lista, tam);

    lista = find(valor, lista, tam);

    printArray(lista, tam);

    return 0;
}