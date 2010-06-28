License
=======

Licensed under the [Apache License, Version 2.0](http://www.apache.org/licenses/LICENSE-2.0)

Installation
============

Ubuntu 10.04 PPA
----------------

    sudo apt-add-repository ppa:fourdollars/lucid
    sudo apt-get update
    sudo apt-get install libjson-cat-dev

From Scratch
------------

### Requirement

 - autoconf
 - automake
 - libtool
 - pkg-config
 - json-glib-1.0
 - libsoup-2.4

### Compilation

    autoreconf -ifs
    ./configure
    make

### Test

    ./test_cat sample.json

### Install

    make install

Sample
======

    #include <json-cat.h>

    int main(int argc, char* argv[]) {
        json_cat* json = json_cat_create();
        json->load(json, "file.json")
            ->object(json, "member")
            ->arrary(json, 4)
            ->getString(json);
        json->destroy(json);
        return 0;
    }
