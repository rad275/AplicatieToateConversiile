#include<iostream>
#include"functiiGenerale.cpp"
#include"ConvBazaPlecare10.cpp"
using namespace std;

int main()
{
int baza;
double nr;
// AlegereOperatii( baza , nr);

 int optiune;
    cout << " Alege operatia dorita "<<endl;
    cout << " 1. Conversie Cu Baza de plecare 10"<<endl; 
    cout << " 2. Conversie Interna"<<endl; 
    cout << " 3. Conversie Cu Baza de sosire 10"<<endl; 
    cout << "Introdu algerea ta : " ; cin >> optiune;
    system("CLS");
    if( optiune == 1)
    {
    cout<< "Alege baza de sosire " << endl;
    cout << "1. Conversie Zecimal -> Binar " << endl;
    cout << "2. Conversie Zecimal -> Octal " << endl;
    cout << "3. Conversie Zecimal -> Hexazecimal " << endl;
    cout << "Introdu alegerea ta : "; cin >> optiune;
    if( optiune == 1)
    baza = 2;
    else if(optiune == 2)
    baza = 8;
    if ( optiune == 3)
    baza = 16;
    cout << "Introdu Numarul ce vrei sa-l convertesti : "; cin >> nr;
    }

afisareVectoriPlusStive( convZtoBOHI(nr , baza ) , convZtoBOHS(nr , baza)  );


return 0;
}