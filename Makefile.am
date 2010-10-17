include $(top_srcdir)/template-project/autotools/build-aux/init.mk

# Search for autoconf macros in build-aux.
ACLOCAL_AMFLAGS = -I template-project/autotools/build-aux

SUBDIRS = 		\
	tests


# Provide bootstrap with the generated package.
EXTRA_DIST += bootstrap template-project package-create-local

# (Un)Install template-project.
tplprojectdir="@prefix@/share/@PACKAGE_TARNAME@"

install-data-local:
	@if ! test -d "$(DESTDIR)$(tplprojectdir)"; then \
	  $(mkinstalldirs) "$(DESTDIR)$(tplprojectdir)"; \
	fi
	@cp -pr $(srcdir)/template-project/ "$(DESTDIR)$(tplprojectdir)" || true

uninstall-local:
	rm -rf "$(DESTDIR)$(tplprojectdir)"

# Distribute shell scripts.
bin_SCRIPTS = package-create package-dep

include $(top_srcdir)/build-aux/git-version-gen.mk
