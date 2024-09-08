CXX = g++
CXXFLAGS = -std=c++17 -Wall

SRCS = main.cpp User.cpp Comment.cpp Epic.cpp Issue.cpp Task.cpp UserActions.cpp MenuHelpers.cpp WorkItem.cpp
OBJS = $(SRCS:.cpp=.o)

ManageTasksApp: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS) ManageTasksApp
