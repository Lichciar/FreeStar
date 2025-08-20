#include <iostream>
#include "SpaceSector.h"

/* Реализация класса SpaceSector:*/

/* Конструктор класса.*/
SpaceSector::SpaceSector(int id)
{
	this->idSector = id; // Прислаиваем номер сектора.
	// Очищаем карту сектора.
	for (int loop = 0; loop < (10000); loop++)
	{
		this->mapSector[loop] = (10000) - loop; 
	};
};

/* Получение ID сектора.*/
int SpaceSector::get_Id() {
	return this->idSector;
};

/* Получение ID объекта по 2у мерным координатам x, y.*/
int SpaceSector::get_mapSector(int x, int y) {
	int index = this->get_arrayIndex(x, y);
	return this->mapSector[index];
};

/* Преобразование 2у мерных координат в индект массива.*/
int SpaceSector::get_arrayIndex(int x, int y) {
	int index = x + y * 100;
	return index;
};