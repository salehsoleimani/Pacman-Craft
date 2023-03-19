# Cpp-Pacman
a cool nostalgic graphical pac-man game written with cpp

# Installation
## Prerequisites
- Make sure you have CMake installed on your system. You can download it from the official website (https://cmake.org/).
- C++ Compiler (GCC is recommended)

## Run the project
1. Open a terminal or command prompt and navigate to the root directory of the CMake project.

2. Create a new directory for the build output files. This can be done by running the following command in the terminal:
```
mkdir build
```
3. Change to the build directory by running:
```
cd build
```
4. Generate the build files by running the CMake command with the path to the root directory of the project:
```
cmake ..
```
5. Once the CMake command completes successfully, you can now build the project by running:
```
cmake --build .
```
This command will build the project according to the instructions specified in the CMakeLists.txt file.
6. Once the build process is complete, you can run the executable file generated by the build process. This file will typically be located in the build directory.
```
./executable_name
```
Replace "executable_name" with the name of the executable file generated by the build process.



## Preview
here's some screenshots from game

<img src="https://github.com/salehsoleimani/Cpp-Pacman/blob/master/Screenshot%202023-03-14%20at%2011.52.13%20AM.png"  width="300"><img src="https://github.com/salehsoleimani/Cpp-Pacman/blob/master/Screenshot%202023-03-14%20at%2011.51.55%20AM.png"  width="300"><img src="https://github.com/salehsoleimani/Cpp-Pacman/blob/master/Screenshot%202023-03-14%20at%2011.52.08%20AM.png"  width="300">

## Custom Map Designer
you can also create your own pacman map with any game objects you want without any limits:)

<img src="https://github.com/salehsoleimani/Cpp-Pacman/blob/master/Screenshot%202023-03-14%20at%2011.54.12%20AM.png"  width="300"><img src="https://github.com/salehsoleimani/Cpp-Pacman/blob/master/Screenshot%202023-03-14%20at%2011.54.17%20AM.png"  width="300">

## Project Architecture
normally c++ and sfml doesnt offer an architecture for building your apps. it's just a simple straightforward gui library. i needed to implement a simple architecture to give it some discipline and easily maintain the code. 

here's a review from what i've done:

<img src="https://github.com/salehsoleimani/Cpp-Pacman/blob/master/pic.png"  width="600">
