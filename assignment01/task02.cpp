/* Write a program to create a class named 'vehicle', containing variable 'brand', 'horsepower'. Create two objects of the class, then set some values for the first object and use that first object to initialize the second object. Finally display the values of both objects of the defined class. */

#include<iostream>
using namespace std;

class vehicle
{
    public:
    int horsepower;
    string brand;

    vehicle(string brandName,int hP)
    {
        brand = brandName;
        horsepower = hP;
    }
};

int main()

{
    vehicle model1("Elon Bezos",1802119);

    cout<<"\t \t == First Object value == \t \t  "<<endl;
    cout<<"First Object value: "<< endl;
    cout<<"Model: "<<model1.brand<< endl;
    cout<<"Power: "<<model1.horsepower <<" HP \n"<< endl;
    
    // Initiating Second Object

    vehicle model2 = model1; 
    cout<<"\t \t == Second Object value == \t \t  "<<endl;
    cout<<" Model: "<<model2.brand<< " 2030 Edition"<<endl; //Changed Name
    cout<<" Power: "<<model2.horsepower+100 <<" HP \n" <<endl; //Changed HorsePower
    
}
