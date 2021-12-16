#include "processor.h"
#include <cstddef>

template <typename Data>
struct Part1;

template<int... Data>
struct Part1<DataT<int, Data...>>
{
  template <int... Values>
  struct F {};

  template <int count, int a, int b, int... Rest>
  struct F<count, a, b, Rest...> : F<count + (a < b), b, Rest...>
  {
  };

  template <int count, int a>
  struct F<count, a>
  {
    static const int value = count;
  };
  static const int value = F<0, Data...>::value;
};

report<int, Processor<int, Part1,
#include "./data.txt"
>::value> solution;
