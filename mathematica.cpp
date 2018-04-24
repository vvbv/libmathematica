#include "mathematica.hpp"

Mathematica::Mathematica(){};
Mathematica::~Mathematica(){};
double Mathematica::dot_point( double vector_a[], double vector_b[] ){
    if( sizeof( vector_a ) != sizeof( vector_b ) ){
        return -1;
    }else{
        double result = 0;
        for( int i = 0; i < sizeof( vector_a ); i++ ){
            result += vector_a[ i ] * vector_b[ i ];
        }
        return result;
    }
};