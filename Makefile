C_COMPILER=cc

UNITY_ROOT=unity

TEST_TARGET=bin/test

SRC_FILES=$(UNITY_ROOT)/src/unity.c $(UNITY_ROOT)/extras/memory/src/unity_memory.c $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c test/confusion_tests.c test/test_runner.c test/all_tests.c src/confusion.c

INC_DIRS=-Isrc -I$(UNITY_ROOT)/src -I$(UNITY_ROOT)/extras/fixture/src -I$(UNITY_ROOT)/extras/memory/src


tests: $(SRC_FILES)
	- $(C_COMPILER) $(CFLAGS) $(INC_DIRS) $(SRC_FILES) -o bin/test
	- bin/test


solve: src/solve.c
	$(C_COMPILER) src/solve.c -o bin/solve


