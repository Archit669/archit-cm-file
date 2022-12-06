#include<iostream>
#include<math.h>
/* Define function here */
#define f(x) 1/(1+pow(x,2))
using namespace std;
int main(){
    cout << "Name : Archit Jain" << endl;
    cout << "Roll No. : 72-CSEB-21" << endl;
    cout << "Exp. Topic : Trapezoidal Rule" << endl;
    cout << "Given Ques. : Evaluate the Integral of the Following Function - Integral of (1/1+x^2)dx \n" << endl;
 float lower, upper, integration=0.0, stepSize, k;
 int i, subInterval;
 /* Input */
 cout<<"Enter Lower Limit of Integration : ";
 cin>>lower;
 cout<<"Enter Upper Limit of Integration : ";
 cin>>upper;
 cout<<"Enter Number of Sub Intervals : ";
 cin>>subInterval;
 /* Calculation */
 /* Finding step size */
 stepSize = (upper - lower)/subInterval;
 /* Finding Integration Value */
 integration = f(lower) + f(upper);
 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*stepSize;
  integration = integration + 2 * (f(k));
 }
 integration = integration * stepSize/2;
 cout<< endl<<"Required Value of Integration is : "<< integration;
 return 0;
}