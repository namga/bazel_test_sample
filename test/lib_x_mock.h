
#include "gmock/gmock.h" 
#include "lib_x.h"

class LibXInterface 
{
public:
   virtual ~LibXInterface() {}
   virtual int lib_x_function() = 0;
};

class LibXMock : public LibXInterface 
{
public:
   virtual ~LibXMock() {}
   MOCK_METHOD0(lib_x_function, int());
};