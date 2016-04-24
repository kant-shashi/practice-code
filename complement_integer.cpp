#include <iostream>
#include <cmath>

using namespace std;

int get_complement(int);

/**
 * main function calling the complement fucntion
 */
int main() {
    int n, complement, input_num;
    cin>>input_num;     //number of inputers to be taken
    while(input_num) {
        cin >> n;
        complement = get_complement(n);
        cout << complement << endl;
        --input_num;
    }

}


/**
 * method to return the complement of a positive integer in integer.
 */
int get_complement(int n) {
    int number = 0;
    int i = 0;
    int mod;
    if(n == 0)
        return 1;
    while(n) {
        mod = n % 2;            // getting the rightmost digit in binary(0/1)
        mod = !mod;             // inverting of bit is required for getting complement
        number += pow(2,i)*mod;         // converting bit into decimal again
        ++i;
        n = n/2;
    }
    return number;
}

