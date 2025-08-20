#pragma once
//#ifndef _SPACESECTOR_H_
//#define _SPACESECTOR_H_

class SpaceSector
{
private:
	int idSector;		// ID сектора.
	int mapSector[10000];		// Карта сектора.
public:
	SpaceSector(int); 				// Конструктор класса.
	int get_Id();					// Получить ID сектора.
	int get_mapSector(int, int);	// Получить ID объекта по координатам x, y.
	int get_arrayIndex(int, int);	// Преобразование координат [x, y] сектора в индект массива.
};

//#endif // _SPACESECTOR_H_