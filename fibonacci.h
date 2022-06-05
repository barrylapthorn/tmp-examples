//
// Created by Barry Lapthorn on 05/06/2022.
//

#ifndef CLION_DELETEME_FIBONACCI_H
#define CLION_DELETEME_FIBONACCI_H

template<int N>
constexpr int fibonacci() {
    return fibonacci<N-1>() + fibonacci<N-2>();
}

template<> constexpr int fibonacci<1>() { return 1; }
template<> constexpr int fibonacci<0>() { return 0; }

#endif //CLION_DELETEME_FIBONACCI_H
