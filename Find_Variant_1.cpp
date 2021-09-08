#include <iostream>
#include <string>
using namespace std;

int var(string function_second_name, int function_variants)
{

        int your_variant = 0;
        int sum = 0;
        for (int i = 0; i < function_second_name.length(); i++)
           sum += function_second_name[i] - 0;
        your_variant = sum %  function_variants   + 1;
    return your_variant;

}


int main()
{
    string second_name;
    int variants;
    std::cout << "enter your second name"<<endl ;
    std::cin >> second_name;
    std::cout << "enter the number of variants"<< endl;
    std::cin >> variants;
    std::cout << var(second_name, variants);

    return 0;
}