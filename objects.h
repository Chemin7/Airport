#ifndef OBJECTS_H_INCLUDED
#define OBJECTS_H_INCLUDED


class Objects{
public:
    static void receptionist();
    static void taxi();
    static void plane();
};

void Objects::receptionist()
{
    gotoxy(70,10);cout<< "      o";
    gotoxy(70,11);cout<< " |-- /| \\";
    gotoxy(70,12);cout<< " |   / \\";
}

void Objects::taxi()
{

}

void Objects::plane()
{

}


#endif // OBJECTS_H_INCLUDED
