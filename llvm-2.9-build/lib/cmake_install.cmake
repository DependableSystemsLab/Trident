# Install script for directory: /home/gpli/llvm-2.9/lib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/gpli/llvm-2.9-build/lib/VMCore/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/lib/CodeGen/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/lib/Bitcode/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/lib/Transforms/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/lib/Linker/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/lib/Analysis/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/lib/MC/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/lib/Object/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/lib/ExecutionEngine/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/lib/Target/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/lib/AsmParser/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/lib/Archive/cmake_install.cmake")

endif()

