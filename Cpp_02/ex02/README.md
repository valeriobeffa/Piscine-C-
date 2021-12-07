# Now we’re talking - 42 Roma LUISS

We’re getting closer. Add the following public member operator overloads to your class:
 • Six comparison operators: >, <, >=, <=, == and !=.
 • Four arithmetic operators: +, -, *, and /.
 • The pre-increment, post-increment, pre-decrement and post-decrement operators, that will increment or decrement the fixed point value from the smallest representable value.
Add the following public static member functions overloads to your class:
 • The static member function min that takes references on two fixed point values and returns a reference to the smallest value, and an overload that takes references on two constant fixed point values and returns a reference to the smallest constant value.
 • The static member function max that takes references on two fixed point values and returns a reference to the biggest value, and an overload that takes references on two constant fixed point values and returns a reference to the biggest constant value.

It’s up to you to test every feature of your class, but the short code:

  #include <iostream>

  int main( void ) {
  
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
  
    return 0;
  }
  
  Should output something like (I deleted the ctors/dtor logs):
  
$> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
$>
