# Nombre del programa de salida
TARGET = top-to-bottom
# Compilador C++
CXX = g++

# Opciones de compilación
CXXFLAGS = -std=c++11 -Wall

# Archivos fuente (lista de archivos .cpp)
SRCS = top-to-bottom.cc

# Generar nombres de archivos de objetos (reemplaza la extensión .cpp por .o)
OBJS = $(SRCS:.cpp=.o)

# Regla para compilar el programa
$(TARGET): $(OBJS)
	$(CXX) -o $@ $^

# Regla para compilar los archivos de objetos
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Regla para limpiar los archivos generados
clean:
	rm -f $(OBJS) $(TARGET)


