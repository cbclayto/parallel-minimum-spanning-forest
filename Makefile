msf-solver: src/main.cpp src/graph.cpp
	g++ -o msf-solver -std=c++11 -fvisibility=hidden -O3 -g src/main.cpp src/graph.cpp
