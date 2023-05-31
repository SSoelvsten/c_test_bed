.PHONY: build build/* clean run run/*

MAKE_FLAGS=-j $$(nproc)

# ============================================================================ #
#  BUILD
# ============================================================================ #
BUILD_TYPE = "Release"

build:
	$(MAKE) build/c
	$(MAKE) build/cpp

build/cpp:
	@mkdir -p build/ && cd build/ && cmake -D CMAKE_BUILD_TYPE=$(BUILD_TYPE) ..
	@cd build/ && make cpp_test

build/c:
	@mkdir -p build/ && cd build/ && cmake -D CMAKE_BUILD_TYPE=$(BUILD_TYPE) ..
	@cd build/ && make c_test

# ============================================================================ #
#  CLEAN
# ============================================================================ #
clean:
	@rm -r -f build/

# ============================================================================ #
#  RUN
# ============================================================================ #
run/c:
	@./build/c/c_test

run/cpp:
	@./build/cpp/cpp_test
