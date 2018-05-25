file(REMOVE_RECURSE
  "CMakeFiles/llvm-config.target"
  "../../bin/llvm-config"
  "FinalLibDeps.txt"
  "LibDeps.txt"
  "LibDeps.txt.tmp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/llvm-config.target.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
