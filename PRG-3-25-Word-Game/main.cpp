//
//  main.cpp
//  PRG-3-25-Word-Game
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that plays a word game with the user. The program should ask the
//  user to enter the following:
//
//  * His or her name
//  * His or her age
//  * The name of a city
//  * The name of a college
//  * A profession
//  * A type of animal
//  * A pet's name
//
//  After the user has entered these items, the program should display the following story,
//  inserting the user's input into the appropriate locations:
//
//  There once was a person named [NAME] who lived in [CITY]. At the age of [AGE]
//  [NAME] went to college at [COLLEGE]. [NAME] graduated and went to work as a
//  [PROFESSION]. Then, [NAME] adopted a(n) [ANIMAL] named [PETNAME]. They both lived
//  happily ever after!

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string strName,
           strAge,
           strCity,
           strCollege,
           strProfession,
           strAnimal,
           strPetsName;
    
    cout << "Please enter your name: " << endl;
    getline(cin, strName);
    
    cout << "Please enter your age: " << endl;
    getline(cin, strAge);
    
    cout << "Please enter the name of a city: " << endl;
    getline(cin, strCity);
    
    cout << "Please enter the name of a college: " << endl;
    getline(cin, strCollege);
    
    cout << "Please enter the name of a profession: " << endl;
    getline(cin, strProfession);
    
    cout << "Please enter the name of an animal: " << endl;
    getline(cin, strAnimal);
    
    cout << "Please enter a pet's name: " << endl;
    getline(cin, strPetsName);
    
    cout << "There once was a person named " << strName << " who lived in " << strCity << ". At the age of " << strAge << "," << endl
         << strName << " went to college at " << strCollege << ". " << strName << " graduated and went to work as a " << endl
         << strProfession << ". Then, " << strName << " adopted a(n) " << strAnimal << " named " << strPetsName << ". They both lived" << endl
         << "happily ever after!" << endl;
    
    return 0;
}


