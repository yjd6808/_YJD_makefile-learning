MAKEFLAGS += -rR     # builtin rule 과 변수를 disable 하기 위한것

# 현재 디렉토리의 cpp 파일들을 가져온다.
CPPS := $(shell find . -maxdepth 1 -name '*.cpp')
OBJS := $(CPPS:.cpp=.o)

$(info $(OBJS))

main : $(OBJS)
	g++ -o main $^ 

# OBJS중에서 현재 디렉토리의 .o 파일들의 타겟만 .cpp를 필요 조건을 가진다. 
# CPPS를 현재 디렉토리의 .cpp만 얻기 땜에 이 예제는 의미 없는예제인듯?
$(OBJS) : ./%.o : %.cpp
	g++ -o $@ -c $<

# 필요타겟의 recipe를 비워두면 항상 up-to-date 상태가 된다.
# recipe가 비워진 타겟을 필요타겟으로 두게되면 타겟은 항상 recipe를 실행하게된다.
%.cpp: ;

