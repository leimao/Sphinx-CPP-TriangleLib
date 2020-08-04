# Sphinx C++ TriangleLib

This library is the C++ version of the [Python Triangle library](https://github.com/leimao/Sphinx-Python-TriangleLib). It is used for the Sphinx C++ documentation tutorial specifically.

Doxygen will generate the required XML files that contains all the documentation content. Sphinx will use the XML files and the `reStructuredText` files the user provided to generate Sphinx documentations. The documentations will be hosted on [Read the Docs](`https://readthedocs.org/dashboard/import/manual/`).

## Files

```
.
├── CMakeLists.txt
├── docs
│   ├── doxygen
│   │   └── Doxyfile
│   ├── README.md
│   └── sphinx
│       ├── make.bat
│       ├── Makefile
│       └── source
│           ├── conf.py
│           ├── index.rst
│           ├── _static
│           └── _templates
├── examples
│   ├── area
│   │   ├── area.cpp
│   │   └── CMakeLists.txt
│   ├── CMakeLists.txt
│   └── README.md
├── include
│   └── triangle.h
├── LICENSE.md
├── README.md
├── requirements.txt
├── src
│   ├── CMakeLists.txt
│   ├── triangle.cpp
│   └── utils.cpp
└── tests
```

## Installation

### Install Dependencies

The `trianglelib` used for the tutorial has no dependency. To install the Doxygen dependencies, please run the following command in the terminal.

```
$ sudo apt-get update
$ sudo apt-get install -y doxygen graphviz
```

To install the Python dependencies, please run the following command in the terminal.


```
$ pip install -r requirements.txt
```

### Build TriangleLib

To build the `trianglelib`, please run the following command in the terminal.

```
$ mkdir -p build
$ cd build
$ cmake ..
$ make -j
```

## Build Documentations

Please check the [`README`](docs/README.md) in [`docs`](docs/) for details.

## Publish Documentations

Go to [Read the Docs](`https://readthedocs.org/dashboard/import/manual/`) and follow the instructions to publish the documentations. The latest version of the documentation of this repo could be found on [TriangleLib's Documentation](https://doxygen-c-trianglelib.readthedocs.io/). Use [GitHub tags](https://github.com/leimao/Sphinx-Python-TriangleLib/tags) for version control on Read the Docs.

## References

* [Python Documentation Using Sphinx](https://leimao.github.io/blog/Python-Documentation-Using-Sphinx/)
* [Python Triangle library](https://github.com/leimao/Sphinx-Python-TriangleLib)