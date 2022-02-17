#include "Serialisation.hpp"

uintptr_t	serialize(Data* nbr)
{
	return (reinterpret_cast<uintptr_t>(nbr));
}

Data*		deserialize(uintptr_t nbr)
{
	return (reinterpret_cast<Data *>(nbr));
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
	std::cout << "Ptr converted : " << deserialized << std::endl;
}