TEXT := abc def hef
FILTERED := $(filter %f,$(TEXT)) # abc def hef 중 f로 끝나는 원소를 가져옴
RET := 	$(if $(FILTERED),	\
			yes,			\
			no     			\
		)

A:=
B:=b
C:=c

OR = $(or $(A),$(B),$(C))   # A, B, C 순서대로 체크해서 값이 있는 녀녀석이 나오면 바로 거기서 해당값을 반환함
AND = $(and $(A),$(B),$(C)) # A, B, C 모두 진행해서 전부 값이 있으면 마지막 원소를 반환



all: all2
	@# 1def hef1은 빈 문자가 아니므로 yes 출력
	@echo $(RET)

	@# 1def hef1 출력
	@echo 1$(FILTERED)1
	
	@# 1b 2 출력
	@echo 1${OR}2	

	@# 12 출력
	@echo 1${AND}2	

	@# 1bbcc dd2 출력
	$(info 1$(or $(subst aa bb,cc dd,bbaa bb),$(subst aa bb,dd,zzzz))2)   



a :=
b := $(shell )

ifeq "$(a)" "$(b)"
CCCjjj := GG
endif

all2: need1 
	@echo $(RESULT) 
	@echo $(CCCjjj)
	@echo all

need1:
	@echo need1

