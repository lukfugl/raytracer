.PHONY: tree

tree:
		@cd scene && make
		@cd cv97 && make
		@make trace

trace: trace.cc scene/libscene.a cv97/libcv97.a
		g++ -o trace trace.cc -Iscene -Icv97 -Lscene -Lcv97 -L/usr/X11R6/lib -lscene -lcv97 -lGL -lGLU -lglut -lm -lX11

test: test.cc
		g++ -g -o test test.cc -Iscene -Icv97 -Lscene -Lcv97 -L/usr/X11R6/lib -lscene -lcv97 -lGL -lGLU -lglut -lm -lX11
