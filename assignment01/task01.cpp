/*Write a program to check the divisibility of two numbers. Use the concept of default argument here. If the number is not divisible, check whether the first number is a prime or not, using the previouslb defined divisibility check function.*/

#include<iostream>
using namespace std;

void test(int a,int b=0)
{
     if(a%b == 0 || b%a==0) 
     {
         cout<<"Divisible"<<endl;
         if(a>b)
         {
           cout<<"Result="<<a<<"/"<<b<<"="<<a/b;
           }

         if(b>a)
         {
           cout<<"Result="<<b<<"/"<<a<<"="<<b/a;
         }

         return ;
     }

     else
     {
         cout<<"Not Divisible "<<endl;
         cout<<"== Prime Testing =="<<endl;
          for(int n=2; n<a; n++)
          {
               if(a%n == 0)
               {
                  
                  cout<<a<<" Not a prime number"<<endl;
                  return ;
               }
          }
     }

  cout<<a<<" Prime Number"<<endl;
}

int main()
{
    int a,b;
    cout<<"Insert first value : ";
    cin>>a;

    cout<<"Insert second value : ";
    cin>>b;

    test(a,b);

}
