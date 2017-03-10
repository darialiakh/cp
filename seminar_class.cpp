#include "seminar_class.h"

Cat :: Cat()
{
   cout<< " Name= ";
   cin>>name;
   cout<< " Weight= ";
   cin>>weight;
}

Cat :: Cat (string name_name, int weight_name)
{
    name=name_name;
    weight=weight_name;
}

string Cat::getName()
{
    return name;
}

void Cat::getWeight()
{
    cout<<weight;
}

Cat ::~Cat()
{
    delete[] weight;
}



