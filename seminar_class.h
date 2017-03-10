#include <string>
#include <iostream>

using namespace std;

 class Cat   //класс кошачих
{
 protected:
   string name;
   int weight;
 public:
   Cat ();
   Cat (string name_name, int weight_name);
   ~Cat ();
   string getName();
   void getWeight();
};


  class Lion : public Cat  //производный класс
   {
      public:
       Lion() : Cat()
       {}
       Lion(string name_name, int weight_name) : Cat(name_name, weight_name)
       {}
   };

  class Tiger : public Cat  //производный класс
   {
      public:
       Tiger() : Cat()
       {}
       Tiger(string name_name, int weight_name) : Cat(name_name, weight_name)
       {}
   };
