# Copyright (C) 2010 by Florent Lamiraux, Thomas Moulard, CNRS.
#
# This file is part of the dev-tools.
#
# dev-tools is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# dev-tools is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with dev-tools. If not, see <http://www.gnu.org/licenses/>.

# Don't expend macros beginning by JRL_.
m4_pattern_forbid([^JRL_])
AC_PREREQ([2.63])

## --------------------- ##
## Package configuration ##
## --------------------- ##
AC_INIT([dev-tools],
	[m4_esyscmd(build-aux/git-version-gen .tarball-version)],
	[hpp@laas.fr],
	[dev-tools])

# Auxiliary files.
AC_CONFIG_AUX_DIR([template-project/autotools/build-aux])

# Macros are stored in build-aux.
AC_CONFIG_MACRO_DIR([template-project/autotools/build-aux])

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
	[package-create package-create-local package-dep],
	[chmod +x package-create package-create-local package-dep])

# Write files.
AC_OUTPUT
