#include <iostream>
using namespace std;

int number = 42;

int printDouble(int number)
{
   double decimal = 7.8;
   // cout<<decimal<<endl;
   return decimal;
}
char c = 'A';
int chara(char c)
{

   int ascii = c;
   return c;
}

int main()
{
   int intVal = 10;
   double dubleval = 3.5;

   double result = intVal + dubleval;

   cout << "10(int)+3.5(double)+" << result << "(double)" << endl;
   cout << printDouble(number) << endl;
   cout << chara(c) << endl;
}