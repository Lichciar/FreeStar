# !!! Обязательно использовать табуляцию.

# make не будет искать файлы с перечисленными ниже именами.
.PHONY: all, assemble, run, clean

# Команда на полную сборку проекта.
all: assemble

# Сборка из исходников.
assemble: Source/main.cpp
	g++ -Wall Source/main.cpp -O3 -o ./FreeStar	

# Сборка и сбор информации в файл. ВРЕМЕННО.
run: assemble
	./FreeStar

# Удаление ненужных файла.
clean:
	rm -rf ./FreeStar