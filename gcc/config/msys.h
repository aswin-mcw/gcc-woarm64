/* MSYS target overrides */

#undef EXTRA_OS_CPP_BUILTINS

#define EXTRA_OS_CPP_BUILTINS()        \
  do {                                \
    builtin_define("__MSYS__");        \
    builtin_define("_WIN32");          \
    builtin_define("__unix__");        \
  } while (0)
c