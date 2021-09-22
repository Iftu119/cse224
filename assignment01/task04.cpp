/* Write a program to create a class named 'height', containing variable 'feet', 'inch'. Create two objects of the class, set some value to the first class. Then increment that object by 1 and assign this object to the second object. Display the results of both object after the procedure is completed. */


#include<iostream>
using namespace std;


class height
{
    public:
        int feet;
        int inch;
};

int main()
{
    class height val01, val02;

    cout << "\t === Insert the values === \t" << endl;

    cout<<"Value for feet entitled as val01: ";
    cin>>val01.feet;

    cout<<"Value for inch entitled as val02: ";
    cin>>val01.inch;

    //The feet and inch conversion needs to take place as well.
    // 12 inches = 1 feet 
    // Ignoring decimal Point

    if(val01.inch >= 12) 
    {   
        cout<< endl<<"Conversion" << endl;
        int conv = val01.inch, unitShift;
        unitShift = conv%12;
        conv /= 12;
        //conv = conv/12;
        val01.feet = val01.feet+conv;
        val01.inch = unitShift;


        cout<<"Converted Feet : " << val01.feet << endl;

        cout<<"Converted Inch : " << val01.inch << endl;
        
    }

    //Incrementation

    val02.feet = val01.feet+1; 
    val02.inch = val01.inch+1;

    cout<<"Result of Incremented values the objects by 1 : "<<val02.feet<<" feet "<<val02.inch<<" inches"<< endl;

   cout<< endl<<"\t === Sumary === \t"<< endl<< "Input : " <<val01.feet<<" feet "<<val01.inch<<" inches (Converted if required)" << endl<< "Output : " <<val02.feet<<" feet "<<val02.inch<<" inches"; 
    
}
