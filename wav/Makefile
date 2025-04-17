# 编译器设置
CC       = gcc
CFLAGS   = -Wall -Wextra -g -IInc
LDFLAGS  = 

# 目录配置
SRC_DIR  = Src
INC_DIR  = Inc
BUILD_DIR= build

# 项目文件
TARGET   = $(BUILD_DIR)/wav_parser
SRCS     = $(wildcard $(SRC_DIR)/*.c)
OBJS     = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS))

# 默认构建目标
all: $(TARGET)

# 生成可执行文件
$(TARGET): $(OBJS) | $(BUILD_DIR)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

# 构建目录创建规则
$(BUILD_DIR):
	@mkdir -p $@

# 单个源文件编译规则
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(wildcard $(INC_DIR)/*.h) | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# 清理构建产物
clean:
	rm -rf $(BUILD_DIR)

# 伪目标声明
.PHONY: all clean