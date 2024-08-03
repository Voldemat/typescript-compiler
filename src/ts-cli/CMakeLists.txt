include("${CMAKE_CURRENT_SOURCE_DIR}/vendor/cli11.cmake")

file(GLOB_RECURSE TS_CLI_SOURCES src/*.cpp src/*.c)
add_executable(
    ts-compiler
    src/main.cpp
    ${TS_CLI_SOURCES}
)
add_dependencies(ts-compiler RapidJSON)
target_link_libraries(
    ts-compiler
    PRIVATE CLI11::CLI11
    PRIVATE libtypescript
)
target_include_directories(
    ts-compiler
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/
    PRIVATE SYSTEM ${CLI11_INCLUDE_DIR}
    PRIVATE SYSTEM ${RAPIDJSON_INCLUDE_DIR}
)
