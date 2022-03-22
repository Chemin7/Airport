#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include "node.h"
#include "person.h"
#include "objects.h"
#include <iostream>
#include <iomanip>
#include <functional>
#include <chrono>
#include <thread>

class Queue {
    private:
        Node* head;
        Node* rear;
        int sizeQueue;
        int id;


    public:
        Queue() {
            this->head =NULL;
            this->rear = NULL;
            sizeQueue=0;
            id=0;
            };

        void enqueue(Person);
        void dequeue();
        Person getFront();
        Person getLast();

        bool isEmpty();

        void showNames();
        void showInfo();

        ///Animation
        void showQueue(std::function <void()>);
        Queue* getOutQueue();
        void getOutPerson();

    };


void Queue::enqueue(Person e) {
    e.setId(++id);

    Node* ptr = new Node();
    ptr->data=e;
    ptr->next = NULL;

    if(head == NULL) {
        head=ptr;
        rear=ptr;
        }
    else {
        rear->next=ptr;
        rear=ptr;
        }

    sizeQueue++;
    }

void Queue::dequeue() {
    if(isEmpty()) {
        std::cout<<"La cola esta vacia"<<std::endl;
        }
    else if(head==rear) {
        delete(head);
        head=NULL;
        rear=NULL;
        }
    else {
        Node* ptr=head;
        head=head->next;
        delete(ptr);
        }

    sizeQueue--;
    }

Person Queue::getFront() {

    return head->data;

    }

Person Queue::getLast() {

    return rear->data;
    }

bool Queue::isEmpty() {
    return head == NULL and rear == NULL;
    }

void Queue::showQueue(std::function <void()> obj) {

    Node* show = NULL;
    show = head;
    int limit(65),i;

    while(show!=NULL) {
        for(i=0; i<limit; i++) {
            show->data.queueUp(i);
            ///******************
            obj();

            ///******************
            Sleep(20);//Velocidad
            }
        show->data.queueUp(i);
        limit-=5;
        show=show->next;
        }


    }


Queue* Queue::getOutQueue() {

    Queue *q = new Queue;
    Node* first(head);
    Node* second(head->next);

    while(!this->isEmpty()) {
        while(second!=nullptr) {
            first->data.queueOut();
            for(int i = second->data.pos; i <= first->data.pos; i++) {
                second->data.queueUp(i);
                Sleep(40);
                }
            first=first->next;
            second=second->next;
            Node* f=first;
            Node* s=second;
            while(s!=nullptr) {
                for(int i = s->data.pos; i<=f->data.pos-5; i++) {
                    s->data.queueUp(i);
                    Sleep(40);
                    }
                s=s->next;
                f=f->next;
                }

            }
        q->enqueue(this->getFront());
        this->dequeue();
        }


    system("cls");
    return q;

    }





void Queue::getOutPerson() {
    Queue *q = new Queue;
    Node* first(head);
    Node* second(head->next);



    first->data.queueOut();
    if(!this->head->next==NULL){
        for(int i = second->data.pos; i <= first->data.pos; i++) {
            second->data.queueUp(i);
            Sleep(100);
            }

        first=first->next;
        second=second->next;
        Node* f=first;
        Node* s=second;
        while(s!=nullptr) {
            for(int i = s->data.pos; i<=f->data.pos-5; i++) {
                s->data.queueUp(i);
                Sleep(40);
                }
            s=s->next;
            f=f->next;
            }


            q->enqueue(this->getFront());
            this->dequeue();
    }else{
        first->data.queueOut();
        this->dequeue();
    }


    }

void Queue::showNames() {

    Node* aux(head);

    while(aux!=NULL) {
        std::cout<<"nombre: "<<aux->data.getName()<<std::endl;
        aux=aux->next;
        }
    }




void Queue::showInfo() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 11);
    cout<<left;
    cout << setw(10)<<"Id ";
    cout << setw(20)<<"| Nombre";
    cout << setw(10)<<"| Maletas";
    cout <<setw(20) <<"| Destino";

    cout<<endl;
    cout<<"----------|-------------------|---------|--------------"<<endl;
    Node* aux(head);

    while(aux!=NULL) {
        cout << setw(10)<<aux->data.getId() ;
        cout <<"| "<< setw(18)<<aux->data.getName();
        cout <<"| "<< setw(8)<<aux->data.getBags();
        cout <<"| "<< setw(10)<<aux->data.getDestination();
        cout<<endl;
        aux=aux->next;
        }
    SetConsoleTextAttribute(hConsole, 11);

    }


#endif // QUEUE_H_INCLUDED
