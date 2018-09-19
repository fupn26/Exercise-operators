// simple program to exercise operators
//#include "std_lib_facilities.h"
//int main()
//{
//cout<<"Please enter a floatin_point value: ";
//double n;
//cin>>n;
//cout<<"n == "<<n
//<<"\nn+1 == "<< n+1
//<<"\nthree times n == "<<3*n
//<<"\ntwice n == "<< n+n
//<<"\nn squared == "<<n*n
//<<"\nhalf og n == "<<n/2
//<<"\nsquare root of n == "<<sqrt(n)
//<<'\n';
//}

//Try this section ch3.4
#include "std_lib_facilities.h"
int main()
{
cout<<"Please enter an integer: ";
int n;
cin>>n;
cout<<"n == "<<n
<<"\nn+1 == "<< n+1
<<"\nthree times n == "<<3*n
<<"\ntwice n == "<< n+n
<<"\nn squared == "<<n*n
<<"\nhalf og n == "<<n/2
<<"\nsquare root of n == "<<sqrt(double (n))
<<"\nmodulo divison of n with 2 == "<<n%2
<<"\ninteger division of n with 2 == "<<n/2
<<'\n';
}
