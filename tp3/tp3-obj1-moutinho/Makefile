COMP = heptc
LIB_PATH := $(shell $(COMP) -where)
SRC	:= $(wildcard *.ept)
OBJ	:= $(patsubst %.ept,%.gen, $(SRC))
EXTERNS := $(wildcard *.epi)
OBJ_EXT	:= $(patsubst %.epi,%.genepi, $(EXTERNS))

all:	$(OBJ_EXT) $(OBJ)
	gcc -I $(LIB_PATH)/c -I . *.c *_c/*.c -o main

%.gen:	%.ept
	$(COMP) -target c $<

%.validate:	%.ept
	$(COMP) $<

%.genepi:	%.epi
	$(COMP) -target c $<

.PHONY:	clean *.gen *.validate all myext
clean:
	$(RM) *.log 
	$(RM) *.epci 
	$(RM) *.mls
	$(RM) *.o *.obj *.obc main
	$(RM) -r *_c
