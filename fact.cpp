#include <bits/stdc++.h>
using namespace std;

main ()
{
    int n , a=0 , d=0 ;
    char j ;

    cin >> n;
    for ( int i=0 ; i < n ; i++)
    {
        cin >> j;
        if ( j == " A ")
        {
            a++;
        }
        if ( j == " D ")
        {
            d++;
        }
    }
    if ( a > d )
        cout << " ANTON" << endl;
    else if ( a < d)
        cout << " DANIK" << endl;
    else if ( a=d)
        cout << " FRINDSHIP" << endl;

}
