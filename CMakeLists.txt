project(design_pattern_cpp)

include_directories(src/ch3_decorator_pattern)

add_executable(DuckUSim src/ch1_strategy_pattern/DuckUSim.cpp)
add_executable(WeatherDisplay src/ch2_observer_pattern/main.cpp)
add_executable(StarBox src/ch3_decorator_pattern/main.cpp)