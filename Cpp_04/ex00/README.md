# Polymorphism - 42 Roma LUISS

Start by implementing a simple base class called Animal. It has one protected attribute:
 • std::string type;
Implement a Dog class that inherits from Animal.
Implement a Cat class that inherits from Animal.
These two derived classes must set their type field depending on their name.
Then, the Dog’s type will be initialized to "Dog", and the Cat’s type will be initialized to "Cat".
The type of the Animal class can be left empty or set to the value of your choice.
Every animal must be able to use the member function:
  makeSound()
It will print an appropriate sound (cats don’t bark).
To ensure you understood how it works, implement a WrongCat class that inherits from a WrongAnimal class.
If you replace the Animal and the Cat by the wrong ones in the code above, the WrongCat should output the WrongAnimal sound.
