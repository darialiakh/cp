#include <string>
#include <iostream>

using namespace std;

 class Patient   //класс пациентов
{
 protected:
   string name, surname, patronymic, address, diagnosis;
   int medcard;
 public:
   Patient ();
   Patient (string name_name, string surname_name, string patronymic_name, string address_name, int medcard_name, string diagnosis_name);
   void getData();
   void changeName();
   void changeAddress();
   void changeMedcard();
   void changeDiagnosis();

   /*Patient();
   Patient(string name, string surname, string patronymic, string address_name, int medcard);
   void getData();*/
};


class Children : public Patient  //производный класс
{
   public:
    Children() : Patient()
    {}
    Children(string name_name, string surname_name, string patronymic_name, string address_name, int medcard_name, string diagnosis_name) : Patient(name_name, surname_name, patronymic_name, address_name, medcard_name, diagnosis_name)
    {}
};
