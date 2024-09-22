    // FILA COM DUAS PILHAS

    #include <iostream>

    using namespace std;

    void startStack(int &top){
        top += 1;
    }

    bool isFull(int &top){
        if(top >= 10){
            return true;
        } else {
            return false;
        }
    }

    bool isEmpty(int &top){
        if(top <= 0){
            return true;
        } else {
            return false;
        }
    }

    void pop(int *stack, int &top){
        if(isEmpty(top)){
            cout << "Pilha está vazia" << endl;
        } else {
            top-=1;
        }
    }

    void push(int *stack, int &top, int value){
        if(isFull(top)){
            cout << "Pilha está cheia" << endl;
        } else {
            stack[top] = value;
            top+=1;
        }
    }

    void printStack(int *stack, int top){
        for(int i = 0; i < top; i+=1){
            cout << stack[i] << " ";
        }
        cout << endl;
    }

    void remove(int *stack1, int *stack2, int &top1, int &top2){
        for(int i = 0; i < top1-1; i+=1){
            push(stack2, top2, stack1[i]);
            pop(stack1, top1);
        }
    }

    int main(){

        int *stack1 = new int[10], *stack2 = new int[10];
        int top1 = -1, top2 = -1;

        startStack(top1);

        for(int i = 0; i < 10; i+=1){
            push(stack1, top1, i+1);
        }

        printStack(stack1, top1);

        remove(stack1, stack2, top1, top2);

        printStack(stack1, top1);
        printStack(stack2, top2);

    }