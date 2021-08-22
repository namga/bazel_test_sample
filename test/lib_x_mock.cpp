#include "lib_x_mock.h"

extern LibXMock LibXMockObj;

int lib_x_function()
{
    return LibXMockObj.lib_x_function();
}