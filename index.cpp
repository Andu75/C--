#include <iostream>
#include <string>
#include <sstream>

using namespace::std;

int main()
{
 string sir;
 float price=0;
 int quantity=0;

cout << "Enter the price: " <<endl;
getline (cin,sir);
stringstream(sir) >> price;
cout << "Enter the quantity: " << endl;
getline (cin,sir);
stringstream(sir) >> quantity;
cout << "The total price is: " << price*quantity << endl;

}