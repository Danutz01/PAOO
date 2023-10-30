#includ subdirectoarele pe care vor contine ambele librarii
add_subdirectory(ECU1)
add_subdirectory(ECU2)

#acesta e targetul pe care vreau sa l execut
add_executable(Executabil main.cpp)

#linkuim cele 2 librarii generate la executabil pentru a le recunoaste
target_link_libraries(Executabil PRIVATE ECU1Library ECU2Library)

#adaug cele 2 directoare pentru a gasi ECU1.hpp si ECU2.hpp cand fac include-ul
target_include_directories(Executabil PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/ECU1)
target_include_directories(Executabil PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/ECU2)