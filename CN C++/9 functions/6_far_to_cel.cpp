#include<iostream>
using namespace std ;

int far_to_cel(double far){
    int cel = (5*1.0/9) * (far-32); 
    return cel;
}

void far_to_cel_table(int S, int E, int W){
    for(int i=S;i<=E;i+=W){
        cout << i  << " "<< far_to_cel(i) << endl;
    }

}

int main(){
    int S, E, W;
    cin >> S >> E >> W;
    far_to_cel_table(S,E,W);
    return 0;
}