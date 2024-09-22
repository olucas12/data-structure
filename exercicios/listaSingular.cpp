/*
Implemente em C/C++ as operações de inserção e remoção em uma lista singularmente ligada.
*/

#include <iostream>

using namespace std;

struct No{
    int key;
    No *prox;
};

void insert(No *no, No *&head){
    if(head == nullptr){ //IF LIST IS EMPTY
        head = no;
    } else {
        no->prox=head;
        head=no;
    }
}

void remove(No *&head){
    if(head == nullptr){
        cout << "Lista está vazia." << endl;
    } else {
        head=head->prox;
    }
}

int main(){

    No *head = nullptr;

    No *no1 = new No;
    no1->key = 100;
    no1->prox = nullptr;

    insert(no1, head);

    No *no2 = new No;
    no2->key = 101;
    no2->prox = nullptr;

    insert(no2, head);

    // remove(head);

    No *atual = head;
    while(atual != nullptr){
        std::cout << atual->key << " ";
        atual = atual->prox;
    }

    return 0;
}