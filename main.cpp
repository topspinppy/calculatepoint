/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int amountstudents();
int calculatepoint(int amountpoints);

int main()
{
    int amountstudent = 0;
    amountstudent = amountstudents();
    calculatepoint(amountstudent);
    return 0;
}

int amountstudents () 
{
    int a = 0;
    cout<<"Please Specific Amount of Student : ";
    cin>>a;
    return a;
}

int calculatepoint (int amountpoints)
{
    int point[amountpoints][6];
    string des[6] = {"Affective Score","Homework Score","Assignment","Test","Midterm","Final"};
    int result[amountpoints];
    for(int n=0 ; n < amountpoints ; n++)
    {
        cout << "Student" << n+1 <<endl;
        cout << "-----------------------------------"<<endl;
        for(int p=0; p < 6; p++)
        {
            cout <<des[p]<<" Point"<<" "<<p+1<<" : ";
            cin>>point[n][p];
        }
        cout << "-----------------------------------"<<endl;
    }
    
    cout<<"Result Student" <<endl;
    for(int z=0 ; z < amountpoints ; z++)
    {
        result[z] = 0;
        for(int p=0; p < 6; p++)
        {
            result[z] += point[z][p];
        }
    }
    
    for (int e = 0 ; e < amountpoints ; e ++)
    {
        cout<<"Student "<<e+1<<" : "<<result[e]<<endl;
    }
    
}