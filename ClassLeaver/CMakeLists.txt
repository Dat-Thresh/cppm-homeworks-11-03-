cmake_minimum_required(VERSION 3.22.0)
project(ClassLeaver)

set(CLASS_LEAVER ClassLeaver.cpp ClassLeaver.h)

add_library(leaver SHARED ${CLASS_LEAVER})