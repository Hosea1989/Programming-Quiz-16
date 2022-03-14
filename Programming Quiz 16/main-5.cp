//
//  main.cpp
//  Prog_Quiz_16
//
//  Created by Damien Hosea on 11/14/19.
//  Copyright © 2019 Damien Hosea. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

// A template function
template <class T>
T total (const vector<T> &v)
{
   T total = 0;
    for (T elem : v)
        total += elem;
    return total;
}

//Function main()
int main()
{
    int num = 0; //Variable num to hold ints ands doubles

    cout << " How many INTEGERS are there? ";
    cin >> num;
    
    vector <int> I (num); //vector accepting an Int
    for (int i = 0; i < num; ++i) //will load numbers into vector
    {
        cout << "Enter INTEGER #" << i + 1 << ": ";
        cin >> I.at(i);
    }
    cout << total(I) << endl; //Passing instantiated I to to function.
    cout << "How many DOUBLES are there?: ";
    cin >> num;
    
    vector <double> D (num); //Vector now accepting DOUBLES
    for (int i = 0; i < num; ++i) //Loading doubles into I
    {
        cout << "Enter DOUBLE #" << i + 1 << ": ";
        cin >> D.at(i);
    }
    cout << total(D) << endl;

    return 0;
}
