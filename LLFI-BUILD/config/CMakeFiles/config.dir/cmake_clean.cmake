FILE(REMOVE_RECURSE
  "CMakeFiles/config"
  "__init__.py"
  "llvm_paths.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/config.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
