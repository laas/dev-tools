include $(top_srcdir)/build-aux/init.mk

# Add available warnings flags.
AM_CXXFLAGS += $(WARNING_CXXFLAGS)

lib_LTLIBRARIES = lib&PACKAGE_TARNAME&.la

lib&PACKAGE_TARNAME&_la_SOURCES = 			\
				&PACKAGE_TARNAME&.cc

lib&PACKAGE_TARNAME&_la_LIBADD = &PKG_DEPS_LIBS&
lib&PACKAGE_TARNAME&_la_CPPFLAGS = $(AM_CPPFLAGS) &PKG_DEPS_CFLAGS&
