# Karen-filter - 42 Roma LUISS

We are going to implement a system to filter if what Karen says is actually important or not, because sometimes we don’t want to pay attention to everything Karen says.
You have to write the program karenFilter that will receive as a parameter the log level you want to listen to and display all the info that is at this level or above it.
For example:
$> ./karenFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I’ve been coming here for years an you just started working here last month.
[ ERROR ]
This is unacceptable, I want to speak to the manager now.
$> ./karenFilter "I am not sure how tired I am today..."
[ Probably complaining about insignificant problems ]
There are many ways to filter karen, but one of the best ones is to SWITCH her off ;)
