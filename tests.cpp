#include <catch2/catch_test_macros.hpp>

#include <iostream>
#include "fibonacci.h"
#include "tuple_reverse.h"
#include "tuple_print.h"


TEST_CASE("Fibonacci test", "[templates]") {
    REQUIRE(fibonacci<10>() == 55);
}

TEST_CASE("Tuple tests", "[tuple]") {
    using forward_tuple_t = std::tuple<int, double, std::string>;
    using reverse_tuple_t = btl::tuple_reverse<forward_tuple_t>::type;

    forward_tuple_t t1(5, 4.0, "hello");
    reverse_tuple_t t2("hello world", 3.0, 1);

    REQUIRE(std::get<0>(t1) == std::get<2>(t2));
    REQUIRE(std::get<1>(t1) == std::get<1>(t2));
    REQUIRE(std::get<2>(t1) == std::get<0>(t2));

    btl::tuple_print(t1);
    btl::tuple_print(t2);
}
