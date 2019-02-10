JFLAGS		= -g
ENTRY_CLASS	= Main

JC		= javac
SRC_DIR		= src
CLASS_DIR	= bin
SRC_FILE	= $(SRC_DIR)/*.java
MANIFEST_FILE	= $(CLASS_DIR)/MANIFEST.MF
JAR_FILE	= $(notdir $(shell pwd)).jar

.PHONY: all
all: $(SRC_DIR) $(CLASS_DIR) $(MANIFEST_FILE) $(JAR_FILE)
$(SRC_DIR):
	mkdir -p $@

$(CLASS_DIR):
	mkdir -p $@

$(SRC_FILE):
	mv *.java $(SRC_DIR)

$(MANIFEST_FILE):
	printf "Main-Class: $(ENTRY_CLASS)\n" > $(MANIFEST_FILE)

$(JAR_FILE): $(SRC_FILE) $(SRC_DIR) $(CLASS_DIR)
	$(JC) $< -d $(CLASS_DIR) $(JFLAGS)
	jar cvfm $@ $(MANIFEST_FILE) -C $(CLASS_DIR) .


.PHONY: clean
clean: 
	@if [ -d "$(SRC_DIR)" ]; then mv $(SRC_FILE) .; fi
	rm -rf $(SRC_DIR) $(CLASS_DIR) $(JAR_FILE) 


.PHONY: run
run:
	@java -jar $(JAR_FILE)
