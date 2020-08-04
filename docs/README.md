
# Triangle Project

## Introduction

## Instructions


### Doxygen Quick Start

```
$ cd docs/doxygen/
$ doxygen
```

Then modify `Doxyfile` accordingly.


### Create Sphinx Project

```
$ cd docs/
$ mkdir -p sphinx
$ cd sphinx/
$ sphinx-quickstart 
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
> Project release []: 1.1

If the documents are to be written in a language other than English,
you can select a language here by its language code. Sphinx will then
translate text that it generates into that language.

For a list of supported codes, see
https://www.sphinx-doc.org/en/master/usage/configuration.html#confval-language.
> Project language [en]: 

Creating file /home/leimao/GitHub/Sphinx-CPP-TriangleLib/docs/sphinx/source/conf.py.
Creating file /home/leimao/GitHub/Sphinx-CPP-TriangleLib/docs/sphinx/source/index.rst.
Creating file /home/leimao/GitHub/Sphinx-CPP-TriangleLib/docs/sphinx/Makefile.
Creating file /home/leimao/GitHub/Sphinx-CPP-TriangleLib/docs/sphinx/make.bat.

Finished: An initial directory structure has been created.

You should now populate your master file /home/leimao/GitHub/Sphinx-CPP-TriangleLib/docs/sphinx/source/index.rst and create other documentation
source files. Use the Makefile to build the docs, like so:
   make builder
where "builder" is one of the supported builders, e.g. html, latex or linkcheck.
```

Then modify `sphinx/source/conf.py` accordingly.


### Generate Doxygen XML and Sphinx Documentations

```
$ cd docs/sphinx
$ make html
```

### Host Doxygen Documentations on Read the Docs

Go to [Read the Docs](`https://readthedocs.org/dashboard/import/manual/`) and follow the instructions to publish the documentations. The latest version of the documentation of this repo could be found on [TriangleLib's Documentation](https://sphinx-c-trianglelib.readthedocs.io/) for version control on Read the Docs.

## References

* [Using Doxygen in Read the Docs](https://stackoverflow.com/questions/36064976/using-doxygen-in-read-the-docs)
