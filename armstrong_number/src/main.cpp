#include <iostream>
#include <cmath>

using namespace std;
int check_armstrong_number(int number_to_check){

    int tempnumber = 0;
    while(number_to_check!=0){
        int each_digit = number_to_check%10;
        tempnumber = tempnumber + pow(each_digit,3);
        number_to_check = number_to_check/10;
    }
    return tempnumber;
}

int main(){

    int user_val;
    cout << "Please enter the number you wanna check" << '\n';
    cin >> user_val;
    int returned_val = check_armstrong_number(user_val);
    if (returned_val == user_val){
       cout << "Got an Armstrong number" << '\n'; 
    } else {
        cout << "Got not an Armstrong number" << '\n';
    }

}
