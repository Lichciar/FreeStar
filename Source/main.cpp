#include <iostream>
#include "SpaceSector.h"

int main()
{	
	// Тест класса SpaceSector.
	SpaceSector one(1);
	// Выводим сектор на экран.
	for (int yoop = 0; yoop < (WIDTH_SECTOR); yoop++) {
		for (int xoop = 0; xoop < (LENGTH_SECTOR); xoop++) {
			std::cout << one.get_mapSector(xoop, yoop) << " ";
		};
		std::cout << std::endl;
	};
	
	// Удачное завершение работы.
	return 0;
};