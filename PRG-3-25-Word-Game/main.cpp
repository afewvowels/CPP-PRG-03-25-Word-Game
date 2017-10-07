//
//  main.cpp
//  PRG-3-25-Word-Game
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string strName,
           strCity,
           strCollege,
           strProfession,
           strAnimal,
           strPetsName;
    
    int intAge;
    
    cout << "Please enter your name: " << endl;
    cin >> strName;
    
    cout << "Please enter your age: " << endl;
    cin >> intAge;
    
    cout << "Please enter the name of a city: " << endl;
    cin >> strCity;
    
    cout << "Please enter the name of a college: " << endl;
    cin >> strCollege;
    
    cout << "Please enter the name of a profession: " << endl;
    cin >> strProfession;
    
    cout << "Please enter the name of an animal: " << endl;
    cin >> strAnimal;
    
    cout << "Please enter a pet's name: " << endl;
    cin >> strPetsName;
    
    cout << "There once was a person named " << strName << " who lived in " << strCity << ". At the age of " << intAge << "," << endl
         << strName << " went to college at " << strCollege << ". " << strName << " graduated and went to work as a " << endl
         << strProfession << ". Then, " << strName << " adopted a(n) " << strAnimal << " named " << strPetsName << ". They both lived" << endl
         << "happily ever after!" << endl;
    
    return 0;
}


