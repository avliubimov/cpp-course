cmake_minimum_required(VERSION 3.20)
project(lab01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Библиотека с логикой — её будем тестировать отдельно от main()
add_library(lab01_lib src/sum.cpp)
target_include_directories(lab01_lib PUBLIC include)

# Сама программа
add_executable(lab01 src/main.cpp)
target_link_libraries(lab01 PRIVATE lab01_lib)

# Тесты
enable_testing()
add_executable(test_sum tests/test_sum.cpp)
target_link_libraries(test_sum PRIVATE lab01_lib)
add_test(NAME test_sum COMMAND test_sum)

# Предупреждения компилятора — на всех целевых целях
foreach(target lab01 lab01_lib test_sum)
    if(MSVC)
        target_compile_options(${target} PRIVATE /W4 /utf-8)
    else()
        target_compile_options(${target} PRIVATE -Wall -Wextra -Wpedantic)
    endif()
endforeach()
