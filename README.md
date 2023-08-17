# Creating a CMake Based project

This repository contains a C++ project with multiple directories that showcases the use of separate source files, a custom library, and a CMake build system for managing and building the project.

## Project Structure

The project is organized into the following directories:

1. `src`: Contains the main program source code.
   - `main.cpp`: The main entry point of the program.
   - `Print.cpp`: Contains the function to print "helloWorld" to the console.
   - `CMakeLists.txt`: CMake configuration file for building the executable.

2. `library`: Contains additional source code and headers for the custom library.
   - `WriteInFile.cpp`: Contains the function to write "helloWorld" to a file.
   - `CMakeLists.txt`: CMake configuration file for building the custom library.

3. `include`: Contains header files for the custom library.
   - `Print.h`: Header for the function to print to the console.
   - `WriteInFile.h`: Header for the function to write to a file.

4. `CMakeLists.txt`: CMake configuration file in the root directory for the entire project.

## Requirements

To build and run the project, you need the following installed:

- CMake (version >= 3.10)
- C++ Compiler (e.g., g++)

## Building and Running

1. Clone the repository to your local machine:
   ```sh
   git clone https://github.com/your-username/your-repository.git
   ```

2. Navigate to the repository's directory:
   ```sh
   cd your-repository
   ```

3. Create a build directory:
   ```sh
   mkdir build
   cd build
   ```

4. Generate build files using CMake:
   ```sh
   cmake ..
   ```

5. Build the project:
   ```sh
   make
   ```

6. Run the executable:
   ```sh
   ./src/FinalTarget
   ```

## Library Details

- The `Print` library provides a function to print "helloWorld" to the console.
- The `WriteInFile` library provides a function to write "helloWorld" to a file named `helloWorld.txt`.

## License

This project is licensed under the [MIT License](LICENSE).

---

Please replace `"your-username"` and `"your-repository"` with your actual GitHub username and repository name. You can modify the content as needed and add more sections if you want to provide additional information or instructions.