cpp_vs_python.png : SantiagoOrtiz_Graficas.py times_cpp.csv times_python.csv
	python SantiagoOrtiz_Graficas.py
times_python.csv : SantiagoOrtiz_GenerarTiempos.py
	python SantiagoOrtiz_GenerarTiempos.py >> times_python.csv
times_cpp.csv : SantiagoOrtiz_GenerarTiempos.cpp
	g++ SantiagoOrtiz_GenerarTiempos.cpp -o gen_times.out
	./gen_times.out >> times_cpp.csv
