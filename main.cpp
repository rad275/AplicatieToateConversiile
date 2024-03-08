#include<iostream>
#include"functiiGenerale.cpp"
#include"ConvBazaPlecare10.cpp"
using namespace std;

int main()
{

double nr = 137.0625;

stack<int> S1 = convZtoBI( nr );
while (!S1.empty())
{
    cout << S1.top();
    S1.pop();
}

cout << " ";

 for( auto a : convZtoBS(nr) )
 cout << a;


return 0;
}