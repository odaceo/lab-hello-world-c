# Lab :: Hello World :: C Application

[![License](https://img.shields.io/github/license/odaceo/lab-hello-world-c.svg)](LICENSE)
[![Build Status](https://travis-ci.org/odaceo/lab-hello-world-c.svg)](https://travis-ci.org/odaceo/lab-hello-world-c)

## Description

A simple C application on Linux.

## Prerequisites

[Vagrant](https://www.vagrantup.com/downloads.html) must be installed on your 
computer to mount the workbench for this project.

Open a Terminal and run the following commands:

```shell
vagrant up
vagrant ssh
cd /vagrant
```

## Building the application

The following commands produce the binary file:

``` shell
mkdir build
cd build
cmake .. && make
```

## Running the application

To launch the application use the following command:

``` shell
./hello Odaceo
```

## Reporting Issues

Issues can be reported at [https://github.com/odaceo/lab-hello-world-c/issues](https://github.com/odaceo/lab-hello-world-c/issues)

## Source code

The source code is available at [https://github.com/odaceo/lab-hello-world-c](https://github.com/odaceo/lab-hello-world-c)

## License

All the source code is distributed under [ASL 2.0](LICENSE).

## Copyright

© 2017 [Odaceo](http://odaceo.ch). All rights reserved.
