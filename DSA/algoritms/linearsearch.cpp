#include <iostream>
#include <vector>

int linear_search(std::vector<char> &arr, char target){
    int arr_length = arr.size();
    for(int i=0; i<arr_length; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
                        //index : 0   1   2   3   4   5   6   7
    std::vector<char> letters = {'a','b','c','d','e','f','g','h'}; 
    char target = 'd';

    int index = linear_search(letters, target);

    if(index != -1) std::cout << "target found at index : " << index;
    else std::cout << "target not found.";

    return 0;
}