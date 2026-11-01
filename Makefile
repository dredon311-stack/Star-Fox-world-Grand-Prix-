# Libdragon Makefile
# Build from a configured Libdragon environment with: libdragon make
BUILD_DIR = build
include $(N64_INST)/include/n64.mk

OBJS = $(BUILD_DIR)/main.o

all: starfox_world_grand_prix.z64

starfox_world_grand_prix.z64: $(OBJS)
starfox_world_grand_prix.z64: N64_ROM_TITLE = "WORLD GRAND PRIX"

clean:
	rm -rf $(BUILD_DIR) *.z64

.PHONY: all clean
