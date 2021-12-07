# My First Orthodox Class - 42 Roma LUISS

Write an orthodox class to represent fixed point numbers:
• Private members:
 ◦ An integer to store the fixed point value.
 ◦ A static constant integer to store the number of fractional bits. This constant will always be the litteral 8.
• Public members:
 ◦ A default constructor that initializes the fixed point value to 0.
 ◦ A destructor.
 ◦ A copy constructor.
 ◦ An assignation operator overload.
 ◦ A member function int getRawBits( void ) const; that returns the raw value of the fixed point value.
 ◦ A member function void setRawBits( int const raw ); that sets the raw value of the fixed point value.
 
The code:
 #include <iostream>

 int main( void ) {
  
    Fixed a;
    Fixed b( a );
    Fixed c;
  
    c = b;
  
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
  
    return 0;
  }
  
Should output something like:
  
$> ./a.out
Default constructor called
Copy constructor called
Assignation operator called // <-- This line may be missing depending on your implementation
getRawBits member function called
Default constructor called
Assignation operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called
$>
