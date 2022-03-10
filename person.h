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
        bool ban;

        void setBags();
    public:

        Person();
        void setId(int);
    void setName(std::string);
    int pos;


        ///Animation
        void queueUp(int);
        static void queueOut(int);

};

Person::Person()
{
    ban=true;
}
void Person::setName(std::string n)
{
    this->name=n;
}

void Person:: setBags(){

    std::uniform_int_distribution<int> distribution(0,15);
    unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);


   bags=distribution(generator);
}

void Person::setId(int id)
{
    this->id=id;
}

///Animation
using namespace std;

void Person::queueUp(int x)
{
    gotoxy(x,9);cout<<"   "<<id;
    gotoxy(x,10);cout<< "  o";
    gotoxy(x,11); cout<< " /| \\";
		if(ban){
            gotoxy(x,12); cout<< " / ";
			ban=false;
		}else{
			gotoxy(x,12); cout<< "   \\";
			ban=true;
		}

    this->pos=x;
}

void Person::queueOut(int x)
{

    gotoxy(x,9);cout<<"      ";
    gotoxy(x,10);cout<< "     ";
    gotoxy(x,11); cout<< "     ";
    gotoxy(x,12); cout<< "     ";

}





#endif // PERSON_H_INCLUDED
