
# Triangle Project

## Introduction




## Instructions

### Doxygen Quick Start

```
$ cd docs/
$ doxygen
```

Then modify `Doxyfile` accordingly.


### Generate Doxygen Documentations


```
$ cd docs/
$ doxygen Doxyfile
```

### Sphinx Quick Start

```
$ cd docs/
$ sphinx-quickstart --ext-autodoc --ext-doctest --ext-mathjax --ext-viewcode --extensions breathe
Welcome to the Sphinx 3.1.2 quickstart utility.

Please enter values for the following settings (just press Enter to
accept a default value, if one is given in brackets).

Selected root path: .

You have two options for placing the build directory for Sphinx output.
Either, you use a directory "_build" within the root path, or you separate
"source" and "build" directories within the root path.
> Separate source and build directories (y/n) [n]: y

The project name will occur in several places in the built documentation.
> Project name: trianglelib
> Author name(s): Lei Mao
> Project release []: 1.0

If the documents are to be written in a language other than English,
you can select a language here by its language code. Sphinx will then
translate text that it generates into that language.

For a list of supported codes, see
https://www.sphinx-doc.org/en/master/usage/configuration.html#confval-language.
> Project language [en]: 

Creating file /home/leimao/GitHub/Sphinx-CPP-TriangleLib/docs/source/conf.py.
Creating file /home/leimao/GitHub/Sphinx-CPP-TriangleLib/docs/source/index.rst.
Creating file /home/leimao/GitHub/Sphinx-CPP-TriangleLib/docs/Makefile.
Creating file /home/leimao/GitHub/Sphinx-CPP-TriangleLib/docs/make.bat.

Finished: An initial directory structure has been created.

You should now populate your master file /home/leimao/GitHub/Sphinx-CPP-TriangleLib/docs/source/index.rst and create other documentation
source files. Use the Makefile to build the docs, like so:
   make builder
where "builder" is one of the supported builders, e.g. html, latex or linkcheck.
```

Then modify `source/conf.py` accordingly.

