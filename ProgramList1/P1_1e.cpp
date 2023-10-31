/*WAC++P to input elements in array and print all negative elements.*/
#include <iostream>
using namespace std;
int main(){
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to input elements in array and print all negative elements."<<endl;
    int n,i,j=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"\nThe negative numbers are:\n";
    for(i=0; i<n; i++) {
        if (arr[i]<0){
        cout<<arr[i];
        j++;
        }
    }
    cout << "\nThere are " << j << " negative numbers.";
    return 0;
}