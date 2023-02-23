#include <iostream>
using namespace std;
int s1, s2, s3;
double ortalama;
char secenek='e';
int main()
{
   while((secenek!='h') && (secenek!='H'))
   {

       cout<<"Sayi 1:";
       cin>>s1;

       cout<<"Sayi 2:";
       cin>>s2;

       cout<<"Sayi 3:";
       cin>>s3;

       ortalama=(s1 + s2 + s3) / 3;
       cout<<"girdiginiz sayilarin osrtalamasi=="<<ortalama<<endl;
       cout<<"Devam Etmek Ister Misiniz...(e/h)"<<endl;
       cin>>secenek;
   }

    return 0;
}
