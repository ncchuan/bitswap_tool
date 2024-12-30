# Bitswap Tool

This small tool is to reverse the bit order of each byte in a binary file,
it can be useful for the content read from a memory device, or to be programmed
into a memory device, sometimes the bit order could be reversed per our original
expectation.

This C++ project can be compile using 1 of below methods:
- Using Visual Studio 2022.
- Using make in Linux environment.
- Using mingw32-make.exe in Windows environment.

## Table of Contents

- Installation
- Usage
- Contributing
- License
- Contact

## Installation

Clone the repository to your local machine.

```bash
git clone https://github.com/ncchuan/bitswap_tool.git
cd bitswap_tool
```

If you are running Windows machine, follow below steps to build the executable.
- Install MinGW(MinGW-W64 GCC-8.1.0) x86_64-posix-seh, 
          Link: https://sourceforge.net/projects/mingw-w64/files/mingw-w64/
- Add MinGW into environment variables.
- Run build.bat script in ./build folder.

```bash
cd build
build.bat
```

If you are running Linux machine:
- Run build.sh script in ./build folder.

```bash
cd build
./build.sh
```

You can also open the bitswap_tool.sln in Visual Studio 2022, and compile the
project.

## Usage

After compile the project successfully, use below command to execute the tool.
```bash
./bitswap_tool inputfile outputfile
```

## Contributing
Guidelines for contributing to the project.

1. Fork the repository.
2. Create a new branch (git checkout -b feature-branch).
3. Commit your changes (git commit -m 'Add some feature').
4. Push to the branch (git push origin feature-branch).
5. Open a pull request.
6. License
7. Include the license under which your project is distributed. For example:


## Contact
- Email: ncchuan@yahoo.com
- GitHub: ncchuan
