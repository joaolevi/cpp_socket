# C++ Projects

This repository has some projects using concepts like sockets, threads and multithreads. All of them, running as a Docker Image.

Along of the README you'll see some explanations showing how to run the code in the terminal and mainly as a Docker Image.

## Single Client

The single client project has just two .cpp archives. One is the server and the other is the client.

#### Running on terminal

To run this project you can run directly on the terminal with these cmd commands:

On the server.cpp path: `gcc -o server server.cpp` and `./server.out`

On the client.cpp path: `gcc -o client client.cpp` and `./client.out`

#### Running as a Docker Image

To run the single client project on Docker you need go to the path on terminal where is the server and run:

`$docker run -d --network=host --name server server`

The `-d` allows us to use the terminal after the container be ran. The most important thing is the flag --network because it creates a bridge between the two docker containers (server <> client).

Do the same with the client writing in the terminal: 

`$docker run -d --network=host --name client client`

You will see the message sent by the server to the client and another sent back. 

![image](https://user-images.githubusercontent.com/56874672/214546596-1e61379a-a54e-4f91-a81e-bec80eedd660.png)

![image](https://user-images.githubusercontent.com/56874672/214546576-daab37ae-97bf-485b-8f5f-3d10a5ae8856.png)


