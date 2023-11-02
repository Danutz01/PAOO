#creez libraria ECU1Library care contine cele 2 fisiere
add_library(ECU1Library ECU1.cpp ECU1.hpp)

#fac comanda aceasta pt ca programul principal sa gaseasca fisierele header, .hpp
target_include_directories(ECU1Library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

#daca in ECU2 vreau sa folosesc ECU1.hpp atunci fac urmatoarele comenzi
#aici linkuiesc libraria ECU1 la libraria ECU2 pentru a putea folosi in ECU1 functiile lui ECU2
target_link_libraries(ECU1Library PUBLIC ECU2Library)


#includem directorul lui ECU1library pentru libraria lui ECU2 pentru ca aceasta sa poata folosi headerele librariei ECU1
target_include_directories(ECU1Library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../ECU2)