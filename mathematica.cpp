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
        };
        return result;
    };
};

double Mathematica::norm_2( double vector[] ){
    double result = 0;
    for( int i = 0; i < sizeof( vector ); i++ ){
       result += pow( vector[ i ] ,2);
    };
    return sqrt( result );
};

double* Mathematica::vector_sum( double vector_a[], double vector_b[] ){
    if( sizeof( vector_a ) != sizeof( vector_b ) ){
        return new double[ sizeof( vector_a ) ];
    }else{
        double *vector_sum = new double[ sizeof( *vector_a ) ];
        for( int i = 0; i < sizeof( *vector_sum ); i++ ){
            vector_sum[ i ] = 0;
        };
        for( int i = 0; i < sizeof( *vector_a ); i++ ){
            vector_sum[ i ] = vector_a[ i ] + vector_b[ i ];
        };
        return vector_sum;
    };
};

double* Mathematica::vector_subtraction( double vector_a[], double vector_b[] ){
    double vector_c[ sizeof( vector_b ) ];
    for( int i = 0; i < sizeof( vector_b ); i++ ){
            vector_c[ i ] = vector_b[ i ] * -1;
    };
    return this->vector_sum( vector_a, vector_c );
};

double* Mathematica::lambda_x_vector( double lambda, double vector[] ){
    double *vector_result = new double[ sizeof( vector ) ];
    for( int i = 0; i < sizeof( vector ); i++ ){
            vector_result[ i ] = vector[ i ] * lambda;
    };
    return vector_result;
};