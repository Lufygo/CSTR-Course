COMP = heptc
LIB_PATH := $(shell $(COMP) -where)
SRC	:= $(wildcard *.ept)
OBJ	:= $(patsubst %.ept,%.gen, $(SRC))
EXTERNS := $(wildcard *.epi)
OBJ_EXT	:= $(patsubst %.epi,%.genepi, $(EXTERNS))

all:	$(OBJ_EXT) $(OBJ)
	echo hello
	gcc -I $(LIB_PATH)/c -I . *.c *_c/*.c -o main

%.gen:	%.ept
	echo hello 1
	$(COMP) -target c $<

%.validate:	%.ept
	echo hello 2
	$(COMP) $<

%.genepi:	%.epi
	echo hello 3
	$(COMP) -target c $<

.PHONY:	clean *.gen *.validate all myext
clean:
	$(RM) *.log 
	$(RM) *.epci 
	$(RM) *.mls
	$(RM) *.o *.obj *.obc main
	$(RM) -r *_c
