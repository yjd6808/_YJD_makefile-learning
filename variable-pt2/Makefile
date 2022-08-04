foo = abc
bar = bcd
baz = ${nullstring}
bof ?= aaaaa
# ?= 이미 초기화된 경우에는 대입 해주지 않음
# = ${}로 접근할 때 초기화 해줌
# := 이 줄을 읽을 때 초기화를 해줌

all:
	echo ${foo}${baz}${bar}
