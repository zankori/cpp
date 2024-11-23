#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <string>

void    fill_newfile(std::ofstream &file_replace, std::string line);
int check_error(std::ifstream &file);


#endif