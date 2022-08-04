PROG:=${shell date}
OBJS := $(shell find $(CURDIR) -name *.o) 
OUT := $(shell expr 100 - 200)
LEN := $(shell expr $(shell expr length '$(OBJS)') - 1)

PATTERN := %.c
TEXT := a.c BB.c a.h C.h

RET := $(filter $(PATTERN),$(TEXT))

all:
	$(info $(PROG)) 
	$(info $(RET))
	
	@# @echo $(PROG) 이렇게 실행하면 $(PROG) 이 결과를 또 실행할려고 해버림
	@# @echo "$(PROG)"  "" 이걸로 감싸줘야한다.
