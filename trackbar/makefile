TARGET = trackbar
OBJECTS = $(TARGET).o

CXX = g++
CFLAGS = -g -Wall `pkg-config opencv --cflags` 
LDFLAGS = `pkg-config opencv --libs`

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) $(CFLAGS) $(LDFLAGS) -o $(TARGET)

clean: 
	rm -f $(OBJECTS) $(TARGET)