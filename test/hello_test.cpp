#include "gmock/gmock.h" 
#include "lib_x_mock.h"
#include "lib_a.h"

using namespace ::testing;
using ::testing::Return;

class Test_lib_a : public ::testing::Test {

  protected:

    LibXMock LibXMockObj;

    Test_lib_a() {}
    
    virtual ~Test_lib_a() {}

    virtual void SetUp() 
    {

    }

    virtual void TearDown() 
    {

    }
};

TEST_F(Test_lib_a, lib_a_function) 
{
  EXPECT_CALL(LibXMockObj, lib_x_function()).Times(1).WillOnce(Return(0));

  EXPECT_EQ(0, LibXMockObj.lib_x_function());
}

int main(int argc, char** argv) 
{
  // The following line must be executed to initialize Google Mock
  // (and Google Test) before running the tests.
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}