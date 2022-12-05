# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/admin/esp/esp-idf/components/bootloader/subproject"
  "D:/git/APPS/shift_reg/build/bootloader"
  "D:/git/APPS/shift_reg/build/bootloader-prefix"
  "D:/git/APPS/shift_reg/build/bootloader-prefix/tmp"
  "D:/git/APPS/shift_reg/build/bootloader-prefix/src/bootloader-stamp"
  "D:/git/APPS/shift_reg/build/bootloader-prefix/src"
  "D:/git/APPS/shift_reg/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/git/APPS/shift_reg/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
