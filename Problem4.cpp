//Write a C program to calculate profit or loss switch statement
#include<iostream>
using namespace std;

int main() {
    int purchase, sell, profit_loss;
    cin>>purchase>>sell;

    switch(profit_loss) {
 case 1:
    profit_loss=sell-purchase;
    cout<<profit_loss;
    break;

 default:
    cout<<"Invalid";
    break;

    }

}
