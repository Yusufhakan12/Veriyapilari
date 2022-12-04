all:derle bagla calistir
derle:
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
	g++ -c -I "./include" ./src/Dugum.cpp -o ./lib/Dugum.o
	g++ -c -I "./include" ./src/Dugumy.cpp -o ./lib/Dugumy.o
	g++ -c -I "./include" ./src/Dosya.cpp -o ./lib/Dosya.o
	g++ -c -I "./include" ./src/Liste.cpp -o ./lib/Liste.o
	g++ -c -I "./include" ./src/yoneticilistesi.cpp -o ./lib/yoneticilistesi.o


bagla:
	g++ ./lib/Liste.o ./lib/Dugum.o ./lib/yoneticilistesi.o ./lib/Dosya.o ./lib/main.o ./lib/Dugumy.o -o ./bin/program
calistir:
	./bin/program