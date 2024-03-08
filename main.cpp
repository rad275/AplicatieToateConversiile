#include<iostream>
#include"functiiGenerale.cpp"
#include"ConvBazaPlecare10.cpp"
using namespace std;

int main()
{
int baza;
double nr;
AlegereOperatii( baza , nr);
afisareVectoriPlusStive( convZtoBOHI(nr , baza ) , convZtoBOHS(nr , baza)  );


return 0;
}