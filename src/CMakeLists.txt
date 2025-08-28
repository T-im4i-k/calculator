add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/core/")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/gui/")

add_executable(qualqulator main.cpp)
target_link_libraries(qualqulator PRIVATE core gui)

