#ifndef MATHEMATICA_HPP_
#define MATHEMATICA_HPP_

#include <cmath>
#include <iomanip>
#include <iostream>
#include <array>

class Mathematica{

    private:

    public:
        Mathematica();
        ~Mathematica();
        double dot_point( double vector_a[], double vector_b[] );
        double norm_2( double vector[] );
        double* vector_sum( double vector_a[], double vector_b[] );
        double* vector_subtraction( double vector_a[], double vector_b[] );
        double* lambda_x_vector( double lambda, double vector[] );

};

#endif