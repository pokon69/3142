//Phillip Okon
#include <iostream>
int main(){
    std::cout << " Give me two numbers " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    while(v1 != v2){ //Control Loop
        if (v1 <= v2){
            std::cout << v1 << " ";
            v1++;
        } else if (v1 > v2){
            std::cout << v2 << " ";
            v2++;
        }
    }
    // While loop runs until both variables are equal, it prints all 
    //variables from lowest to highest except the highest variable 
    //in the loop and the highest range is printed after. This is
    //done so the user can input any number without prompted for 
    // a lower range and a higher range.
    std::cout << v1;
    return 0;
}
