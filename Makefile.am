include_HEADERS = json_cat.h
noinst_PROGRAMS = test_cat
lib_LTLIBRARIES = libjson-cat.la

test_cat_SOURCES = test_cat.c
test_cat_LDADD   = libjson-cat.la

libjson_cat_la_SOURCES  = json_cat.c
libjson_cat_la_CPPFLAGS = @json_CFLAGS@ @soup_CFLAGS@
libjson_cat_la_LDFLAGS  = @json_LIBS@ @soup_LIBS@ -version-info @LT_CURRENT@:@LT_REVISION@:@LT_AGE@

pkgconfigdir   = $(libdir)/pkgconfig
pkgconfig_DATA = json-cat.pc

EXTRA_DIST = json-cat.pc.in sample.json
