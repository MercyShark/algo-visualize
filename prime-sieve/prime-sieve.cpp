#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num1 = 1;
    int num2 = 20;
    vector<int> ans; 
    vector<int> primes(num2,1);
    primes[0] = primes[1] = 0;
    for(int i = 2; i < num2; i++){
        if(primes[i]){
            ans.push_back(i);
            primes[i] = 0;

            for(int j = i * i ; j < num2; j = j + i){
                primes[j] = 0;
            }
        }
    }

    for(auto x : ans){
        cout << x << " ";
    }
}