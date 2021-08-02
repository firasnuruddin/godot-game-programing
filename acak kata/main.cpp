#include <cstdlib>
#include <ctime>
#include <string>


using namespace std;

int main()
{
    string kata = "";

    cout << "Masukan kata : ";
    cin >> kata;

    cout << "\nJumlah huruf dari kata " << kata << " adalah : " << kata.size() << endl;

    for (int i = 0; i < kata.size(); i++) {
        swap(kata[rand() % kata.size()], kata[rand() % kata.size()]);
    }

    cout << "Hasil acak kata : " << kata << endl;
    return 0;
}
