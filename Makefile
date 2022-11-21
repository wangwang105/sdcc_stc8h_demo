
######BIN####################
# target 
TARGET = sdcc_stc8H

#########################
# build path
#########################
BUILD_DIR = build

##########################
# compiler
##########################
CC = sdcc
HEX = packihx
BIN = objcopy -I ihex -O binary 

##########################
# simplify rm -rf
##########################
RM = rm -rf

########################
# optimization parameter
#######################
parameter = \
	      --model-small \
		  --code-size 65535 \
		  --iram-size 256 \
		  --xram-size 8192 

#   --stack-auto

# CFLAGS = -D SDCC51=0 

#############################
# sdcc Intermediate file
############################


REL = $(patsubst src/%.c,$(BUILD_DIR)/%.rel ,$(wildcard src/*.c))

test:
	@echo $(REL)
# REL = \
# $(BUILD_DIR)/main.rel \
# $(BUILD_DIR)/delay.rel \
# $(BUILD_DIR)/stc8h_it.rel 


############################
# Hearder file path
INCDIR= \
-I inc
# -I UART 
# -I MCP2515

$(BUILD_DIR)/$(TARGET).bin : $(BUILD_DIR)/$(TARGET).hex
		$(BIN)  $^ $@

$(BUILD_DIR)/$(TARGET).hex : $(BUILD_DIR)/main.ihx
		$(HEX) $^ > $@

$(BUILD_DIR)/main.ihx : $(REL)
		$(CC) $(parameter) $^ -o "$@"

#########################################################
# 需要自行添加sdcc编译语句

$(BUILD_DIR)/delay.rel : src/delay.c | $(BUILD_DIR)
		$(CC) $(parameter)  -c $^ \
		$(INCDIR) -o "$@"

$(BUILD_DIR)/stc8h_it.rel : src/stc8h_it.c | $(BUILD_DIR)
		$(CC) $(parameter)  -c $^ \
		$(INCDIR) -o "$@"

$(BUILD_DIR)/main.rel : src/main.c | $(BUILD_DIR)
		$(CC) $(parameter)  -c $^ \
		$(INCDIR) -o "$@"

$(BUILD_DIR):
		mkdir $(BUILD_DIR)
#########################################################


.PHONY: clean cleanall
clean:
	$(RM) \
	$(BUILD_DIR)/*.asm \
	$(BUILD_DIR)/*.ihx \
	$(BUILD_DIR)/*.lk \
	$(BUILD_DIR)/*.lst \
	$(BUILD_DIR)/*.map \
	$(BUILD_DIR)/*.mem \
	$(BUILD_DIR)/*.rel \
	$(BUILD_DIR)/*.rst \
	$(BUILD_DIR)/*.sym

cleanall:
	$(RM) \
	$(BUILD_DIR)/*


