#include <iostream>
#include <unordered_map>

using std::string;

int main()
{
    std::unordered_map<string,int> roman_nums;

    roman_nums["I"] = 1;
    roman_nums["II"] = 2;
    roman_nums["III"] = 3;
    roman_nums["IV"] = 4;
    roman_nums["V"] = 5;
    roman_nums["VI"] = 6;
    roman_nums["VII"] = 7;
    roman_nums["VIII"] = 8;
    roman_nums["IX"] = 9;
    roman_nums["X"] = 10;

    for(auto element : roman_nums){
        std::cout << element.first  << " : " << element.second << std::endl;
    }

    return 0;
}