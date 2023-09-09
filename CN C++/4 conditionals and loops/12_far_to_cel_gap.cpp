#include<iostream> 
using namespace std;

int far_to_cel(int far){
    return (5.0/9) * (far-32);
}

int main(){
    // far to cel steps
    int S, E, W;
    cin >> S >> E >> W;
    while(S<=E){
        cout <<S << " " << far_to_cel(S) << endl;
        S = S + W;
    }
    return 0;
}