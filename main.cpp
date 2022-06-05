#include <iostream>
#include "fibonacci.h"
#include "tuple_reverse.h"
#include "tuple_print.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << fibonacci<10>() << std::endl;

    using t1 = std::tuple<int, double, std::string>;
    t1 t(5, 4.0, "hello");
    using t2 = btl::tuple_reverse<t1>::type;
    t2 tt("hello world", 3.0, 1);

    btl::tuple_print(t);
    btl::tuple_print(tt);
    return 0;
}
