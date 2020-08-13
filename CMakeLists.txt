cmake_minimum_required(VERSION 3.13)  # CMake version check
project(lab03-uml-relationships-alpha)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES main.cpp Conductor.h Conductor.cpp Pasajero.cpp Pasajero.h Persona.cpp Persona.h Asientos.h Asientos.cpp Bus.h Bus.cpp Lineas.h Lineas.cpp Paradas.h Paradas.cpp Tiquete.h Tiquete.cpp TransportePublico.cpp TransportePublico.h Tren.h Tren.cpp Hora.cpp Hora.h)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(lab03-uml-relationships-alpha ${SOURCE_FILES})