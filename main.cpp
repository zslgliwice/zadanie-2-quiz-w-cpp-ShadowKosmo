#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odp;

int main()
{

    string question[5][5]={
        {"Co to jest C++?", "a) Piosenkarka", "b) Jezyk programowania", "c) Mlynek do herbaty","b"},
        {"Czego skrótem jes PHP?", "a) Hypertext Preprocessor", "b) Player Hand Panel ", "c) Nazwali to tak bo ladnie wyglada","a"},
        {"Czy chleb jest smaczny?","a) lubie chleb", "b) nie lubie chleb", "c)chleb jest smaczny","a"},
        {"Tak?","a)Nie","b)Jeszcze jak","c) Tak", "b"},
        {"Nie mam pomyslu na pytanie frfr","a) Rel", "b) sadge","c) Understandable, have a nice day", "c"}
    };

    //https://cpp0x.pl/kursy/Kurs-WinAPI-C++/Roznosci/Kolory-w-konsoli/374
    HANDLE uchwyt = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(uchwyt, 12);
    cout << "\aPodaj imie: ";
    cin >> imie;
    int pkt = 0;

    system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "3..2";
    Sleep(1000);
    system("cls");
    cout<< "3..2..1..";
    Sleep(1000);
    system("cls");

    cout << imie << " witaj w tescie z programowania\n";

    /*
    cout << "Co to jest C++?"<<endl;
    cout << "a) Piosenkarka"<<endl;
    cout << "b) Jezyk programowania"<<endl;
    cout << "c) Mlynek do herbaty"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    */

   for(int i=0; i<4; i++){
    
        for (int j=0; j<4; j++){

        cout <<question[i][j]<<endl;

        }
        cout<<"Twoja odpowiedz: ";
        cin>>odp;

        if(odp == question[i][4])
            {
                cout << "Poprawna odpowiedz!";
                pkt++;
            }
            else
            {
                cout << "Zle! Poprawna odpowiedz to: "<<question[i][4]<<"!";

            }
            Sleep(3000);
            system("cls");
   }

   cout<<"Zdobyles: "<<pkt<<" punktow!";
   if(pkt >= 4) cout<<" Gratulacje!"<<endl;
   cout<<endl;
    system("pause");
    



    return 0;
}
