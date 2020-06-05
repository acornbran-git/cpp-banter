cmake_minimum_required(VERSION 3.0.0)

project(Common)

file(GLOB HEADERS
	include/${PROJECT_NAME}/*.h
	src/*.h
)

file(GLOB SOURCES
	src/*.cpp
)

add_library(${PROJECT_NAME} SHARED
	${HEADERS}
	${SOURCES}
)

evolution_add_windows_dll_definitions(${PROJECT_NAME})

evolution_target_include_directories(${PROJECT_NAME})

set_target_properties(${PROJECT_NAME}
	PROPERTIES FOLDER Libraries/Common
)

evolution_install_lib(${PROJECT_NAME})
evolution_install_headers(${PROJECT_NAME})
