#include<iostream>
using namespace std;

int main()
{

    // pointers is a datatype use to store address of a variable 

    int a = 10;
    int b = 20;

// *x is a pointer which is used to store address of a variable of same datatype
//  means a int pointer can store address of a int variable
// this & operator is a address of operator which gives us the adderess of variable  
    cout << "& is a address of operator which gives the address " << &a << endl;
    int *x = &a;
    cout << "pointer stores the address  let print it " << x << endl ;

    // (*) it iS also a drefferencing operator 
    // by which we can access and manipulate the value of variable whose address is stored in a pointer
    cout <<"printing value of a using drefferencing operator  " << *x << endl;

    *x =45 ;
    cout << "update  value of a using drefferencing operator updated value is  " << a << endl;

    // we can also alocate value of a to other variable using pointer ;
    int other_variable = *x;

    cout << "value of other variable is " << other_variable << endl;

    




    return 0;
}