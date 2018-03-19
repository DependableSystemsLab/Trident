FILE(REMOVE_RECURSE
  "CMakeFiles/bin"
  "instrument"
  "injectfault"
  "profile"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/bin.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
