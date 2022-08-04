CPPS := $(shell find . -name "*.cpp")
OBJS := $(CPPS:.cpp=.o)

all: $(OBJS)
	@g++ -o main $^ 
	
%.o : %.cpp
	@g++ -o $@ -c $< 

%.cpp: ;
