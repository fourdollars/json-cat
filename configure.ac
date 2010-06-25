#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.65])
AC_INIT([json-cat], [0.1], [http://github.com/fourdollars/json-cat/issues])
AC_CONFIG_SRCDIR([test_cat.c])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([-Wall -Werror foreign])

LT_PREREQ([2.2.6])
LT_INIT
# 1. Start with version information of `0:0:0' for each libtool library.
#
# 2. Update the version information only immediately before a public
#    release of your software.  More frequent updates are unnecessary,
#    and only guarantee that the current interface number gets larger
#    faster.
#
# 3. If the library source code has changed at all since the last
#    update, then increment REVISION (`C:R:A' becomes `C:r+1:A').
#
# 4. If any interfaces have been added, removed, or changed since the
#    last update, increment CURRENT, and set REVISION to 0.
#
# 5. If any interfaces have been added since the last public release,
#    then increment AGE.
#
# 6. If any interfaces have been removed or changed since the last public release,
#    then set AGE to 0.
LT_CURRENT=0
LT_REVISION=0
LT_AGE=0
AC_SUBST(LT_CURRENT)
AC_SUBST(LT_REVISION)
AC_SUBST(LT_AGE)

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
