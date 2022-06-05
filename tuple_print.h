#ifndef TMP_EXAMPLES_TUPLE_PRINT_H
#define TMP_EXAMPLES_TUPLE_PRINT_H

#include <iostream>

namespace btl {
    // Generic case
    template<class TUPLE, int N>
    struct TuplePrinter {
        static void print(const TUPLE& t) {
            TuplePrinter<TUPLE, N-1>::print(t);
            std::cout << ", " << std::get<N-1>(t);
        }
    };

    // Partially specialise for final item in tuple
    template<class TUPLE>
    struct TuplePrinter<TUPLE, 1> {
        static void print(const TUPLE& t) {
            std::cout << std::get<0>(t);
        }
    };

    template<typename ...ARGS>
    void tuple_print(const std::tuple<ARGS...>& t) {
        std::cout << '(';
        TuplePrinter<decltype(t), sizeof...(ARGS)>::print(t);
        std::cout << ")\n";
    }
}
#endif //TMP_EXAMPLES_TUPLE_PRINT_H
