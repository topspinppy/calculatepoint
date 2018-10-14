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
    /*1. เริ่มที่ Main Program ประกาศ int amountstudent เพื่อรับจำนวนนักศึกษา */
    int amountstudent = 0;
    /*2. ดูที่ฝั่งซ้าย amountstudents(); และลงไปดูฟังก์ชั่นล่าง */
    amountstudent = amountstudents();
  
    /*4. เอา amountstudent ที่มีค่าตามที่ผู้ใช้กรอกมา ส่งไปคำนวณต่อที่ฟังก์ชั่น amountstudent*/
    calculatepoint(amountstudent);
    return 0;
}


int amountstudents () 
{
    /*3. ฟังก์ชั่นนี้จะใช้ในการรับค่าจากผู้ใช้ และ ส่งกลับไปให้ข้อ 2 จะเห็นจากข้อสองว่าฝั่งขวามีตัวแปรมารับ ซึ่งก็มาจากข้อ 1 อีกที*/
  
    /*3.1 ประกาศ int a = 0 เพื่อเอามารับค่าจากผู้ใช้ */
    int a = 0;
    cout<<"Please Specific Amount of Student : ";
    cin>>a;
    /*3.2 รับค่าจากผู้ใช้ไปใส่ตัวแปร a*/
  
    /*3.3 Return ตัวแปร A กลับไปให้ข้อ 2 ซึ่งจะมีค่าตามที่ผู้ใช้กรอกลงไป*/
    return a;
}

/* 5. รับค่า parameter มาตัวนึงจากข้อ 4 เพื่อเอามาคำนวณ */
int calculatepoint (int amountpoints)
{
    /* 6. ปรกาศตัวแปร point ที่เป็น 2d array ที่มี amontpoints เป็นตัวกำหนดว่าจะมีนักศึกษากี่คน และ 6 เป็นช่องที่เก็บคะแนนของนักศึกษาแต่ละคน */
    int point[amountpoints][6];
    /* ประกาศ des ขึ้นมา เพื่อความสวยงามของโปรแกรม */
    string des[6] = {"Affective Score","Homework Score","Assignment","Test","Midterm","Final"};
    /* เอาผลที่ได้จากการเก็บลงในตัวแปรของข้อ 6 มาบวกกันแล้วใส่ลงใน Array result */
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
