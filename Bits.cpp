#include <iostream>
using namespace std;
main (){
float megabytes;
float kilobytes;
float bytes;
float bits;
cout << "Enter megabytes: ";
cin >> megabytes;
kilobytes = megabytes * 1024;
bytes = kilobytes * 1024;
bits = bytes * 8;
cout << "bits: ";
cout << bits;


}