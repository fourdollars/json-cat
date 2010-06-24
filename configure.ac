#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.65])
AC_INIT([json-cat], [0.1], [http://github.com/fourdollars/json-cat/issues])
AC_CONFIG_SRCDIR([test_cat.c])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([-Wall -Werror foreign])

LT_PREREQ([2.2.6])
LT_INIT

# Checks for programs.
AC_PROG_CC

# Checks for libraries.
PKG_CHECK_MODULES([json], [json-glib-1.0])
PKG_CHECK_MODULES([soup], [libsoup-2.4 >= 2.26])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
