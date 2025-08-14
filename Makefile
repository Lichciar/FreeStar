# !!! Обязательно использовать табуляцию.

# make не будет искать файлы с перечисленными ниже именами.
.PHONY: all, assemble, run, clean

# Команда на полную сборку проекта.
all: assemble

# Сборка из исходников.
assemble: Source/main.c
	gcc -Wall Source/main.c -O3 -o ./FreeStar	

# Сборка и сбор информации в файл. ВРЕМЕННО.
run: assemble
	./FreeStar >> ./result.txt

# Удаление ненужных файла.
clean:
	rm -rf ./FreeStar