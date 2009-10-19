# Don't expend macros beginning by JRL_.
m4_pattern_forbid([^JRL_])
AC_PREREQ([2.63])

## --------------------- ##
## Package configuration ##
## --------------------- ##
AC_INIT([Packaging tools],
	[1.1],
	[hpp@laas.fr],
	[package-tools])

# Auxiliary files.
AC_CONFIG_AUX_DIR([template-project/build-aux])

# Macros are stored in build-aux.
AC_CONFIG_MACRO_DIR([template-project/build-aux])

# Automake.
AM_INIT_AUTOMAKE([1.9.6 dist-bzip2 -Wall nostdinc])

## ------------------- ##
## Additionnal tools.  ##
## ------------------- ##

# Search for misc. common tools.
AC_PROG_MKDIR_P
AC_PROG_SED

## ------------ ##
## Test-suite.  ##
## ------------ ##

AC_CONFIG_TESTDIR([tests])
AM_MISSING_PROG([AUTOM4TE], [autom4te])


## -------------- ##
## Write output.  ##
## -------------- ##

# Create Makefiles.
AC_CONFIG_FILES([
  Makefile
   tests/Makefile
    tests/atlocal
    tests/package.m4
])

# Generate shell scripts.
AC_CONFIG_FILES(
	[packageCreate packageCreate-local packageDep],
	[chmod +x packageCreate packageCreate-local packageDep])

# Write files.
AC_OUTPUT
