#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void afisareVectoriPlusStive( stack<int> Stiva , vector<int> Vector)
{

while( !Stiva.empty() )
    {
        cout << Stiva.top() << " ";
        Stiva.pop();
    }

    cout << " , ";

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