OUTPUT_DIR=./build/bin

#separate OS
ifeq ($(OS),Windows_NT)
EXE=$(OUTPUT_DIR)/bitswap_tool.exe
GXX=x86_64-w64-mingw32-g++.exe
MKDIR=md
RM=del
else
EXE=$(OUTPUT_DIR)/bitswap_tool
GXX=g++
MKDIR=mkdir -p
RM=rm
endif

#all used c cpp file
SRC=$(wildcard ./main.cpp)

#obj file, all o file install in $(OBJ_DIR) path
OBJ=$(patsubst %.cpp, $(OUTPUT_DIR)/%.o, $(notdir $(SRC)))

all: $(OUTPUT_DIR) $(EXE)

$(OUTPUT_DIR):
	$(shell if [ ! -d $(OUTPUT_DIR) ] ; then $(MKDIR) $(OUTPUT_DIR) ; fi)

$(EXE): $(OBJ)
	$(GXX) -o $@ $^

#compile
$(OUTPUT_DIR)/%.o:%.cpp
	$(GXX) -c -o $@ $^

clean:
	$(RM) $(OUTPUT_DIR)/*
