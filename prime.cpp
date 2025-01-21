#include <iostream>

using namespace std;
//display prime number 0-1000, keep count of each prime number
//add 2 to each prime number and display
int main() {
    int prime=2;
    int pprime;
    int range=1000;
    int divisor;
    int count=0;
    

    for (pprime=3; pprime<=range; pprime+=2){
        
        for(divisor=3; divisor<=pprime; divisor+=2){
            
            if( (pprime%divisor) == 0){
                break;
            }
        }
        if (pprime == divisor){
            if (pprime - prime ==2){
            cout << "Prime ="<<prime<<'\t'<<"New Prime = "<< pprime <<endl;
            }
            count++;
            prime = pprime;
        }
    }
    cout << "Total primes = " << count <<endl;

}