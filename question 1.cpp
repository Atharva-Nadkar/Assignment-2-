
//  Created by Atharva Nadkar on 21/06/20.
//  Copyright © 2020 Atharva_Nadkar. All rights reserved.
//  Program to check whether a user of certain age is eligible to vote or not

#include<algorithm>
#include<stdio.h>
#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<sstream>

using namespace std;
 
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int age=1;
    cout<<"Enter Age of a user to check whether he or she is eligible to vote or enter 0 to exit:\n";
    while(age!=0)
    {cin>>age;
    
    if(age >=18)
    {
        cout<<"this user is eligible for voting\n";
    }
    if(age>0 && age<18)
        cout<<"this user is not eligible for voting\n";
    }
    return 0;
}
