#ifndef OBJECTS_H_INCLUDED
#define OBJECTS_H_INCLUDED


class Objects{
public:
    static void receptionist();
    static void taxi(int);
    static void plane(int);
    static void stop();
    static void txtTickets();
    static void txtCheckIn();
    static void txtCheckOut();
    static void deleteTaxi();
    static void welcomeMsg();
    static void farewellMsg();

};

void Objects::receptionist()
{
    gotoxy(70,10);cout<< "      o";
    gotoxy(70,11);cout<< " |-- /| \\";
    gotoxy(70,12);cout<< " |   / \\";
}

void Objects::taxi(int x)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 14);
    gotoxy(x,13);cout<<"                   [\\";
    gotoxy(x,14);cout<<"              .----' `-----.";
    gotoxy(x,15);cout<<"             //^^^^;;^^^^^^`\\";
    gotoxy(x,16);cout<<"    _______//_____||_____()_\\________";
    gotoxy(x,17);cout<<"    /826    :      : ___              `\\";
    gotoxy(x,18);cout<<"   |>   ____;      ;  |/\\><|   ____   _<)";
    gotoxy(x,19);cout<<" {____/    \\_________________/    \\____}";
    gotoxy(x,20);cout<<"      \\ '' /                 \\ '' /";
    gotoxy(x,21);cout<<"       '--'                   '--'";

    SetConsoleTextAttribute(hConsole, 15);





}

void Objects::deleteTaxi()
{
    gotoxy(80,13);cout<<"                      ";
    gotoxy(80,14);cout<<"                                          ";
    gotoxy(80,15);cout<<"                                          ";
    gotoxy(80,16);cout<<"                                          ";
    gotoxy(80,17);cout<<"                                          ";
    gotoxy(80,18);cout<<"                                          ";
    gotoxy(80,19);cout<<"                                          ";
    gotoxy(80,20);cout<<"                                          ";
    gotoxy(80,21);cout<<"                                          ";

}

void Objects::plane(int x)
{

    gotoxy(x,10);cout<<"           _";
    gotoxy(x,11);cout<<"         -=\`\\";
    gotoxy(x,12);cout<<"     |\\ ____\\_\\__";
    gotoxy(x,13);cout<<"   -=\c`\"\"\"\"\"\"\" \"`)";
    gotoxy(x,14);cout<<"      `~~~~~/ /~~`";
    gotoxy(x,15);cout<<"        -==/ /";
    gotoxy(x,16);cout<<"          '-'";
}

void Objects::stop()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 12);
    gotoxy(70,5);cout<<"   ____";
    gotoxy(70,6);cout<<"  /    \\";
    gotoxy(70,7);cout<<" | STOP |";
    gotoxy(70,8);cout<<"  \\ __ /";
     SetConsoleTextAttribute(hConsole, 15);
    gotoxy(70,9);cout<<"    ||";
    gotoxy(70,10);cout<<"    ||";
    gotoxy(70,11);cout<<"    ||";
    SetConsoleTextAttribute(hConsole, 10);
    gotoxy(70,12);cout<<" ~~~~~~~";
    SetConsoleTextAttribute(hConsole, 15);


    //SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),   Fore);
}


void Objects::txtTickets()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 13);
    gotoxy(70,1);cout<<"  ___    ___    _      ___   _____    ___    ___ ";
    gotoxy(70,2);cout<<" | _ )  / _ \\  | |    | __| |_   _|  / _ \\  / __|";
    gotoxy(70,3);cout<<" | _ \\ | (_) | | |__  | _|    | |   | (_) | \\__ \\";
    gotoxy(70,4);cout<<" |___/  \\___/  |____| |___|   |_|    \\___/  |___/";
     SetConsoleTextAttribute(hConsole, 15);

}

void Objects::txtCheckIn()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 13);
    gotoxy(60,1);cout<<"  __  __     _     _      ___   _____     _     ___ ";
    gotoxy(60,2);cout<<" |  \\/  |   /_\\   | |    | __| |_   _|   /_\\   / __|";
    gotoxy(60,3);cout<<" | |\\/| |  / _ \\  | |__  | _|    | |    / _ \\  \\__ \\";
    gotoxy(60,4);cout<<" |_|  |_| /_/ \\_\\ |____| |___|   |_|   /_/ \\_\\ |___/";

    SetConsoleTextAttribute(hConsole, 15);
}

