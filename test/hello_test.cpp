#include "gmock/gmock.h" 
#include "lib_x_mock.h"

class Test_lib_a : public ::testing::Test {

  protected:

    LibXMock *LibXMockObj;

    Test_lib_a() {}
    
    virtual ~Test_lib_a() {}

    virtual void SetUp() 
    {
      LibXMockObj = new LibXMock();
    }

    virtual void TearDown() 
    {
      delete LibXMockObj;
    }
};

TEST_F(Test_lib_a, lib_a_function) 
{
  int result = LibXMockObj->lib_x_function();
  ASSERT_EQ (0, result);
}

int main(int argc, char** argv) 
{
  // The following line must be executed to initialize Google Mock
  // (and Google Test) before running the tests.
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}