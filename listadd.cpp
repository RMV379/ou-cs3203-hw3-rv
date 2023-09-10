#include <vector>

using namespace std;

int main(vector<int> arr){

    int sum = 0;

    for (int i = 0; i < arr.size(); ++i){
        sum += arr[i];
    }

    return sum;

}