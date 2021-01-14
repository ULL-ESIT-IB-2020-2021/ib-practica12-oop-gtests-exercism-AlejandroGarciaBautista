#include <gtest/gtest.h>
#include "complejo.h"



TEST(ComplejoTest, add){
  complex_number complex1(4, 5);
  complex_number complex2(7, 4);
  complex_number result(0,0);
  
  EXPECT_EQ(20, result.add(complex1,complex2));
}

TEST(ComplejoTest, sub){
  complex_number complex1(4, 5);
  complex_number complex2(7, 4);
  complex_number result(0,0);

  EXPECT_EQ(-2, result.sub(complex1,complex2));
}