FROM gcc:4.9
COPY . .
EXPOSE 8080
RUN gcc -o server server.cpp
CMD ["./server"]