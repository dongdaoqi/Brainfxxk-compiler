#ifndef GETFILE_H
#define GETFILE_H

#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>

inline std::string getfile(const char* path) {
    std::ifstream file(path);
    if (!file.is_open()) {
        throw std::runtime_error(std::string("") + path);
    }
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

template<typename T>
inline void genfile(const char* path, const T& content) {
    std::ofstream file(path, std::ios::out | std::ios::trunc);
    if (!file) {
        throw std::runtime_error(std::string("") + path);
    }
    file << content;
    if (!file) {
        throw std::runtime_error(std::string("") + path);
    }
}

template<typename T>
inline void plsfile(const char* path, const T& content) {
    std::ofstream file(path, std::ios::out | std::ios::app);
    if (!file) {
        throw std::runtime_error(std::string("") + path);
    }
    file << content;
    if (!file) {
        throw std::runtime_error(std::string("") + path);
    }
}

#endif