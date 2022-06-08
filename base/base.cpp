#include <iostream>
using namespace std;

int main()
{
  cout << "Please enter a radius: ";
  float radius = 2.0;
  cin >> radius;

  float PI = 3.14159;
  float area = PI * radius * radius;
  cout << "Area of circle with radius " << radius << " is " << area << endl;

  char character = 'a';
  cout << "Character is " << character << endl;


  int yearOfBirth = 1973;
  char gender = 'f';
  bool isTrue = false;
  float averageGrade = 4.5;
  double doubleSizeOfFloat = 45678945856;

  cout<<"Size if int is"<<sizeof(int)<<" bytes\n";
  cout<<"Int min value is "<< INT_MIN << endl;
  cout<<"Int max value is "<< INT_MAX << endl;
  cout<<"Size if float is"<<sizeof(float)<<" bytes\n";
  cout<<"Float min value is "<< FLT_MIN << endl;
  cout<<"Float max value is "<< FLT_MAX << endl;
  cout<<"Size if double is"<<sizeof(double)<<" bytes\n";
  cout<<"Double min value is "<< DBL_MIN << endl;
  cout<<"Double max value is "<< DBL_MAX << endl;
  cout<<"Size if char is"<<sizeof(char)<<" bytes\n";
  cout<<"Char min value is "<< CHAR_MIN << endl;
  cout<<"Char max value is "<< CHAR_MAX << endl;
  cout<<"Size if bool is"<<sizeof(bool)<<" bytes\n";
  cout<<"Bool min value is "<< false << endl;
  cout<<"Bool max value is "<< true << endl;
  cout<<"Size if yearOfBirth is"<<sizeof(yearOfBirth)<<" bytes\n";
  cout<<"Size ou unsigned int is"<<sizeof(unsigned int)<<" bytes\n";
  cout<<"Size of long is"<<sizeof(long)<<" bytes\n";
  cout<<"Size of long long is"<<sizeof(long long)<<" bytes\n";
  cout<<"Size of short is"<<sizeof(short)<<" bytes\n";
  cout<<"Size of unsigned short is"<<sizeof(unsigned short)<<" bytes\n";
  cout<<"Size of unsigned long is"<<sizeof(unsigned long)<<" bytes\n";





  system("pause > 0");
  return 0;
}
