all:
	nvcc -ccbin=$(CXX) -O3 -arch=sm_80 matrixmul.cu -o matrixmul

clean:
	rm -f matrixmul
