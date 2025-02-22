# FEUP-AED-PROJ1

First project for the AED course unit at FEUP.

The objective of the project was to create a terminal interface for an airline company, using data structures like vector, linked list, queue, stack and binary search tree, as well as algorithms related to these data structures.

## Building

This project uses [cmake](https://cmake.org/). Assuming it's installed and properly setup, simply run `cmake -S . -B build` in this project's directory to generate the build system, then `cmake --build build` to actually build the project.

This will generate two binaries in the `build` directory, `aed_proj1` and `aed_proj1_no_ansi`, one that uses [ANSI escape codes](https://en.wikipedia.org/wiki/ANSI_escape_code) and one that doesn't.

Additionally, documentation will also be generated in the `docs` folder. Run `git submodule init` then `git submodule update` then build again to get the documentation website looking fancy.

## Running

Simply run the executable generated in the last section.

The ui is separated into two parts, one for clients where they can see the public data and buy tickets, and one for employees where they can see all the data and modify it. ~~Don't tell anyone but the credentials are `admin` `admin`.~~

After exiting the application three files will be generated in the current working directory and used for persisting data, `airport.tsv`, `client.tsv` and `plane.tsv`.

## Unit info

* **Name**: Algoritmos e Estruturas de Dados (Algorithms and Data Structures)
* **Date**: Year 2, Semester 1, 2021/22
* **See also**: [feup-aed](https://github.com/ttoino/feup-aed), [feup-aed-mooshak](https://github.com/ttoino/feup-aed-mooshak), [feup-aed-proj2](https://github.com/ttoino/feup-aed-proj2)
* [**More info**](https://sigarra.up.pt/feup/ucurr_geral.ficha_uc_view?pv_ocorrencia_id=484404)

## Disclaimer

This repository (and all others with the name format `feup-*`) are for archival and educational purposes only.

If you don't understand some part of the code or anything else in this repo, feel free to ask (although I may not understand it myself anymore).

Keep in mind that this repo is public. If you copy any code and use it in your school projects you may be flagged for plagiarism by automated tools.
