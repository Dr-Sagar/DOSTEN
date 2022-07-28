#include<iostream>
using namespace std;

int main(){
    int num,original_num,remainder,result = 0;

    cout<<"Enter the number";
    cin>>num;

    original_num = num;

    while (original_num != 0){
        remainder = original_num % 10;
        result = result + (remainder * remainder * remainder);
        original_num = original_num /10;
    }

    if ( original_num == result){
        cout<<"This number is Armstrong";
    }
    else{
        cout<<"This number is not Armstrong";
    }
}

return 0;
}