cmake_minimum_required(VERSION 3.5)
project(PAOO_Proiect VERSION 0.1.0)

#folosim aceasta comanda ca sa includem folderul src, subproiectul
add_subdirectory(src)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})