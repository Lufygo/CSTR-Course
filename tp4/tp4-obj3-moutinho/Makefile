COMP = heptc
LIB_PATH := $(shell $(COMP) -where)
SRC	:= $(wildcard extern.ept scheduler_data.ept)
OBJ	:= $(patsubst %.ept,%.gen, $(SRC))
EXTERNS := $(wildcard *.epi)
OBJ_EXT	:= $(patsubst %.epi,%.genepi, $(EXTERNS))

all:
	$(COMP) -target c scheduler_data.ept
	$(COMP) -target c extern.epi
	$(COMP) -target c scheduler.ept
	gcc -I $(LIB_PATH)/c -I . -I scheduler_data_c *.c *_c/*.c -o main


.PHONY:	clean all
clean:
	$(RM) *.log 
	$(RM) *.epci 
	$(RM) *.mls
	$(RM) *.o *.obj *.obc main
	$(RM) -r *_c
