macro(evolution_add_windows_dll_definitions target)
	string(TOUPPER ${target} target_uppercase)
	target_compile_definitions(${target}
		PRIVATE ${target_uppercase}_BUILD_DLL
	)
endmacro(evolution_add_windows_dll_definitions)

macro(evolution_target_include_directories target)
	target_include_directories(${target} PUBLIC
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
		$<INSTALL_INTERFACE:include>
	)
endmacro(evolution_target_include_directories)

macro(evolution_install_headers target)
	install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/${target} DESTINATION include)
endmacro(evolution_install_headers)

macro(evolution_install_lib target)
	install(TARGETS ${target} EXPORT evolution DESTINATION lib)
endmacro(evolution_install_lib)
