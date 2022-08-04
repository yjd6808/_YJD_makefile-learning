# 하위 디렉토리를 모두 포함한 현재 경로에서 .cpp 파일 목록을 얻는다. 
# 그리고 얻은 CPPS 파일명들에서 .cpp를 .o로 변환한 파일명 목록을 얻는다.
CPPS := $(shell find . -name "*.cpp")
OBJS := $(CPPS:.cpp=.o)

all: $(OBJS)
	g++ -o main $^ 
	
# %.cpp가 현재 경로 뿐만아니라 하위 디렉토리의 cpp까지도 적용되어버림 
# 물론 현재 디렉토리에서만 make를 수행한다면 pattern-rule만으로도 충분하다.
# 우선 이 예제는 하위 mul 디렉토리까지 컴파일이 수행되고 링크까지 된다는 것을 예로듬
%.o : %.cpp
	g++ -o $@ -c $< 

# 현재 디렉토리 뿐만 아니라 하위 디렉토리의 오브젝트 파일도 제거해줘야함
clean: 
	find . -name "*.o" | xargs rm
	
	
