# Advent of Code 2021

C++ Template Metaprogramming solutions to Advent of Code problems 2021. The
goal here is to solve Advent of Code problems at compile time with minimal
usage of the preprocessor. These are the best programs I have ever written that
intentionally do not compile.

## Day 01

```bash
g++ -g -Wall -O1 -ftemplate-depth=10000 -Iinclude day01/a.cpp
day01/a.cpp:28:11: error: aggregate ‘report<int, 1400> solution’ has incomplete type and cannot be defined
 >::value> solution;
           ^~~~~~~~
Makefile:11: recipe for target '01a' failed
make: *** [01a] Error 1
```

```bash
g++ -g -Wall -O1 -ftemplate-depth=10000 -Iinclude day01/b.cpp
day01/b.cpp:28:11: error: aggregate ‘report<int, 1429> solution’ has incomplete type and cannot be defined
 >::value> solution;
           ^~~~~~~~
Makefile:14: recipe for target '01b' failed
make: *** [01b] Error 1
```
