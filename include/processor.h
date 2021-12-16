template<typename T, T>
struct report;

template <typename T, T...>
struct DataT;

template <typename T, template<typename> class P, T... Data>
struct Processor
{
  static const T value = P<DataT<T, Data...>>::value;
};

