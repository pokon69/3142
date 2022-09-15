//Phillip Okon
#include <iostream>

int main(){
    int v1 = 0, v2 = 0;

    std::cout << "Give me two numbers, can I have the lower number first: " << std::endl;
    std::cin >> v1;
    std::cout << "Can I have the higher number: " << std::endl;
    std::cin >> v2;
    for (int a = v1; a <= v2; a = a+1){
        std::cout << a << " ";
    }
    std::cout << std::endl;
    return 0;
}
