#include<iostream>
using namespace std;
int main(){
int arr[10];
int product=1;
cout<<"Enter the (10) element of array :";
for(int i=0; i<=9; i++){
cin>>arr[i];
}
for(int i=0; i<=9; i++){
product=product*arr[i];
}
cout<<"The product of array element is :"<<product;
}
