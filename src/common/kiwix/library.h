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

#ifndef KIWIX_LIBRARY_H
#define KIWIX_LIBRARY_H

#include <string>
#include <vector>

using namespace std;

namespace kiwix {

  enum supportedIndexType { XAPIAN, CLUCENE };

  class Book {

  public:
    Book();
    ~Book();

    string id;
    string path;
    string last;
    string indexPath;
    supportedIndexType indexType;
    string title;
    string description;
    string language;
    string creator;
    string date;
  };

  class Library {
    
  public:
    Library();
    ~Library();

    string current;
    bool addBook(const Book &book);
    bool removeBookByIndex(const unsigned int bookIndex);
    vector <kiwix::Book> books;

  };

}

#endif
