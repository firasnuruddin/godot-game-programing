#include <iostream>
#include <string>

using namespace std;

int main()
{
   string item = "";
   string item_sebelum = "";
   string item_terkuat = "";
   string item_terlemah = "";
    char ulang = 'y';
    float stat = 0;
    float stat_sebelum = 0;
    float stat_terkuat = 0;
    float stat_terlemah = 0;
    bool first = true;

    while(lagi=='y')
 {
       cout << "Nama item : ";
       cin >> item;
       cout << "Jumlah stat : ";
       cin >> stat;
       cout << "Item Anda adalah : " << item;
       cout << "\nStat : " << stat;
        if (first == true)
        {
            item_sebelum = "Nothing";
            item_terkuat = item;
            item_terlemah = nama_item;
            stat_terkuat = stat;
            stat_terlemah = stat;
        }
            else
        {
            if(stat >= stat_terkuat
            {
                stat_terkuat = stat;
                item_terkuat = item;
            }
            else
            {
                if(stat <= stat_terlemah)
                {
                    stat_terlemah = stat;
                    item_terlemah = item;
                }
            }
        }

        cout << "\nItem sebelumnya : " << item_sebelum;
        cout << "\nItem terhebat : " << item_terkuat;
        cout << "\nItem terlemah : " << item_terlemah;
        item_sebelum = item;
        stat_sebelum = stat;
        first = false;
        cout << "\ninput item lagi ? (y/n)" << endl;
        cin >> lagi;
    }
    char ch;
    cin >> ch;
    return 0;
}
