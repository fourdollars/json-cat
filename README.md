Installation
============

Ubuntu 10.04
------------

    sudo apt-add-repository ppa:fourdollars/lucid
    sudo apt-get update
    sudo apt-get install libjson-cat-dev

Sample
======

    json_cat* json = json_cat_create();
    json->load(json, "file.json")
        ->object(json, "member")
        ->arrary(json, 4)
        ->getString(json);
    json->destroy(json);

Compilation
===========

    autoreconf -ifs
    ./configure
    make

Test
----

    ./test_cat sample.json

License
=======

Licensed under the [Apache License, Version 2.0](http://www.apache.org/licenses/LICENSE-2.0)
