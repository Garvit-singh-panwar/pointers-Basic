#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    float b = 4.5f;
    double c = 6.89;


    // when we incriment it changes the memory address according to the datatype type of variable 
    // for example if we make a pointer of int datatype so when  we add 1 in the pointer it incriment pointer with the size of int 

    // lets see 

    int *ptr = &a;
    float *ptrF = &b;
    double *ptrd = &c;
    cout << "address are in hexadecimal form " << endl << endl;

    cout << "initial address of double pointer is " << ptrd << endl;
    ptrd++;
    cout << "address after adding 1 in the pointer "<< ptrd << endl << endl;

    cout << "initial address of float pointer is " << ptrF << endl;
    ptrF++;
    cout << "address after adding 1 in the pointer "<< ptrF << endl << endl;

    cout << "initial address of int pointer is " << ptr << endl;
    ptr++;
    cout << "address after adding 1 in the pointer " << ptr << endl << endl ;

  
   


// we can clearly see that address is incrementing according to the datatype 
// of the pointer or variable which is stored in the variable

// what is the use case of this 

// it is useful in arrays 
// and als the name of the array is a pointer which stores the address of 1st element of a array which is array{0 
 
 int array[5] = {1,2,3};

 int *arrPtr = &array[0];

cout << "address of array[0] is " << &array[0] << endl;
cout << "address using pointer " << arrPtr << endl;
cout << "cout array name " << array << endl; 

// the address of all are same because array name is also a pointer allocated to array[0];

//  so if we want to access elements of array you can also increment array and access them 

// eg.

cout << "Array [1] address is " << array+1 <<" value is " << *(array+1) << endl;
 
// there are many types of increment and decrement operations 
// post increment pre increment post decrement pre deecrement


int increment[5]= {1,2,3,4,5};
 
int *ptrInc = increment;

cout << "post increment in pointer " << *ptrInc++ << endl;
cout << "after post increment in pointer " << *ptrInc << endl;

cout << endl;

cout << "pointer before pre increment " << *ptrInc << endl;
cout << "preincrement in pointer  " << *++ptrInc << endl;

cout << endl;

cout << " pre increment updating value " << ++*ptrInc <<  endl;
cout << "address of pointer after incrementing value " <<  ptrInc << endl; 
cout << "increment pointer to see pre increment value " << *++ptrInc << endl;
cout << "address of pointer after incrementing pointer " << ptrInc << endl;
 
// we can also make  2D arrays using pointers 
// we can put array in a pointer array 

int array1D[5]={1,2,3,4,5};
cout << endl;
int *ptr1D[3] = {array1D};
// ptr1d stores the address of pointer array1D which stores the value of 1st element of 1D array
cout <<" address of ptr of 1d array  " << ptr1D << endl;
// when we derefference ptr1D it gives the address of 0th indxed element which is 1st element of the array
cout << "vlaue inside ptr1D is " << *ptr1D  << endl;
//  we can see that here
cout << "address of array1D is " << array1D << endl; 

cout << endl;
//  we can also access elements of array1D 
//  we are incrementing the derefferenced value of array which is elemnts of array
++*ptr1D;
//  then we drefference the derefferenced array to access the value an =d we can also update and manipulate it

cout << "increment array using pointer " << *(*ptr1D) << endl;
// thats how we make a 2D array using pointer
    return 0;
}