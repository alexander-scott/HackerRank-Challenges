[![Build Status](https://travis-ci.org/Alexander-Scott/Hackerrank-Challenges.svg?branch=master)](https://travis-ci.org/Alexander-Scott/Hackerrank-Challenges)
[![codecov](https://codecov.io/gh/Alexander-Scott/HackerRank-Challenges/branch/master/graph/badge.svg)](https://codecov.io/gh/Alexander-Scott/HackerRank-Challenges)
[![Coverage Status](https://coveralls.io/repos/github/Alexander-Scott/HackerRank-Challenges/badge.svg)](https://coveralls.io/github/Alexander-Scott/HackerRank-Challenges)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/54103631939944538a94bc34f63ae821)](https://www.codacy.com/app/Alexander-Scott/HackerRank-Challenges?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Alexander-Scott/HackerRank-Challenges&amp;utm_campaign=Badge_Grade)

# HackerRank Challenges

## Introduction

This repository contains some of HackerRank's challenges as unit tests, both with and without working solutions. The reason for creating this repository was because I prefer to complete the challenges in my own IDE with the ability to debug the code.

## Tech Stack

- Git
- CMake
- CLion (or your preferred IDE)
- Clang (or your preferred compiler, I'm on MacOS)
- GoogleTest (included)

## Project Overview

The challenges folder contains classes with unit tests that represent each HackerRank challenge. If you just want to solve the challenges there isn't much reason to enter that folder. The solutions folder contain the solution to each challenge, with the Master branch containing completed solutions and the DoItYourself branch containing incomplete solutions.

## Development

Clone the git repository. Create the project using CMake. Open the solution with your preferred IDE. Set the build configuration to Challenges. Running the project will then trigger all the GTests and the result of which will be written to the output. If you're on the DoItYourself branch, start editing the source files in the Solutions folder to try and get the tests to pass. A link to the challenge description is at the top of every file.