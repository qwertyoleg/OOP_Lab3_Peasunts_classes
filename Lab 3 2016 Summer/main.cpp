//
//  main.cpp
//  Lab 3 2016 var 2 (Peasant simulation) Summer
//
//  Created by Oleg Petrushov on 5/26/16.
//  Copyright © 2016 XcoderUA. All rights reserved.
//


#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
//
class Peasant
{
private:
    string name;
    float skill;
    float motivation;
public:
    //Constructor
    Peasant()
    {
        name = "Peasant 1";
        int randomInteger = 0;
        motivation = 1;
        //setting seed for random value
        srand(time(NULL));
        randomInteger = rand()%51+10;
        skill = (float)randomInteger/100;
    }
//TO DO: Make this metod in TradeUnion class
// (delete this method after)
    void currentStatus()
    {
        cout<<"\nPeasant name is: "<<name<<endl;
        cout<<"Peasant skill is: "<<skill<<endl;
        cout<<"Peasant motivation:"<<motivation<<"\n";
    }
    void chopWood()
    {
        //Day spend for choping wood
        skill = 0.05*(1-skill);
        motivation/=2;
    }
    void farm()
    {
        motivation = 0.7*(1-motivation);
        //skill stays unchanged
    }
    void setNameByString(string newName)
    {
        name = newName;
    }
    string getName()
    {
        //string nameForPrint
        return name;
    }
};

int main(int argc, const char * argv[])
{
    
//    float t = 5;
//    t/=2;
//    cout<<"\nt="<<t<<endl;
    Peasant Pe = *new Peasant();
    //Pe.setNameByString("Peasent One");
    Pe.currentStatus();
    Pe.chopWood();
    Pe.currentStatus();
    
    Pe.chopWood();
    Pe.currentStatus();
    
    Pe.farm();
    Pe.currentStatus();
    
    Pe.farm();
    Pe.currentStatus();
    
    Pe.farm();
    Pe.currentStatus();
    //cout<<Pe.getName();
    
   
    
    return 0;
}
