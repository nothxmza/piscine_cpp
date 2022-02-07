#include "Serialisation.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data*	data = new Data;
	data->i = 10;

	Data		*deserialized;
	uintptr_t	serialized;

	std::cout << "Ptr data : " << data << std::endl;
	serialized = serialize(data);
	deserialized = deserialize(serialized);
	std::cout << "ptr converted : " << deserialized << std::endl;
}