#include "processor.h"
#include <cstddef>

template <typename Data>
struct Part2;

template<int... Data>
struct Part2<DataT<int, Data...>>
{
  template <int... Values>
  struct F {};

  template <int count, int a, int b, int c, int d, int... Rest>
  struct F<count, a, b, c, d, Rest...> : F<count + (a < d), b, c, d, Rest...>
  {
  };

  template <int count, int a, int b, int c>
  struct F<count, a, b, c>
  {
    static const int value = count;
  };
  static const int value = F<0, Data...>::value;
};

report<int, Processor<int, Part2,
#include "./data.txt"
>::value> solution;

