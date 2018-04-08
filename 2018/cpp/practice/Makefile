CXX = g++ -std=c++11

p1: p1.cpp MyString.cpp
	$(CXX) $? -o p1.out

p3: p3.cpp MyString.cpp
	$(CXX) $? -o p3.out

p4: p4.cpp MyString.cpp
	$(CXX) $? -o p4.out

p5: p5.cpp MyString.cpp
	$(CXX) $? -fno-elide-constructors -o p5.out

clear:
	rm *.out