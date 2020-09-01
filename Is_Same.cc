#include <iostream>
#include <type_traits>
#include <cstdint>

void print_separator()
{
    std::cout << "---$$$---\n";
}

int main()
{
    std::cout << std::boolalpha;
    
    std::cout <<std::is_same<int,std::int32_t>::value << "\n";
    std::cout <<std::is_same<int,std::int64_t>::value << "\n";
    
    print_separator();
    
    std::cout <<std::is_same<int,int>::value << "\n";
    std::cout <<std::is_same<int,char>::value << "\n";
    std::cout <<std::is_same<char,char>::value << "\n";
    

}
