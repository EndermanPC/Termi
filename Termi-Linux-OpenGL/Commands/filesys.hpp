/**
 * @author(S):
        original: StjepanBM1
        OpenGL: Andrej Bartulin
 * PROJECT: Termi-Linux version
 * LICENSE: ringwormGO General License 1.0 | (RGL) 2022
 * DESCRIPTION: Filesystem header file
*/

#pragma once

#include <vector>
#include <dirent.h>

int openfile(std::vector<std::string>& vect);
int list_dir(std::vector<std::string>& vect);
int writefile(std::vector<std::string>& vect);
int new_dir(std::vector<std::string>& vect);
int cd(std::vector<std::string>& vect);
int rm(std::vector<std::string>& vect);
