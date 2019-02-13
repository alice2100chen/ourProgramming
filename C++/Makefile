SUB_DIRS	= $(wildcard */)

BUILD_SUBDIR	= $(SUB_DIRS:%=build-%)
CLEAN_SUBDIR	= $(SUB_DIRS:%=clean-%)


.PHONY: all
all: $(BUILD_SUBDIR)
$(BUILD_SUBDIR):
	$(MAKE) -C $(@:build-%=%)


.PHONY: clean
clean: $(CLEAN_SUBDIR)
$(CLEAN_SUBDIR):
	$(MAKE) -C $(@:clean-%=%) clean
