COMP=heptc
LIB_PATH=$(shell $(COMP) -where)
HEPT_SRC=hept_functions.ept

all:
	$(COMP) -target c $(HEPT_SRC)
	gcc -I $(LIB_PATH)/c -I . main.c *_c/*.c -o $*.out

clean:
	$(RM) *.log 
	$(RM) *.epci 
	$(RM) *.mls
	$(RM) *.o *.obj *.obc *.out
	$(RM) -r *_c

.PHONY: clean all

