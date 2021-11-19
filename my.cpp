#include "my.h"
#include "std_lib_facilities.h"

int foo;

//print the value of foo
void print_foo()
{
 cout << foo << endl;
}

//print a given int
void print(int i)
{
 cout << i << endl;
}

//function to keep the window open
void keepWindowOpen()
{
 char c;
 cout << "\nPress any key to quit: ";
 cin >> c;
}

