#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include "node.h"
#include "person.h"
#include "objects.h"

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

        ///Animation
        void showQueue();
        void getOutQueue();

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

void Queue::showQueue() {

    Node* show = NULL;
    show = head;
    int limit(65);

    while(show!=NULL) {
        for(int i=0; i<limit; i++) {
            show->data.queueUp(i);
            ///******************
            Objects::receptionist();

            ///******************
            Sleep(20);//Velocidad
            }
        limit-=5;
        show=show->next;
        }


    }


void Queue::getOutQueue()
{
    Node* show(head);

    int posH,posR;
    while(!this->isEmpty()){
        posH = this->getFront().pos;
        posR = this->getLast().pos;
        show=show->next;
        this->dequeue();
        show->data.queueUp(posH);
        Person::queueOut(posR);
         Sleep(100);

    }



}

#endif // QUEUE_H_INCLUDED
