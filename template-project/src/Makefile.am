include $(top_srcdir)/build-aux/init.mk

# Add available warnings flags.
AM_CXXFLAGS += $(WARNING_CXXFLAGS)

include_HEADERS =					\
				fwd.hh			\
				&PACKAGE_TARNAME&.hh

lib_LTLIBRARIES = lib&PACKAGE_TARNAME&.la

lib&PACKAGE_TARNAME&_la_SOURCES = 			\
				doc.hh			\
				&PACKAGE_TARNAME&.cc
