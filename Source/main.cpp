#include <iostream>
#include "SpaceSector.h"

int main()
{
	SpaceSector one(1);
	for (int loop = 0; loop < (10); loop++)
	{
		std::cout << loop;
		std::cout << " - ";
	  	std::cout << one.get_mapSector(99, 99);
		std::cout << std::endl;
	};
	return 0;
};