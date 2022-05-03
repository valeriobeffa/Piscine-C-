#include "Data.hpp"

int main()
{
	Data* data = new Data;
	uintptr_t uint = serialize(data);
	Data *data2 = deserialize(uint);

	std::cout << data << std::endl;
	std::cout << uint << std::endl;
	std::cout << data2 << std::endl;
	std::cout << serialize(data) << std::endl;
	std::cout << deserialize(uint) << std::endl;
	std::cout << serialize(data2) << std::endl;
    delete data;
    return 0;
}