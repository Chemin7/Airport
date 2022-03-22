#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <random>
#include <chrono>
#include "gotoxy.h"
#include "string"

class Person{
    private:
        int id;
        int bags;
        std::string name;
        std::string destination;
        bool ban;

        void setBags();
    public:

        Person();

        void setId(int);
        void setName(std::string);
        void setDestination(std::string);

        int getId();
        std::string getName();
        int getBags();
        std::string getDestination();

        int pos;


        ///Animation
        void queueUp(int);
        static void queueOut(int);
        void queueOut();

};

Person::Person()
{
    setBags();
    ban=true;
}
void Person::setName(std::string n)
{
    this->name=n;
}

void Person:: setBags(){

    std::uniform_int_distribution<int> distribution(1,5);
    unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);


   bags=distribution(generator);
}

void Person::setId(int id)
{
    this->id=id;
}
void Person::setDestination(std::string d)
{
    this->destination=d;
}


int Person::getId()
{
    return id;
}

std::string Person::getName()
{
    return name;
}
int Person::getBags()
{
    return bags;
}

std::string Person::getDestination()
{
    return destination;
}

///Animation
using namespace std;

void Person::queueUp(int x)
{
    HideCursor();
    gotoxy(x,9);cout<<"   "<<id;
    gotoxy(x,10);cout<< "  o";
    gotoxy(x,11); cout<< " /| \\";

    if(x%5==0){

        gotoxy(x,12);cout<<" / \\";
    }else{
        if(ban){
            gotoxy(x,12); cout<< " / ";
			ban=false;
		}else{
			gotoxy(x,12); cout<< "   \\";
			ban=true;
		}
    }

    this->pos=x;
}

void Person::queueOut(int x)
{
    HideCursor();
    gotoxy(x,9);cout<<"      ";
    gotoxy(x,10);cout<< "     ";
    gotoxy(x,11); cout<< "     ";
    gotoxy(x,12); cout<< "     ";

}



void Person::queueOut()
{
    HideCursor();
    gotoxy(pos,9);cout<<"      ";
    gotoxy(pos,10);cout<< "     ";
    gotoxy(pos,11); cout<< "     ";
    gotoxy(pos,12); cout<< "     ";

}







#endif // PERSON_H_INCLUDED
