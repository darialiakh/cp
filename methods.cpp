#include "header.h"


Patient :: Patient()
{
   cout<< " Name= ";
   cin>>name;
   cout<< " Surname= ";
   cin>>surname;
   cout<< " Patronymic= ";
   cin>>patronymic;
   cout<< " Address= ";
   cin>>address;
   cout<< " Medical record number= ";
   cin>>medcard;
   cout<< " Diagnosis= ";
   cin>>diagnosis;
}

Patient :: Patient (string name_name, string surname_name, string patronymic_name, string address_name, int medcard_name, string diagnosis_name)
{
    name=name_name;
    surname=surname_name;
    patronymic=patronymic_name;
    address=address_name;
    medcard=medcard_name;
    diagnosis=diagnosis_name;
}

void Patient::getData()
{
 cout<< " ########################################"<<endl;
 cout<< " Name=" <<name<<";"<<endl;
 cout<< " Surname=" <<surname<<";"<<endl;
 cout<< " Patronymic=" <<patronymic<<";"<<endl;
 cout<< " Address=" <<address<<";"<<endl;
 cout<< " Medical record number=" <<medcard<<";"<<endl;
}

void Patient::changeName() {
  cout << "New name: \n";
  cin >> name;
  cout << "New surname: \n";
  cin >> surname;
  cout << "New patronymic: \n";
  cin >> patronymic;
}

void Patient::changeAddress() {
  cout << "New address: \n";
  cin >> address;
}

void Patient::changeMedcard() {
  cout << "New medical card number: \n";
  cin >> medcard;
}

void Patient::changeDiagnosis() {
  cout << "New diagnosis: \n";
  cin >> diagnosis;
}
