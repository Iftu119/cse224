/*Write a program to create a class named 'ageCalculator', containing variable 'year', 'month'.Create two objects of the class, one containing current year, month and another containing your born year, month.Subtract and show the difference between two date by using both member function and friend function.*/
 
#include<iostream>
using namespace std;
 
class ageCalculator
{
    int year;
    int month;
 
public:
 
    ageCalculator(int m, int y)
    {
        month = m;
        year = y;
    }
 
    friend void mathOp (ageCalculator current,ageCalculator born);
};
 
void mathOp (ageCalculator current,ageCalculator born)
 
{
    int y,m;
 
    if(born.year >= current.year)
 
    {
        cout<<"INVALID";
    }

    else
    {
        y = current.year - born.year;
 
        if(current.month >= born.month) m = current.month - born.month;

        else
        {
            y-- ;
            m = current.month + (12 - born.month);
        }
        cout<<"\t \t == Age Calculation == \t \t "<<endl;
        cout<<"The age of the person is : "<<endl <<"Years : "<<y<<endl <<"Months : "<<m <<endl;
    }
 
}
 
int main()
{
    int year,month;
 
    cout<<"Insert born month please : ";
    cin>>month;
 
    cout<<"Insert born year please : ";
    cin>>year;
 
    ageCalculator born(month,year);
 
    cout<<"What is the current month ? " << endl;
    cin>>month;

    cout<<"What is the current year ? " << endl;
    cin>>year;
 
    ageCalculator current(month,year);
    mathOp (current,born);
}
