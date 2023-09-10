#include <vector>
#include <iostream>

using namespace std;

int add(vector<int> arr){

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

int main(){
    
    vector<int> nums;
    int index = 0;
    int entry;

    cout << "Enter Numbers. Sum and Product will be computed when 0 is entered" << endl;

    cin >> entry;

    while (entry != 0){
        nums[index] = entry;
        index += 1;
        cin >> entry;
    }
    
    cout << "Sum: " + add(nums) << endl;
    cout << "Product: " + multiply(nums) << endl;

    return 0;

}