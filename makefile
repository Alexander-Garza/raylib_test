application_name = test
main = main
linker_flags = -lraylib -lgdi32 -lwinmm
compiler_flags = -O3
all:
	mkdir -p build
	gcc -o build/$(application_name).exe $(main).c $(linker_flags) $(compiler_flags)

clean:
	rm -rf build
