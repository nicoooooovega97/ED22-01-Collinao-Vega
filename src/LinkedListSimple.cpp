#include <iostream>
using namespace std;


template <typename T>

class Nodo{
    T dato;
    Nodo* next;

public:
    T getDato(){
        return this->dato;
    }
    void setDato(T dato){
        this->dato = dato;
    }
    Nodo* getNext(){
        return this->next;
    }
    void setNext(Nodo* next){
        this->next = next;
    }
    Nodo(T dato, Nodo* next){
        this->dato = dato;
        this->next = next;
    }
};

template <typename T>
class LinkedList{
    int size;
    Nodo<T>* head;

public:
    int getSize(){
        return this->size;
    }
    void setSize(int size){
        this->size = size;
    }
    Nodo<T>* getHead(){
        return this->head;
    }
    void setHead(Nodo<T>* head){
        this->head = head;
    }
    LinkedList(){
        this->head = nullptr;
        this->size = 0;
    }

    void agregarPorIndice(int indice, T valor){
        if(indice >= 0 && indice <= this->size){
            if(indice == 0){
                agregarInicio(valor);
            }
            else if(indice == this->size){
                agregarFinal(valor);
            }
            else{
                Nodo<T>*current = this->head;
                Nodo<T>*prev;
                for(int i = 0; i < indice; i++){
                    prev = current;
                    current = current->getNext();
                }
                Nodo<T>* nuevo = new Nodo<T>(valor,current);
                prev->setNext(nuevo);
                this->size++;
            }
        }else{
            cout << "El indice proporcionado esta fuera de los limites posbiles"<<endl;
        }
    }

    void eliminarPorDato(T valor){
        if(this->head){
            Nodo<T>* current = this->head;
            Nodo<T>* prev;
            while(current){
                if(current->getDato() == valor && this->head == current){
                    eliminarInicio();
                    break;
                }
                else if(current->getDato() == valor && current->getNext() == nullptr){
                    eliminarFinal();
                    break;
                }
                else if(current->getDato() == valor && current->getNext() != nullptr){
                    prev->setNext(current->getNext());
                    current->setNext(nullptr);
                    delete current;
                    this->size--;
                }
                else{
                    prev = current;
                    current = current->getNext();
                }
            }
        }else{
            cout << "La lista esta vacia" << endl;
        }
    }

    
};
