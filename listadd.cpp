#include <vector>

using namespace std;

int main(vector<int> arr){

    int sum = 0;

    for (int i = 0; i < arr.size(); ++i){
        sum += arr[i];
    }

    return sum;

}

int multiply(vector<int> arr){

    int product = 1;

    for (int i = 0; i < arr.size(); ++i){
        product = product * arr[i];
    }

    return product;

}