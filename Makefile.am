include_HEADERS = json_cat.h
noinst_PROGRAMS = test_cat
lib_LTLIBRARIES = libjson-cat.la

test_cat_SOURCES = test_cat.c
test_cat_LDADD = libjson-cat.la

libjson_cat_la_SOURCES = json_cat.c
libjson_cat_la_CPPFLAGS= @JSON_CFLAGS@
libjson_cat_la_LDFLAGS= @JSON_LIBS@
