//C++ code to get the angles of a triangle and show that the triangle is valid or not
#include<iostream>
using namespace std;

int main() {
  int n1,n2,n3,add;
  cin>>n1>>n2>>n3;

  add=n1+n2+n3;
  switch(add){
case 180:
    cout<<"Triangle is Valid";
    break;

default:
    cout<<"Triangle is invalid";
    break;
  }
}
