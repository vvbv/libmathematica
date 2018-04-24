#include <iostream>
#include "mathematica.cpp"

int main(){
    double a[3] = {1,2,3};
    double b[3] = {4,5,6};
    Mathematica mathematica;
    std::cout << mathematica.dot_point( a, b ) << std::endl;
    std::cout << mathematica.vec_norm_1( a ) << std::endl;
    std::cout << mathematica.vec_norm_2( a ) << std::endl;
    std::cout << "[" << mathematica.vector_sum( a, b )[0] << ","
              << mathematica.vector_sum( a, b )[1] << ","
              << mathematica.vector_sum( a, b )[2] << "]" << std::endl;
    std::cout << "[" << mathematica.vector_subtraction( a, b )[0] << ","
              << mathematica.vector_subtraction( a, b )[1] << ","
              << mathematica.vector_subtraction( a, b )[2] << "]" << std::endl;
    std::cout << "[" << mathematica.lambda_x_vector( 0.5, a )[0] << ","
              << mathematica.lambda_x_vector( 0.5, a )[1] << ","
              << mathematica.lambda_x_vector( 0.5, a )[2] << "]" << std::endl;
    return 0;
}