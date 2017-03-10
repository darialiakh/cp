#include "seminar_class.h"

using namespace std;

int main()
{
   Lion a; // приклад поліморфізму, метод з батьківського класу використовується в похідному
    a.getName();
    
    Tiger b;
    b.getName();
   
   int n;
   cout<< "How objects do you want to create? " <<endl;
   cin>>n;

   Cat *cat = new Cat[n];
   for (int i = 1; i <= n; ++i)
   {
       if(i%2)
       {
           cat[i] = Lion ("lion", 50+i);
       }
       else
       {
           cat[i] = Tiger ("Tiger", 40+i);
       }
   }

   for (int i = 1; i < n; ++i)
   {
       cout<< "Name: ";
       cout<< cat[i].getName()<< i;
   }

    cin.get();
    cin.get();
    return 0;
}

