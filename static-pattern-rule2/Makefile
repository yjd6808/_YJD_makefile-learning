TARGETS := a.out b.out bar/a.out bar/b.out foo/a.out foo/b.out

# 타겟 a.out b.out bar/a.out bar/b.out foo/a.out foo/b.out
# 들이 많이 있지만 static-pattern ./%.out을 적용해줬기 때문에 현재 경로의 a.out과 b.out 타겟만 생성할 수 있다.
$(TARGETS): ./%.out : %.cpp
	g++ -o $@ $< 

%.cpp :	
	$(shell mkdir -p $(@D))
	echo 'int main() { return 0; }' > $@




