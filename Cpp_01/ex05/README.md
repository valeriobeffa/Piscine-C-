# Karen 2.0 - 42 Roma LUISS

Do you know Karen? We all do, no? In case you don’t, here are the kind of comments that Karen does:
 • "DEBUG" level: Messages in this level contain extensive contextual information. They are mostly used for problem diagnosis. Example: "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
 • "INFO" level: These messages contain some contextual information to help trace execution in a production environment. Example: "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
 • "WARNING" level: A warning message indicates a potential problem in the system. The system is able to handle the problem by itself or to proceed with this problem anyway. Example: "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
 • "ERROR" level: An error message indicates a serious problem in the system. The problem is usually non-recoverable and requires manual intervention. Example: "This is unacceptable, I want to speak to the manager now."
 We are going to automate Karen, she says always the same things. You have to create a class named Karen which will contain the following private member functions:
 • void debug( void );
 • void info( void );
 • void warning( void );
 • void error( void );
Karen also has to have a public function that calls to the private functions depending on the level that is passed as parameter. The prototype of the function is:
void complain(std::string level);
The goal of this exercise is to use pointers to member functions. This is not a suggestion, Karen has to complain without using a forest of if/elseif/else, she doesn’t hesitate or think twice!
Submit a main to test that Karen complains a lot. It is okay if you want to use the complains we give as example.
