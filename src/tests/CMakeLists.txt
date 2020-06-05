cmake_minimum_required(VERSION 3.0.0)

project(tests VERSION "0.0")

file(GLOB HEADERS
	include/${PROJECT_NAME}/*.h
	src/*.h
)

file(GLOB SOURCES
	src/*.cpp
)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

evolution_target_include_directories(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME}
	Common
)

set_target_properties(${PROJECT_NAME}
	PROPERTIES FOLDER Applications/tests
)
