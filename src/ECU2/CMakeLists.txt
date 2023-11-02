#creez libraria ECU2Library care contine cele 2 fisiere
add_library(ECU2Library ECU2.cpp ECU2.hpp)

#fac comanda aceasta pt ca programul principal sa gaseasca fisierele header, .hpp
target_include_directories(ECU2Library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

