#include <iostream>
#include <cstdint>
#include <stdio.h>
#include <gmp.h>
#include <gmpxx.h>

// the largest known prime, is (2**power) -1
static uint32_t    power = 136279841;

static void PrintLargestPrime (uint32_t upower)
{
  mpz_class n = 2;

  mpz_ui_pow_ui( n.get_mpz_t(), 2u, upower);
  n--;

  std::cout << "(" << 2 << "^" << upower <<  ") - 1\n" ;
  std::cout <<  n.get_str().c_str() ;
  std::cout << "\n";
}



int main()
{
   PrintLargestPrime (power) ;
   return 0;
}
