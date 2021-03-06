/*
 * Copyright 2011 Emmanuel Engelhart <kelson@kiwix.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU  General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#ifndef KIWIX_PATHTOOLS_H
#define KIWIX_PATHTOOLS_H

#include <fcntl.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fstream>
#include <ios>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#ifdef _WIN32
#include <direct.h>
#endif

#include "stringTools.h"

using namespace std;

bool isRelativePath(const string& path);
string computeAbsolutePath(const string path, const string relativePath);
string computeRelativePath(const string path, const string absolutePath);
string removeLastPathElement(const string path,
                             const bool removePreSeparator = false,
                             const bool removePostSeparator = false);
string appendToDirectory(const string& directoryPath, const string& filename);

unsigned int getFileSize(const string& path);
string getFileSizeAsString(const string& path);
bool fileExists(const string& path);
bool makeDirectory(const string& path);
bool copyFile(const string& sourcePath, const string& destPath);
string getLastPathElement(const string& path);
string getExecutablePath();
string getCurrentDirectory();
bool writeTextFile(const string& path, const string& content);
#endif
