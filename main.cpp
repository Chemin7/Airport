#include <iostream>
#include <windows.h>
#include <ctime>
#include "person.h"
#include "queue.h"

using namespace std;

bool ban(true);

/*void gotoxy(int x,int y){
     HANDLE hcon;
     hcon = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dwPos;
     dwPos.X = x;
     dwPos.Y= y;
     SetConsoleCursorPosition(hcon,dwPos);
}*/

void monitoMov(int x) {
    gotoxy(x,10);
    cout<< "  o";
    gotoxy(x,11);
    cout<< " /| \\";
    if(ban) {
        gotoxy(x,12);
        cout<< " / ";
        ban=false;
        }
    else {
        gotoxy(x,12);
        cout<< "   \\";
        ban=true;
        }
    }
int main() {
    system("cls");

    string name;
    Queue people;
    Person p1,p2;

    int opc(1);
    /*do{
        cout<<"Ingresa el nombre: "<<endl;
        getline(cin,name);
        Person p;
        p.setName(name);

        people.enqueue(p);

        cout<<"presiona 2 para salir: "<<endl;
        cin>>opc;
    }while(opc==1);*/
    people.enqueue(p1);
    people.enqueue(p2);
    people.showQueue();
    /*for(int i=0;i<50;i++){
        monitoMov(i);
    	 Sleep(120);//Velocidad
    }

    for(int i=0;i<40;i++){
        monitoMov(i);
    	 Sleep(120);//Velocidad
    }*/


    ///***************************

    /*Queue people;
    string name;

    int opc(1);
    do{
        cout<<"Ingresa el nombre: "<<endl;
        getline(cin,name);
        Person p;
        p.setName(name);

        people.enqueue(p);

        cout<<"presiona 2 para salir: "<<endl;
        cin>>opc;
    }while(opc==1);


    Node* show = people.head;

    for(int i=0;i<50;i++){
        show->data.queueUp();
    	 Sleep(120);//Velocidad
    	 show=show->next;
    }

    /*p1.setId(1);
    p2.setId(2);
    for(int i=0;i<50;i++){
        p1.queueUp(i);
    	 Sleep(120);//Velocidad
    }
    for(int i=0;i<45;i++){
        p2.queueUp(i);
    	 Sleep(120);//Velocidad
    }*/



    system("pause>>cls");
    return 0;
    }