void Objects::txtCheckOut()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 13);
    gotoxy(60,1);cout<<"  ___     _     _      ___   ___      _   ";
    gotoxy(60,2);cout<<" / __|   /_\\   | |    |_ _| |   \\    /_\\  ";
    gotoxy(60,3);cout<<" \\__ \\  / _ \\  | |__   | |  | |) |  / _ \\";
    gotoxy(60,4);cout<<" |___/ /_/ \\_\\ |____| |___| |___/  /_/ \\_\\";

    SetConsoleTextAttribute(hConsole, 15);
}


void Objects::welcomeMsg()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 10);
    cout<<" _______           _______  _______ _________"<<endl;
    cout<<"(  ____ \\|\\     /|(  ____ \\(  ____ \\\\__   __/"<<endl;
    cout<<"| (    \\/| )   ( || (    \\/| (    \\/   ) (   "<<endl;
    cout<<"| |      | |   | || |      | (__       | |   "<<endl;
    cout<<"| |      | |   | || |      |  __)      | |  "<<endl;
    cout<<"| |      | |   | || |      | (         | |  "<<endl;
    cout<<"| (____/\\| (___) || (____/\\| (____/\\___) (___"<<endl;
    cout<<"(_______/(_______)(_______/(_______/\\\\_______/"<<endl;
    SetConsoleTextAttribute(hConsole, 15);
}

void Objects::farewellMsg()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 11);
cout<<"          _____                    _____                    _____         "<<endl;
cout<<"         /\\    \\                  /\\    \\                  /\\    \\       "<<endl;
cout<<"        /::\\    \\                /::\\    \\                /::\\____\\       " <<endl;
cout<<"       /::::\\    \\               \\:::\\    \\              /::::|   |        "<<endl;
cout<<"      /::::::\\    \\               \\:::\\    \\            /:::::|   |        "<<endl;
cout<<"     /:::/\\:::\\    \\               \\:::\\    \\          /::::::|   |        "<<endl;
cout<<"    /:::/__\\:::\\    \\               \\:::\\    \\        /:::/|::|   |        "<<endl;
cout<<"   /::::\\   \\:::\\    \\              /::::\\    \\      /:::/ |::|   |        "<<endl;
cout<<"  /::::::\\   \\:::\\    \\    ____    /::::::\\    \\    /:::/  |::|   | _____  "<<endl;
cout<<" /:::/\\:::\\   \\:::\\    \\  /\\   \\  /:::/\\:::\\    \\  /:::/   |::|   |/\\    \\ "<<endl;
cout<<"/:::/  \\:::\\   \\:::\\____\\/::\\   \\/:::/  \\:::\\____\\/:: /    |::|   /::\\____\\"<<endl;
cout<<"\\::/    \\:::\\   \\::/    /\\:::\\  /:::/    \\::/    /\\::/    /|::|  /:::/    /"<<endl;
cout<<" \\/____/ \\:::\\   \\/____/  \\:::\\/:::/    / \\/____/  \\/____/ |::| /:::/    / "<<endl;
cout<<"          \\:::\\    \\       \\::::::/    /                   |::|/:::/    /  "<<endl;
cout<<"           \\:::\\____\\       \\::::/____/                    |::::::/    /   "<<endl;
cout<<"            \\::/    /        \\:::\\    \\                    |:::::/    /    "<<endl;
cout<<"             \\/____/          \\:::\\    \\                   |::::/    /     "<<endl;
cout<<"                               \\:::\\    \\                  /:::/    /      "<<endl;
cout<<"                                \\:::\\____\\                /:::/    /       "<<endl;
cout<<"                                 \\::/    /                \\::/    /        "<<endl;
cout<<"                                  \\/____/                  \\/____/  "<<endl;

    SetConsoleTextAttribute(hConsole, 15);
}

#endif // OBJECTS_H_INCLUDED
