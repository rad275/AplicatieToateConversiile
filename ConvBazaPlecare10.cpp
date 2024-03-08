    #include<iostream>
    #include<math.h>
    #include<stack>
    #include<vector>
    using namespace std;

stack<int> convZtoBI( double nrZec )
{
        stack<int> nrBinar;
        int intreg = (int)nrZec;
        double subUnitar = nrZec - intreg;

    while( intreg != 0 )
    {
        nrBinar.push( intreg % 2 );
        intreg = intreg / 2;
    }
    return nrBinar;
}

vector<int> convZtoBS( double nrZec )
{
    vector<int> nrBinarSU;
        double subUN = nrZec - (int)nrZec;
        cout << subUN;
    while(abs(subUN) != 1)
    {
        nrBinarSU.push_back(abs(subUN));
        subUN = subUN * 2;
    }
    return nrBinarSU;
}

stack<int> convZtoOI( double nrZec )
{
        stack<int> nrOctal;
        int intreg = (int)nrZec;
        double subUnitar = nrZec - intreg;

    while( intreg != 0 )
    {
        nrOctal.push( intreg % 8 );
        intreg = intreg / 8;
    }
    return nrOctal;
}

vector<int> convZtoOS( double nrZec )
{
    vector<int> nrOctalSU;
    int subUN = nrZec - (int)nrZec;
    while(abs(subUN) != 1)
    {
        nrOctalSU.push_back(abs(subUN));
        subUN = subUN * 8;
    }

    return nrOctalSU;
}

stack<int> convZtoHI( double nrZec )
{
    stack<int> nrHexazecimal;
    int intreg = (int)nrZec;
    double subUnitar = nrZec - intreg;

    while( intreg != 0 )
    {
        nrHexazecimal.push( intreg % 16 );
        intreg = intreg / 16;
    }
    return nrHexazecimal;
}

vector<int> convZtoHS( double nrZec )
{
    vector<int> nrHexaSU;
    int subUN = nrZec - (int)nrZec;
    while(abs(subUN) != 1)
    {
        nrHexaSU.push_back(abs(subUN));
        subUN = subUN * 16;
    }
    return nrHexaSU;
}