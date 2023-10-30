#creez libraria ECU2Library care contine cele 2 fisiere
add_library(ECU2Library ECU2.cpp ECU2.hpp)

#fac comanda aceasta pt ca programul principal sa gaseasca fisierele header, .hpp
target_include_directories(ECU2Library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

#daca in ECU2 vreau sa folosesc ECU1.hpp atunci fac urmatoarele comenzi
# here we link PlaneLibrary against PilotLibrary (which is a dependency) so that PlaneLibrary can use PilotLibrary's functions
#target_link_libraries(ECU2Library PUBLIC ECU1Library)
 
# here we include ECU1Library's directory for ECU2Library so that ECU2Library can use ECU1Library's headers
#target_include_directories(ECU1Library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../ecu)

#daca in obiectul ecu2 vreau sa folosesc un obiect de tipul ecu1