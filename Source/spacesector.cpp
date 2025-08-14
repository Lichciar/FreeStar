#include <iostream>

#define WIDTH 100	// Ширина сектора.
#define LENGTH 100	// Длина сектора.

class SpaceSector
{
/* Класс SpaceSector:
   ------------------
   Описание сектора космоса.*/
private:
	int idSector;
	int mapSector[10000];	// Карта сектора.
public:
	/* Конструктор класса.*/
	SpaceSector(int id)
	{
		idSector = id; // Прислаиваем номер сектора.
	}
};

int main()
{
	SpaceSector one(1);
	return 0;
};