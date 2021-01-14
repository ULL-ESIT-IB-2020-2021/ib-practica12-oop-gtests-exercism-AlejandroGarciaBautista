#include <gtest/gtest.h>
#include "complejo.h"

/** En este caso nos encontramos con los test de la parte de la suma y de la resta, que nos comprueban con los siguientes datos 
  * que todo se esta efectuando correctamente, en los return de Add y Sub vemos que son una suma y por eso vemos un 20 y un -2 ya
  * que esa seria la respuesta de la suma de la parte real + la parte imaginaria. 
*/

TEST(AdditionTest, add){
  complex_number complex1(4, 5);
  complex_number complex2(7, 4);
  complex_number result(0,0);
  
  EXPECT_EQ(20, result.add(complex1,complex2));
}

TEST(SubstractionTest, sub){
  complex_number complex1(4, 5);
  complex_number complex2(7, 4);
  complex_number result(0,0);

  EXPECT_EQ(-2, result.sub(complex1,complex2));
}