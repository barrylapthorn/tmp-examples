#ifndef TMP_EXAMPLES_TUPLE_REVERSE_H
#define TMP_EXAMPLES_TUPLE_REVERSE_H

#include <tuple>

namespace btl {
    // Start with most generic case
    template<typename ...Ts>
    struct tuple_reverse;

    // Then specialise
    template<>
    struct tuple_reverse<std::tuple<>> {
        using type = std::tuple<>;
    };

    template<typename T, typename ...Ts>
    struct tuple_reverse<std::tuple<T, Ts...>> {
        using head = std::tuple<T>;
        using tail = typename tuple_reverse<std::tuple<Ts...>>::type;
        using type = decltype(std::tuple_cat(std::declval<tail>(), std::declval<head>()));
    };
}
#endif //TMP_EXAMPLES_TUPLE_REVERSE_H
