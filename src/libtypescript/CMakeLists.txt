file(GLOB_RECURSE TS_LIB_HEADERS src/*.hpp src/*.h)
file(GLOB_RECURSE TS_LIB_SOURCES src/*.cpp src/*.c)

add_library(
    libtypescript
    ${TS_LIB_SOURCES}
)
add_dependencies(libtypescript RapidJSON)
target_include_directories(
    libtypescript
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src/
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/
    PRIVATE SYSTEM ${RAPIDJSON_INCLUDE_DIR}
)
get_target_property(LIBB_INCLUDES libtypescript INCLUDE_DIRECTORIES)
