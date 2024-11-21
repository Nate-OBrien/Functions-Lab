/*
* Name: Nathan O'Brien
* Date: 11/21/24
* Program: Functions Lab
*/

#include <iostream>
using namespace std;

void countdown();
void customGreet(string name, int times);
int getFavoriteNumber();
float calculateAverage(float a, float b, float c);

int main(){
    //define variables
    string name;
    int times;
    float a, b, c;
    
    //call function 1
    countdown();

    //gets input
    cout << "Enter first name: ";
    cin >> name;
    cout << "Enter times: ";
    cin >> times;
    customGreet(name, times);
    
    //assigns function 3 to a value and prints
    int value = getFavoriteNumber();
    cout << "Your favorite number is: " << value << endl;

    //gets three numbers
    cout << "Enter int a: ";
    cin >> a;
    cout << "Enter int b: ";
    cin >> b;
    cout << "Enter int c: ";
    cin >> c;

    //gets return from function 4 and prints
    float avg = calculateAverage(a, b, c);
    cout << "The average is: " << avg;

    return 0;
}

//defs

void countdown(){
    //goes through the loop, prints lift off at end
    for(int i = 10; i > 0; i--){
        cout << i << endl;
    }
    cout << "Lift off!" << endl;
}

//gets input, prints name times times
void customGreet(string name, int times){
    for (int i = 0; i < times; i++){
        cout << name << endl;
    }
}

//returns the number
int getFavoriteNumber(){
    return 7;
}

//returns average number
float calculateAverage(float a, float b, float c){
    return (a + b + c)/3;
}