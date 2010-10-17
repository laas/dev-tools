include $(top_srcdir)/template-project/autotools/build-aux/init.mk

# Define how autom4te is called to generate the testsuite file.
AUTOTEST = $(AUTOM4TE) --language=autotest -Wall

# Package following files.
EXTRA_DIST += atlocal testsuite.at $(TESTSUITE)

# Run testsuite in this directory.
TESTSUITE = $(srcdir)/testsuite

# Define where package.m4.in is located.
PACKAGE_M4_IN=$(top_srcdir)/tests/package.m4.in

# ----- #
# RULES #
# ----- #

check-local: atconfig atlocal $(TESTSUITE)
	$(SHELL) $(TESTSUITE) $(TESTSUITEFLAGS)

installcheck-local: atconfig atlocal $(TESTSUITE)
	$(SHELL) $(TESTSUITE) AUTOTEST_PATH="$(bindir)" $(TESTSUITEFLAGS)

clean-local:
	test ! -f $(TESTSUITE) || $(SHELL) $(TESTSUITE) --clean
	rm -f -r autom4te.cache

$(TESTSUITE): $(PACKAGE_M4_IN) $(srcdir)/testsuite.at \
	      $(top_srcdir)/configure
	$(AUTOTEST) -I'$(srcdir)' \
        -I'$(top_srcdir)/template-project/autotools/build-aux' \
	-I'$(top_builddir)/tests' $@.at -o $@.tmp
	mv $@.tmp $@

atconfig: $(top_builddir)/config.status
	cd $(top_builddir) && $(SHELL) ./config.status tests/$@


# Package the following files.
EXTRA_DIST += package.m4.in

# Clean atconfig (do not distribute it).
CLEANFILES += atconfig

# ------------ #
# Test suite.  #
# ------------ #

# Distribute reference files.
EXTRA_DIST +=						\
	autotools.test					\
	cmake.test					\
	deps.test
