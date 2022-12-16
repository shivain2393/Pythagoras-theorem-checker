//Pythagoras theorem checker
#include <iostream>
using namespace std;
float h,b,ht;

int main(){
cout<<"Enter the value of Hypotenuse: ";
cin>>h;

cout<<"Enter the value of Base: ";
cin>>b;

cout<<"Enter the value of Height: ";
cin>>ht;

float sum;
sum = b*b + ht*ht;

cout<<endl<<"Checking for Pythagoras theorem..."<<endl;

cout<<endl<<"Hypotenuse = "<<h<<endl<<"Base = "<<b<<endl<<"Height = "<<ht<<endl;

cout<<endl<<"Since,"<<endl;

if(h*h==sum){

    cout<<endl<<h*h<<" = "<<b*b<<" + "<<ht*ht;
    cout<<endl<<h*h<<" = "<<sum<<endl;

    cout<<endl<<"The following values satisfy Pythagoras theorem.";
}
else{

    cout<<endl<<h*h<<" != "<<b*b<<" + "<<ht*ht;
    cout<<endl<<h*h<<" != "<<sum<<endl;

    cout<<endl<<"The following values  does not satisfy Pythagoras theorem.";
}

return 0;
}