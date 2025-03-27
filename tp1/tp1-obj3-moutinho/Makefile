COMP = heptc
LIB_PATH := $(shell $(COMP) -where)
SRC	:= $(wildcard *.ept)
OBJ	:= $(patsubst %.ept,%.gen, $(SRC))

all: $(OBJ)
	gcc -I $(LIB_PATH)/c -I . *.c *_c/*.c -o main

%.gen:	%.ept
	$(COMP) -target c $<

%.validate:	%.ept
	$(COMP) $<

.PHONY:	clean *.gen *.validate all
clean:
	$(RM) *.log 
	$(RM) *.epci 
	$(RM) *.mls
	$(RM) *.o *.obj *.obc main
	$(RM) -r *_c
