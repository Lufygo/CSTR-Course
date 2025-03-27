heptc -target c first.ept
export LIB_PATH=$(heptc -where)
echo $LIB_PATH
gcc -I "$LIB_PATH/c" -I . main.c first_c/*.c -o main