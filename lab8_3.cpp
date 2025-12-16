/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string Character;
    long long age, height, bounty;
    cout<< "Enter your age: ";
    cin >> age;
    if (age <= 25){
        cout<< "Enter your height: ";
        cin >> height;
        if (height < 100){
            Character = "Chopper";
            cout << "Your character = "<< Character;
        }else if (height < 180){
            Character = "Usopp";
            cout << "Your character = "<< Character;
        }else if (height >= 180){
            cout << "Enter your bounty: ";
            cin >> bounty;
            if (bounty <= 1100000000){
                Character = "Sanji";
                cout << "Your character = "<< Character;
            }else if (bounty > 1100000000){
                Character = "Zoro";
                cout << "Your character = "<< Character;
            }
        }
    }else if (age <= 60){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if (bounty <= 500000000){
            Character = "Franky";
            cout << "Your character = "<< Character;
        }else if (bounty > 500000000){
            Character = "Jinbe";
            cout << "Your character = "<< Character;
        }
    }else{
        Character = "Brook";
        cout << "Your character = "<< Character;
    }
}