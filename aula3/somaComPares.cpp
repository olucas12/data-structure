#include <iostream>
#define tam 12

using namespace std;

int main(){
    int numeros[tam];

    for(int i = 0; i < tam; i+=1){
        numeros[i] = i+1;
    }

    int soma = tam;

    for(int i = 0; i < tam; i+=1){
        for(int j = i; j < tam; j+=1){
            if(numeros[i]+numeros[j]==soma){
                cout << "[" << numeros[i] << ", " << numeros[j] << "] ";
            }
        }
    }
}