# !!! Обязательно использовать табуляцию.

# Переменные:
# -----------
CXX = g++
CXXFLAG = -Wall
VERSION = v_0.1.2
TARGET = FreeSpace_$(VERSION)
SOURCE = Source/main.cpp Source/SpaceSector.cpp
OBJECTS = $(SOURCE:.cpp=.o)

# make не будет искать файлы с перечисленными ниже именами.
.PHONY: all, assemble, run, clean

# Команда на полную сборку проекта.
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAG) -c $< -o $@

# Удаление ненужных файла.
clean:
	rm -f $(OBJECTS) $(TARGET)