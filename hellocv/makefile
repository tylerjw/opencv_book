TARGET = hello_opencv
OBJECTS = hello_opencv.o

CXX = g++
CFLAGS = -g -Wall `pkg-config opencv --cflags` 
LDFLAGS = `pkg-config opencv --libs`

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) $(CFLAGS) $(LDFLAGS) -o $(TARGET)

clean: 
	rm -f $(OBJECTS) $(TARGET)