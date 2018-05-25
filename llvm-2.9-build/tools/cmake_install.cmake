# Install script for directory: /home/gpli/llvm-2.9/tools

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
  include("/home/gpli/llvm-2.9-build/tools/llvm-config/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/opt/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llvm-as/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llvm-dis/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llvm-mc/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llc/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llvm-ranlib/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llvm-ar/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llvm-nm/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llvm-ld/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llvm-prof/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llvm-link/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/lli/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llvm-extract/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llvm-diff/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/macho-dump/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llvm-objdump/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/bugpoint/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/bugpoint-passes/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llvm-bcanalyzer/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llvm-stub/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/edis/cmake_install.cmake")
  include("/home/gpli/llvm-2.9-build/tools/llvmc/cmake_install.cmake")

endif()

