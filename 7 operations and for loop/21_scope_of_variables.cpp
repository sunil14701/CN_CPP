#include<iostream>
using namespace std;

int main(){ 
    int i = 10;
    cout << i << endl;  
// common doubt : ya if ya else exectute hoga an j toh banega hi banga so it should not give error. but scope toh end ho rah hai
    if(i==10){
        int j =12;
        cout << j << endl;
    }else {
        int j=122;
        cout << j << endl;
        // last bracket tak hi scope rehta hai varible ka
    }
    // cout << j << endl;// j scope is over 

    // same wit while 
    int k =10;
    while(k<20){
        int k2= 123;
        cout << k2 << endl;
        k++;
    }
    // cout << k2 << endl; // oout of scope


    int g = 34;
    // int g = 89; // declariaton of variable with same name is not allowed in same scope
    cout << g << endl;
    if(g == 34){
        int g = 100;
        cout << g << endl;
    }
    cout <<g <<  endl;


    // for loop mein
    for(int l=0;l<9;l++){
        cout << l << endl;// l ka scope 
    }
    // cout << l<< endl;// l is out of scope
    return 0;
}