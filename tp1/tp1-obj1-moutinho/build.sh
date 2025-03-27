heptc -target c hept_functions.ept
export LIB_PATH=$(heptc -where)
gcc -I "$LIB_PATH/c" -I . main.c hept_functions_c/*.c -o main