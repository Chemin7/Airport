#include <iostream>
#include <windows.h>
#include <ctime>
#include "person.h"
#include "queue.h"
#include "gotoxy.h"


using namespace std;

bool ban(true);
void menu() {
    //SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),   BACKGROUND_INTENSITY);
    //SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE)   );
    system("cls");
    HideCursor();
    string name,destination;
    Queue* tickets = new Queue;
    Queue* bags = new Queue;
    Queue* taxi = new Queue;

    string opc;



    do {
        cout<<"-------MENU---------"<<endl;
        cout<<"Ingresa el nombre del pasajero: ";
        cin>>name;
        cout<<"Ingresa el destino del pasajero: ";
        cin>>destination;


        Person p;
        p.setName(name);
        p.setDestination(destination);

        tickets->enqueue(p);

        cout<<"Presione 1 para continuar: ";
        cin>>opc;
        system("cls");
        }
    while(opc=="1");
    Objects::welcomeMsg();
    Objects::txtTickets();
    tickets->showQueue(Objects::receptionist);
    bags = tickets->getOutQueue();
    delete tickets;

    bags->showInfo();
    Objects::txtCheckIn();
    bags->showQueue(Objects::receptionist);
    taxi=bags->getOutQueue();
    delete bags;


    system("color 1f");
    for(int i = 0; i<90; i++) {
        Objects::plane(i);
        Sleep(50);
        }
        //SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),   BACKGROUND_INTENSITY);
    system("color 0f");
    system("cls");


    Objects::txtCheckOut();
    taxi->showQueue(Objects::stop);
    while(!taxi->isEmpty()) {

        for(int i = 0; i<80; i++) {
            Objects::taxi(i);
            if(i==50)
                taxi->getOutPerson();
            Sleep(45);

            }

            Objects::deleteTaxi();

        }


    system("cls");
    Objects::farewellMsg();
    system("pause");
    }

int main() {

    menu();

    return 0;
    }
