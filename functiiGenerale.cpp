#include<iostream>
#include<stack>
#include<vector>
#include<stdlib.h>
using namespace std;

void AlegereOperatii( int &baza , double &nr )
{
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
}

void afisareVectoriPlusStive( stack<int> Stiva , vector<int> Vector)
{

while( !Stiva.empty() )
    {
        cout << Stiva.top() << " ";
        Stiva.pop();
    }
    if( !Vector.empty())
    cout << ", ";

for( auto a : Vector )
cout << a << " ";


}

vector<int> AlipireZB ( stack<int> nrI , vector<int> nrSU )
{
    vector<int> vectorAlipire;
    

    vectorAlipire.push_back(',');

    for( auto a : nrSU )
        vectorAlipire.push_back(a);

    return vectorAlipire;
}