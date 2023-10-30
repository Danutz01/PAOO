#creez libraria ECU1Library care contine cele 2 fisiere
add_library(ECU1Library ECU1.cpp ECU1.hpp)

#fac comanda aceasta pt ca programul principal sa gaseasca fisierele header, .hpp
target_include_directories(ECU1Library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})