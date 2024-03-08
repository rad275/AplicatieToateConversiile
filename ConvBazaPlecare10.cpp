    #include<iostream>
    #include<math.h>
    #include<stack>
    #include<vector>
    using namespace std;

stack<int> convZtoBOHI( double nrZec , int baza )
{
        stack<int> nrBinar;
        int intreg = (int)nrZec;
        double subUnitar = nrZec - intreg;

    while( intreg != 0 )
    {
        nrBinar.push( intreg % baza );
        intreg = intreg / baza;
    }
    
    return nrBinar;
}

vector<int> convZtoBOHS( double nrZec , int baza )
{
    vector<int> nrBinarSU;
        double subUN = nrZec - (int)nrZec;
    while( subUN - (int)subUN != 0 )
    {
        nrBinarSU.push_back(abs(subUN));
        subUN = subUN * baza;
        if( subUN - (int)subUN == 0 )
        nrBinarSU.push_back( (int)subUN );
    }
   
   return nrBinarSU;
} 