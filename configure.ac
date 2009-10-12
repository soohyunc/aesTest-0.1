#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.
# $Id$

AC_PREREQ(2.61)
AC_INIT([aesTest],[0.1],[s.choi@computer.org])
AM_INIT_AUTOMAKE(aesTest, 0.1)
AC_CONFIG_SRCDIR([src/aes.c])
AM_CONFIG_HEADER(config.h)
#AM_CONFIG_HEADER([config.h])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([string.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST

# Checks for library functions.
AC_FUNC_MEMCMP
AC_CHECK_FUNCS([memset])

AC_CONFIG_FILES([Makefile
                 src/Makefile])
AC_OUTPUT
