#include <iostream>
#include <string>
#include "matrix.h"
#include "matrix.cpp"

int main(int argc, char const *argv[]) {
    Matrix m(10,10);
    Matrix m2(10,10);
    Matrix m3(10,10);
    Matrix m4(10,10);
    //std::cout <<" Matriz Identidade \n";
    m.unit();
    //std::cout <<" Matriz de Uns \n";
    m2.ones();
    //std::cout <<" Matriz de Zeros \n";
    m3.zeros();
    m4.ones();
    m4(1,3) = 5;
    //std::cout <<" Soma de Matrizes \n";
    std::cout << "MATRIZ M \n";
    std::cout << m <<std::endl;
    std::cout << "MATRIZ M4 \n";
    std::cout << m4 <<std::endl;
    std::cout << "-------------------- SOMA M += M4 ------------------------------\n";
    m += m4;  // PROBLEMAS COM PASSAGEM POR COPIA DA MATRIZ
    std::cout << m <<std::endl;
    m.unit();
    m4.ones();
    std::cout << "-------------------- SOMA M -= M4 ------------------------------\n";
    m -= m4;  // PROBLEMAS COM PASSAGEM POR COPIA DA MATRIZ
    std::cout << m <<std::endl;
    m.ones();
    m4.ones();
    std::cout << "-------------------- SOMA M *= M4 ------------------------------\n";
    m *= m4;  // PROBLEMAS COM PASSAGEM POR COPIA DA MATRIZ
    std::cout << m <<std::endl;
    m.unit();
    m4.ones();
    std::cout << "-------------------- SOMA M = M4 ------------------------------\n";
    m = m4;  // PROBLEMAS COM PASSAGEM POR COPIA DA MATRIZ
    std::cout << m <<std::endl;
    std::cout << "-------------------- SOMA M = M2 + M4 ------------------------------\n";
    m = m2 + m4;  // PROBLEMAS COM PASSAGEM POR COPIA DA MATRIZ
    std::cout << m <<std::endl;
    std::cout << "--------------------  SUBTRAÇÃO M = M2 - M4  ------------------------------ \n";
    m = m2 - m4;  // PROBLEMAS COM PASSAGEM POR COPIA DA MATRIZ
    std::cout << m <<std::endl;
    std::cout << "------------------   MULTIPLICAÇÃO M = M2 * M4   -----------------------\n";
    m = m2 * m4;  // PROBLEMAS COM PASSAGEM POR COPIA DA MATRIZ
    std::cout << m <<std::endl;
    std::cout << "------------------   PRINT COUT << M   -----------------------\n";
    std::cout << m << std::endl;
    std::cout << "------------------   MATRIZ Q SERA TRANSPOSTA   -----------------------\n";
    Matrix m5(10,5);
    m5.ones();
    m5(2,3) = 8;
    std::cout << m5 <<std::endl;
    std::cout << "------------------   TRANSPOSTA M =~ A   -----------------------\n";
    std::cout <<m <<'\n';
    std::cout << "------------------   TRANSPOSTA M *= 2   -----------------------\n";
    m *=2;  // PROBLEMAS COM PASSAGEM POR COPIA DA MATRIZ
    std::cout <<m <<'\n';
}
