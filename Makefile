# Biến
CXX = g++
CXXFLAGS = -Wall -g
TARGET = main
SOURCES = BOT.cpp CaroApp.cpp ChessBoard.cpp Controller.cpp main.cpp Player.cpp Referee.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Quy tắc mặc định
all: $(TARGET)

# Cách biên dịch chương trình chính
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

# Quy tắc biên dịch từng file .cpp thành .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Quy tắc dọn dẹp
clean:
	rm -f $(OBJECTS) $(TARGET)
