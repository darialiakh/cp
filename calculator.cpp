#include <iostream>
#include<cmath>
using namespace std;

int dod (int x,int y)
{
   int s;
   s=x+y;
   return (s);
}
int vid (int x,int y)
{
   int s;
   s=x-y;
   return (s);
}
int mn (int x,int y)
{
   int s;
   s=x*y;
   return (s);
}
int dil (int x,int y)
{
   int s;
   s=x/y;
   return (s);
}
int main()
{
    char ss;

    do
{
    float x, y, s;
    char o;
    cin >> x >> o >> y;

    switch(o)
{
    case'+':
        s=dod(x,y);
               break;
    case'-':
        s=vid(x,y);
               break;
    case'*':
        s=mn(x,y);
               break;
    case'/':
        s=dil(x,y);
               break;
    default: cout << "Ne virno";
}
    cout << x << o << y << "=" << s << endl;

    cout << "Continue? (y/n)" << endl;
    cin >> ss;

}  while (ss == 'y');
    return EXIT_SUCCESS;

}
