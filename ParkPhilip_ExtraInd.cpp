#include <iostream>
using namespace std;

bool primeSum(int check){
    if (check <= 1){
      return false;
    }

for (int i = 2; i <= check / 2; i++) {
    if (check % i == 0) {
      return false;
    }
}

return true;
}

int main() {

int prime = 0;
int num;

cout<< "Enter a number greater than 1: ";
cin>> num;

while (num <= 1) {
    cout<< "Sorry that is an invalid input."<<endl;
return 0;
}

for (int i = 0; i <= num; i++){
    if (primeSum(i) == true) {
    prime+=i;
    }
}

cout<<"Here is the sum of all the prime integers up to and including "<<num<<": "<<prime<<endl;
return 0;
}
