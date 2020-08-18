cmake_minimum_required(VERSION 3.13)  # CMake version check
project(lab03-uml-relationships-alpha)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES main.cpp Bus.h Bus.cpp Conductor.h Conductor.cpp Horario.h Horario.cpp Paradas.h Paradas.cpp Pasajero.h Pasajero.cpp Persona.h Persona.cpp Ruta.h Ruta.cpp Tren.h Tren.cpp Vehiculo.h Vehiculo.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(lab03-uml-relationships-alpha ${SOURCE_FILES})