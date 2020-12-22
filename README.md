
# New project
- Create project dir `mkdir -p myProject/{build,lib,src,tst}`
- Get google test outside `git clone https://github.com/google/googletest/`, copy to `myProject/lib`
- Create CMakeLists.txt for each dir
- Compile in build/ with `cmake .. -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles" ` & `make all`
- Executable of the project + exec of the test in build/
Source: https://raymii.org/s/tutorials/Cpp_project_setup_with_cmake_and_unit_tests.html

# Existing project
Create one file that contains just the main to run the tests.
```// AllTests.cpp
#include "gtest/gtest.h"

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
```
Then put the tests into other files. You can put as many tests as you like in a file. Creating one file per class or per source file can work well.
```
// SubtractTest.cpp
#include "subtract.h"
#include "gtest/gtest.h"

TEST(SubtractTest, SubtractTwoNumbers)
{
    EXPECT_EQ(5, subtract(6, 1));
}
```
This does require that all tests can share the same main. If you have to do something special there, you will have to have multiple build targets.
