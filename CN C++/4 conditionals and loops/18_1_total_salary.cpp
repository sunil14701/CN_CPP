#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // Q find the total salary .totalSalary = basic + hra + da + allow – pf.
    // hra   = 20% of basic
    // da    = 50% of basic
    // allow = 1700 if grade = ‘A’
    // allow = 1500 if grade = ‘B’
    // allow = 1300 if grade = ‘C' or any other character
    // pf    = 11% of basic.

    int basic_salary;
    char grade;
    cin >> basic_salary >> grade;

    float hra = 0.2 * basic_salary;
    float da = 0.5 * basic_salary;

    int allow=0;
    if(grade == 'A') allow = 1700;
    else if(grade == 'B') allow = 1500;
    else allow = 1300;

    float pf = 0.11 * basic_salary;

    float total_salary = round(basic_salary + hra + da  + allow - pf);
    cout << "your salary is : " << total_salary; 
    return 0;
}