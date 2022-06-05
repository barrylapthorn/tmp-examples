#ifndef TMP_EXAMPLES_FIBONACCI_H
#define TMP_EXAMPLES_FIBONACCI_H

template<int N>
constexpr int fibonacci() {
    return fibonacci<N-1>() + fibonacci<N-2>();
}

template<> constexpr int fibonacci<1>() { return 1; }
template<> constexpr int fibonacci<0>() { return 0; }

#endif //TMP_EXAMPLES_FIBONACCI_H
