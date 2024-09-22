#include <iostream>
#define k 2
#define tam 10

using namespace std;

void initStack(int &pos){
    pos=0;
}

bool isFull(int pos){
    if(pos == tam){
        return true;
    } else {
        return false;
    }
}

void push(int *vetor, int &pos, int value){
    if(isFull(pos)){
        cout << "cheio";
    } else {
        vetor[pos] = value;
        pos++;
    }
}

bool isEmpty(int pos){
    if(pos==0){
        return true;
    } else {
        return false;
    }
}

void pop(int &pos){
    if(isEmpty(pos)){
        cout << "vazio";
    } else {
        pos--;
    }
}

void print(int *vetor, int pos){
    for(int i = 0; i < pos; i++){
        cout << vetor[i] << " ";
    }
}

void contar(int *vetor, int &pos, int soma){
    for(int i = pos; i > pos-k; i--){
        // cout << vetor[i-1];
        soma+=vetor[i-1];
    }
    // cout << "soma: " << soma << endl << "pos: " << pos << endl;
    pop(pos);
    cout << soma << endl;
    // cout << "pos: " << pos << endl;
}

int main(){

    int *vetor = new int[tam], pos, soma = 0;

    initStack(pos);

    for(int i = 0; i < tam; i++){
        push(vetor, pos, i+1);
    }

    do{
        contar(vetor, pos, soma);
    }while(pos>=k);

}