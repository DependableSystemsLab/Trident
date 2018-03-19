FILE(REMOVE_RECURSE
  "CMakeFiles/tools"
  "tracediff"
  "traceontograph"
  "tracetools.py"
  "traceunion"
  "compiletoIR"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/tools.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
