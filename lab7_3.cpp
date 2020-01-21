//status = "ONE-NIGHT-STAND";
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string status;
    int age,height,worth;

    cout<<"Enter age : ";
    cin>>age;
    if(age<=20)
    {
         cout<<"Enter your height : ";
         cin>>height;
         if(height<160)
{
     status="UNFRIEND";
}
         else if(height<175)
         {
             status="FRIEND";
         }
         else
         {
             cout<<"Enter your money : ";
             cin>>worth;
             if(worth>69000000)
             status="MARRIED";
             else
             {
                 status="ONE-NIGH-STAND";
             }
             
         }
         
         
    }
    else
    {
        if(age<30)
        {
          cout<<"Enter your money : ";
          cin>>worth;
          if(worth>10000000)
          status="BEST FRIEND";
          else
          {
              status="UNFRIEND";
          }
          
        }
        else
        {
            status="UNFRIEND";
        }
        
    }
   cout<<"Status : "<<status;

    return 0;
}