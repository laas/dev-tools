# Search for autoconf macros in build-aux.
ACLOCAL_AMFLAGS = -I build-aux

SUBDIRS = 		\
	doc		\
	src		\
	include		\
	tests

# Provide bootstrap and deps.ac with the generated package.
EXTRA_DIST = bootstrap deps.ac

# By default, only generate the pkg-config file.
all: @PACKAGE_TARNAME@.pc

# Pkg-config generation
PKG_CONFIG_FILE = @PACKAGE_TARNAME@.pc
PKG_DIR="$(DESTDIR)$(libdir)/pkgconfig/"

edit = sed -e "s|@prefix\@|$(prefix)|" \
	   -e 's,@exec_prefix\@,$(exec_prefix),g' \
	   -e 's,@libdir\@,$(libdir),g' \
	   -e 's,@includedir\@,$(includedir),g' \
	   -e 's,@datarootdir\@,$(datarootdir),g' \
	   -e 's,@PACKAGE\@,$(PACKAGE),g' \
	   -e 's,@PACKAGE_TARNAME\@,$(PACKAGE_TARNAME),g' \
	   -e 's,@VERSION\@,$(PACKAGE_VERSION),g'

@PACKAGE_TARNAME@.pc: $(builddir)/Makefile $(srcdir)/build-aux/pkg-config.pc.in
	$(edit) $(srcdir)/build-aux/pkg-config.pc.in >$@

EXTRA_DIST += build-aux/pkg-config.pc.in
CLEANFILES = $(PKG_CONFIG_FILE)

install-data-local: install-pkg-config
uninstall-local: uninstall-pkg-config

install-pkg-config: $(PACKAGE_TARNAME).pc
	$(mkdir_p) $(PKG_DIR)
	cp "$(PKG_CONFIG_FILE)" $(PKG_DIR)

uninstall-pkg-config:
	rm "$(PKG_DIR)$(PKG_CONFIG_FILE)"


# -- Generate documentation
.PHONY: doc html
doc html:
	cd doc && $(MAKE) $(AM_MAKEFLAGS) $@
