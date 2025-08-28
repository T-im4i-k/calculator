# Qualqulator

![Screenshot](assets/background.png)

## Description

**Qualqulator** is a modern calculator with a clean, customizable UI built from custom elements.  
It uses a [Pratt parsing algorithm](https://en.wikipedia.org/wiki/Operator-precedence_parser#Pratt_parsing) for expression evaluation, ensuring correct operator precedence and making the system easily **extensible**.  
The combination of a **modular UI** and robust parsing highlights both usability and solid software design.

## Dependencies

- **C++ compiler:** Clang++ 18.1.3  
- **Qt:** 6.9  
- **CMake:** 3.28  
- **Ninja:** 1.11.1

## Build & Run

### Debug Build + Testing
Build the project in Debug mode (includes extra logging and assertions) and run tests:

```sh
# Build Debug
cmake --preset=clang-debug-build
cmake --build --preset=clang-debug-build

# Run application
./build/clang-debug-build/src/qualqulator

# Run tests
ctest --preset=clang-test
```

### Release Build
```sh
# Build Release
cmake --preset=clang-release-build
cmake --build --preset=clang-release-build

# Run application
./build/clang-release-build/src/qualqulator
```

# Important

Before building the project, create your own CMakeUserPresets.json from CMakeUserPresets.template.json and update the CMAKE_PREFIX_PATH variable to point to your actual Qt CMake path.