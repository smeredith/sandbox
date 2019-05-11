project (tests
                VERSION 1.0
                LANGUAGES CXX)

add_executable(tests tests.cpp tests-main.cpp)
enable_testing()
add_test(tests tests)
