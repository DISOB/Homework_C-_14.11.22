
FROM gcc:11
COPY . .
RUN g++ Main.cpp Func.cpp Func.h -o first.o