//Write a program that contain 5 different button and if you press on any button it will say hello in different language.
#include<iostream>
using namespace std;
int main() {
    int button;
    cin>>button;

    switch(button) {
case 1:
    cout<<"Hello";
    break;

case 2:
    cout<<"Namaste";
    break;

case 3:
    cout<<"Salut";
    break;

case 4:
    cout<<"hola";
    break;

case 5:
    cout<<"Ciao";
    break;

default:
    cout<<"I am learning for more process";
    break;
    }
}
