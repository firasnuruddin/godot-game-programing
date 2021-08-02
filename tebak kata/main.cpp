#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
int main ()
{

    string nama="";
    string i="";
    string tebak;
    char temp;
    int random=0;
    int nyawa;
    char ulang='y';

    while(ulang=='y')
    {
        nyawa=3;
        cout << "Masukan Kata yang ingin di acak: ";
        cin >> nama;
        i=nama;
        system("cls");
        for (int i = 0; i < nama.size(); i++)
        {
            srand (time(NULL));
            random=rand()%nama.size();
            temp=nama[i];
            nama[i]=nama[random];
            nama[random]=temp;
        }
                do{
                cout << "Kata : "<< nama;
                cout << "\nTebakan : ";
                cin >> tebak;
                if(tebak==i)
                {
                    cout << "Tebakan Anda Benar !!\n"<<endl;;
                    break;
                }
                else
                {
                    nyawa--;
                    cout<< "Tebakan Anda Salah!"<<endl;
                }
                    cout << "Sisa Nyawa Anda : "<<nyawa<<"\n"<<endl;
                    if(nyawa==0)
                    {
                        cout <<"Game Over\n\n";
                        break;
                    }

                } while (tebak!=i);
    cout << "main lagi?(y/n)";
    cin >> ulang;
    system("cls");
    }
    return 0;
}

