MAKEFLAGS += -rR     # builtin rule 과 변수를 disable 하기 위한것

CPPS := $(shell find . -name '*.cpp')
OBJS := $(CPPS:.cpp=.o)

$(info $(OBJS))

main : $(OBJS)
	g++ -o main $^ 

$(OBJS) : ./%.o : %.cpp
	g++ -c $@ $<

# 필요타겟의 recipe를 비워두면 항상 up-to-date 상태가 된다.
# recipe가 비워진 타겟을 필요타겟으로 두게되면 타겟은 항상 recipe를 실행하게된다.
%.cpp: ;

