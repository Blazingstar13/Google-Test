#include "MyClass.h"
#include "gtest/gtest.h"

TEST(MyClass, sum) { 
	
	MyClass MyTestingClass;
    EXPECT_EQ (82, MyTestingClass.sum (32,50));
    ASSERT_EQ (82, MyTestingClass.sum (32,50));

 
}

TEST (MyClass, mult) { 
 	MyClass MyTestingClass;
    EXPECT_EQ (1600, MyTestingClass.mult (32,50));
	EXPECT_EQ (1600, MyTestingClass.mult (32,50));
	ASSERT_TRUE(1600 == MyTestingClass.mult (32,50));

}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}