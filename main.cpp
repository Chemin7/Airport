#include <iostream>
#include <windows.h>
#include <ctime>
#include "person.h"
#include "queue.h"

using namespace std;

bool ban(true);

int main() {
    system("cls");

    string name;
    Queue people;

    int opc(0);
    do{
        cout<<"Ingresa el nombre: "<<endl;
        getline(cin,name);

        Person p;
        p.setName(name);

        people.enqueue(p);

        opc++;
        system("cls");

    }while(opc<4);


    people.showQueue();

    people.getOutQueue();

    system("pause");
    return 0;
    }
