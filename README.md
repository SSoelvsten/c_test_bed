# C Test Bed

This repository contains simple to extend *C* and *C++* programs that are
already set up to be built with *CMake*. The *GitHub Actions* are also already
set up to compile and run the programs on *Windows*, *Mac* and *Linux* with all
the three major compilers.

## Usage

### Local Machine's Settings

You can compile and run the test bed programs directly on your machine. To make
life easier, I have hidden all the *CMake* interaction inside of a *Makefile*.

| target          | effect                              |
|-----------------|-------------------------------------|
| `build/{c,cpp}` | Build the (specified) source files. |
| `clean`         | Remove all build files              |
| `run/{c,cpp}`   | Run the (specified) test beds.      |

### GitHub Action's Settings

The main purpose of this repository is to be able to test a piece of code on
multiple compilers with the specific versions and settings that are used in
GitHub's Actions. Specifically, the *.github/workflows* folder includes a job to
compile and run both the *C* and the *C++* `test_bed` files in their respective
folders.

To run this action, do one of the following two things:

1. Use [act](https://github.com/nektos/act) to run the GitHub actions on your
   local machine by use of Docker images.

2. Create a pull request on your own fork with the program you want to try and
   compile. You can now see the compilation output in the logs.

## License
The software and documentation files in this repository are provided under the
[MIT License](/LICENSE.md).
