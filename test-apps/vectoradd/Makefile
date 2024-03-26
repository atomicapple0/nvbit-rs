all:
	nvcc -ccbin=$(CXX) -O3 -lineinfo -arch=sm_80 vectoradd.cu -o vectoradd

clean:
	rm -f vectoradd
