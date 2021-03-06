# Don't expend macros beginning by JRL_.
m4_pattern_forbid([^JRL_])
AC_PREREQ([2.63])

## --------------------- ##
## Package configuration ##
## --------------------- ##
AC_INIT([&PACKAGE_NAME&],
	[m4_esyscmd(build-aux/git-version-gen .tarball-version)],
	[&EMAIL&],
	[&PACKAGE_TARNAME&])

# Auxiliary files.
AC_CONFIG_AUX_DIR([build-aux])

# Macros are stored in build-aux.
AC_CONFIG_MACRO_DIR([build-aux])

# Automake.
AM_INIT_AUTOMAKE([1.9.6 dist-bzip2 -Wall nostdinc])

## ------------- ##
## C++ compiler  ##
## ------------- ##

# Search for a C++ compiler.
AC_LANG([C++])
AC_PROG_CXX

# Speed-up compilation.
if test "$GXX" = yes; then
  CXXFLAGS="$CXXFLAGS -pipe"
fi

# Customize warnings.
JRL_CXX_WARNINGS([[-Wall],
                   [-Werror],
                   [-Wcast-align],
                   [-Wcast-qual],
                   [-Wformat],
                   [-Wmissing-prototypes],
                   [-Wstrict-prototypes],
                   [-Wwrite-strings],
                   [-Wbad-function-cast],
                   [-Wmissing-declarations],
                   [-Wnested-externs]])

## ------------------- ##
## Additionnal tools.  ##
## ------------------- ##

# Search for misc. common tools.
AC_PROG_MKDIR_P
AC_PROG_SED

# Search for Doxygen.
JRL_PROG_DOXYGEN

# Search for Libtool.
LT_INIT

# Search for pkg-config dependencies.
m4_include([deps.ac])

## ------------ ##
## Pkg-config.  ##
## ------------ ##

AC_SUBST([PKGCONFIG_DESCRIPTION], [&PACKAGE_NAME&])
AC_SUBST([PKGCONFIG_CONFLICTS], [])
AC_SUBST([PKGCONFIG_LIBS], [-l&PACKAGE_TARNAME&])
AC_SUBST([PKGCONFIG_CFLAGS], [])


## ------------ ##
## Test-suite.  ##
## ------------ ##

AC_CONFIG_TESTDIR([tests])
AM_MISSING_PROG([AUTOM4TE], [autom4te])


## -------------- ##
## Write output.  ##
## -------------- ##

# Create config.h
AC_CONFIG_HEADERS([config.h])

# Create Makefiles.
AC_CONFIG_FILES([
  Makefile
   include/Makefile
   src/Makefile
   doc/Makefile
   tests/Makefile
    tests/atlocal
    tests/package.m4
])

# Write files.
AC_OUTPUT
