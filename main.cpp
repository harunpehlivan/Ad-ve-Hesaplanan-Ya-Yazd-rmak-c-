#include <iostream>
using namespace std;
int main()
{
    string isim; // “isim”in string olarak tanımlanması
    int yil, yas, buyil = 2019; // “yil”, “yas”, “buyil”ın tanımlanması
    // “isim” ve “yil”ın girilmesi
    cout << "Isminizi giriniz: ";
    cin >> isim;
    cout << "Dogum yilinizi giriniz: ";
    cin >> yil;
    yas = buyil - yil; // “yas”ın değerinin hesaplanması
    cout << "Isminiz: " << isim <<  "Yasiniz: " << yas ; // “isim” ve “yas”ın ekrana yazdırılması 
    return 0;
}