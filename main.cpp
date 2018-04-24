#include <iostream>
#include "mathematica.cpp"

int main(){
    double a[3] = {1,2,3};
    double b[3] = {4,5,6};
    Mathematica mathematica;
    std::cout << mathematica.dot_point(a,b) << std::endl;
    return 0;
}