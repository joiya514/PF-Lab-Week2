#include <iostream>
using namespace std;
main (){
string name;
float MATRICmarks;
float FSCmarks;
float ECATmarks;
cout << "enter name: ";
cin >> name;
cout << "Enter Matric marks: ";
cin >> MATRICmarks;
cout << "Enter FSC marks: ";
cin >> FSCmarks;
cout << "Enter ECAT marks: ";
cin >> ECATmarks;
float MATRICpercentage;
float FSCpercentage;
float ECATpercentage;
MATRICpercentage = MATRICmarks * 100 / 1100;
FSCpercentage = FSCmarks * 100 / 1100;
ECATpercentage = ECATmarks * 100 / 1100;
float aggregate;
aggregate = (0.5 * ECATpercentage) + (0.4 * FSCpercentage) + (0.1 * MATRICpercentage);
cout << "Name: ";
cout << name << endl;
cout << "Aggregate: ";
cout << aggregate;

}