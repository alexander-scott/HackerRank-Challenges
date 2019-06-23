[![Build Status](https://travis-ci.org/Alexander-Scott/HackerrankSolutions.svg?branch=master)](https://travis-ci.org/Alexander-Scott/HackerrankSolutions)
[![codecov](https://codecov.io/gh/Alexander-Scott/HackerrankSolutions/branch/master/graph/badge.svg)](https://codecov.io/gh/Alexander-Scott/HackerrankSolutions)
[![Coverage Status](https://coveralls.io/repos/github/Alexander-Scott/HackerrankSolutions/badge.svg?branch=master)](https://coveralls.io/github/Alexander-Scott/HackerrankSolutions?branch=master)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/9d882ecec67a490088b782576abe205f)](https://www.codacy.com/app/Alexander-Scott/HackerrankSolutions?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Alexander-Scott/HackerrankSolutions&amp;utm_campaign=Badge_Grade)

# Learn Test Driven Development

## Introduction

This repository will help you learn TDD through several exercises that work towards creating a console based chess game and AI. 

## Learning Goals
- How to play chess!
- Git
- Google Tests
- CMake

## Tutorial Tech Stack
- CLion
- MacOS

#   1) Setup

## Create a new Git Repository

Firstly we need to create a new Git repository for our code to live in. 

```sh
mkdir LearnTDD
cd LearnTDD
git add README.md
git commit -m "Initial Commit"
curl -o .gitignore https://raw.githubusercontent.com/github/gitignore/master/C%2B%2B.gitignore
git remote add origin git@github.com:GITHUBUSERNAME/LearnTDD.git
git push -u origin master
```

Replace "GITHUBUSERNAME" with your GitHub user name if you want to push the repository to GitHub. If you don't want to push the repository anywhere ignore the last two lines. The curl command creates a new Git Ignore file using the C++ template located on GitHub, 


## Create a new C++ Project

Using the CLion GUI create a new executeable project with C++14 and put it in the newly created folder. This will create a two keys files: main.cpp file and CMakeLists.txt, and with the contents of the make file looking something like the below. This make file tells CMake to create an executeable called LearnTDD (might be different in your project) and to include the file main.cpp. 

```cmake
cmake_minimum_required(VERSION 3.14)
project(LearnTDD)

set(CMAKE_CXX_STANDARD 14)

add_executable(LearnTDD) main.cpp)
```

If you are not using CLion you will need to do a make build every time the make file is changed. 

# Contents

## 1) Create Project and Repo

Base project with just Git files, main.cpp and a make file.

## 2) Add Google Tests and setup Project Structure

## 3) 

