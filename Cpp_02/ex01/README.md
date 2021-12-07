# Towards a more useful fixed point class - 42 Roma LUISS

Ok, ex00 was a good start, but our class is still pretty useless, being only able to represent the fixed point value 0.0. Add the following public constructors and public member functions to your class:
 • A constructor that takes a constant integer as a parameter and that converts it to the correspondant fixed(8) point value. The fractional bits value is initialized like in ex00.
 • A constructor that takes a constant floating point as a parameter and that converts it to the correspondant fixed(8) point value. The fractional bits value is initialized like in ex00.
 • A member function float toFloat( void ) const; that converts the fixed point value to a floating point value.
 • A member function int toInt( void ) const; that converts the fixed point value to an integer value.
You will also add the following function overload to your header (declaration) and source (definition) files:
 • An overload to the « operator that inserts a floating point representation of the fixed point value into the parameter output stream.
 
 The code :
 
  #include <iostream>
  
  int main( void ) {
  
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
  
    a = Fixed( 1234.4321f );
  
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
  
    return 0;
  }
  
Should output something like:
  
$> ./a.out
Default constructor called
Int constructor called
Float constructor called
Copy constructor called
Assignation operator called
Float constructor called
Assignation operator called
Destructor called
a is 1234.43
b is 10
c is 42.4219
d is 10
a is 1234 as integer
b is 10 as integer
c is 42 as integer
d is 10 as integer
Destructor called
Destructor called
Destructor called
Destructor called
$>
