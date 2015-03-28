# lab2
main: BMI.o main.o
      g++ -o main main.o BMI.o
  
main.o: main.cpp BMI.h
      g++ -c main.cpp

BMI.o: BMI.cpp BMI.h
      g++ -c BMI.cpp
  
clean:
      rm main *.o

compile: make
