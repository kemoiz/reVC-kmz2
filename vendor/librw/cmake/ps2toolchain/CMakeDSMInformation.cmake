if(UNIX)
  set(CMAKE_DSM_OUTPUT_EXTENSION .o)
else()
  set(CMAKE_DSM_OUTPUT_EXTENSION .obj)
endif()

set(CMAKE_INCLUDE_FLAG_DSM "-I")

set(CMAKE_DSM_FLAGS_INIT "$ENV{DSMFLAGS} ${CMAKE_DSM_FLAGS_INIT}")

# replace for CMake >= 3.11
foreach(c "" _DEBUG _RELEASE _MINSIZEREL _RELWITHDEBINFO)
  string(STRIP "${CMAKE_DSM_FLAGS${c}_INIT}" CMAKE_DSM_FLAGS${c}_INIT)
endforeach()

set (CMAKE_DSM_FLAGS "${CMAKE_DSM_FLAGS_INIT}" CACHE STRING
     "Flags used by the assembler during all build types.")

if(NOT CMAKE_NOT_USING_CONFIG_FLAGS)
  get_property(_GENERATOR_IS_MULTI_CONFIG GLOBAL PROPERTY GENERATOR_IS_MULTI_CONFIG)
  # default build type is none
  if(NOT _GENERATOR_IS_MULTI_CONFIG AND NOT CMAKE_NO_BUILD_TYPE)
    set (CMAKE_BUILD_TYPE ${CMAKE_BUILD_TYPE_INIT} CACHE STRING
      "Choose the type of build, options are: None, Debug Release RelWithDebInfo MinSizeRel.")
  endif()
  unset(_GENERATOR_IS_MULTI_CONFIG)
  set (CMAKE_DSM_FLAGS_DEBUG "${CMAKE_DSM_FLAGS_DEBUG_INIT}" CACHE STRING
    "Flags used by the assembler during debug builds.")
  set (CMAKE_DSM_FLAGS_MINSIZEREL "${CMAKE_DSM_FLAGS_MINSIZEREL_INIT}" CACHE STRING
    "Flags used by the assembler during release minsize builds.")
  set (CMAKE_DSM_FLAGS_RELEASE "${CMAKE_DSM_FLAGS_RELEASE_INIT}" CACHE STRING
    "Flags used by the assembler during release builds.")
  set (CMAKE_DSM_FLAGS_RELWITHDEBINFO "${CMAKE_DSM_FLAGS_RELWITHDEBINFO_INIT}" CACHE STRING
    "Flags used by the assembler during Release with Debug Info builds.")
endif()

mark_as_advanced(CMAKE_DSM_FLAGS
                 CMAKE_DSM_FLAGS_DEBUG
                 CMAKE_DSM_FLAGS_MINSIZEREL
                 CMAKE_DSM_FLAGS_RELEASE
                 CMAKE_DSM_FLAGS_RELWITHDEBINFO
                )
# WITH: cmake_initialize_per_config_variable(CMAKE_DSM_FLAGS "Flags used by the DSM compiler")

if(NOT CMAKE_DSM_COMPILE_OBJECT)
  set(CMAKE_DSM_COMPILE_OBJECT "<CMAKE_DSM_COMPILER> <INCLUDES> <FLAGS> -o <OBJECT> <SOURCE>")
endif()

if(NOT CMAKE_DSM_CREATE_STATIC_LIBRARY)
 set(CMAKE_DSM_CREATE_STATIC_LIBRARY
   "<CMAKE_DSM_COMPILER_AR> cr <TARGET> <LINK_FLAGS> <OBJECTS> "
   "<CMAKE_DSM_COMPILER_RANLIB> <TARGET>")
endif()

if(NOT CMAKE_DSM_LINK_EXECUTABLE)
  set(CMAKE_DSM_LINK_EXECUTABLE
    "<CMAKE_DSM_COMPILER> <FLAGS> <CMAKE_DSM_LINK_FLAGS> <LINK_FLAGS> <OBJECTS>  -o <TARGET> <LINK_LIBRARIES>")
endif()

if(NOT CMAKE_EXECUTABLE_RUNTIME_DSM_FLAG)
  set(CMAKE_EXECUTABLE_RUNTIME_DSM_FLAG ${CMAKE_SHARED_LIBRARY_RUNTIME_DSM_FLAG})
endif()

if(NOT CMAKE_EXECUTABLE_RUNTIME_DSM_FLAG_SEP)
  set(CMAKE_EXECUTABLE_RUNTIME_DSM_FLAG_SEP ${CMAKE_SHARED_LIBRARY_RUNTIME_DSM_FLAG_SEP})
endif()

if(NOT CMAKE_EXECUTABLE_RPATH_LINK_DSM_FLAG)
  set(CMAKE_EXECUTABLE_RPATH_LINK_DSM_FLAG ${CMAKE_SHARED_LIBRARY_RPATH_LINK_DSM_FLAG})
endif()

# to be done
if(NOT CMAKE_DSM_CREATE_SHARED_LIBRARY)
  set(CMAKE_DSM_CREATE_SHARED_LIBRARY)
endif()

if(NOT CMAKE_DSM_CREATE_SHARED_MODULE)
  set(CMAKE_DSM_CREATE_SHARED_MODULE)
endif()
