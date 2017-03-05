#include "header.h"

int main()
{
  cout<< "### Our patients: ###"<< endl;
  Patient();

  Patient a("Sasha", "San", "Sansan", "Shevchenka, 44", 4567, "gastritis");   //створення об’єкта
  a.getData();
  a.changeName();

  cin.get();
  cin.get();
  return 0;
}



