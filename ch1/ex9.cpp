// prime factorization
#include <iostream>
#include <list>
using namespace std;

list<int> primeFactorization(int data);
bool isPrime(int num);
int main(){
    int data;
    list<int> primes;
    cout << "This program can solve prime factorization problem" << endl;
    cout << "Enter the number for factorization: ";
    cin >> data;
    primes = primeFactorization(data);
    cout << primes.front();
    primes.pop_front();
    for(auto it = primes.begin(); it != primes.end(); ++it){
        cout << "  x " << *it;
    }
    cout << endl;
    return 0;
}

list<int> primeFactorization(int data){
    list<int> primes;
    while(!isPrime(data)){
        for(int i=2; i <= data/2; i++){
                if(data % i == 0){
                    primes.push_back(i);  
                    data = data/i;
                    break;         
                }
            }           
    }
    primes.push_back(data);
    return primes;
}

bool isPrime(int num){
    for (int i = 2; i <= num/2; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}