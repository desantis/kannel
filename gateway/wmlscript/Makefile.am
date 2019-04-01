AM_CFLAGS = -I. -I$(top_builddir)/gw -I$(top_builddir)/gwlib -I$(top_builddir)

lib_LTLIBRARIES = libwmlscript.la
bin_PROGRAMS = wmlsc wmlsdasm
# -v gives verbose output.
AM_YFLAGS = -d -p ws_yy_

wmlsc_LDADD = libwmlscript.la $(top_builddir)/gwlib/libgwlib.la
wmlsc_SOURCES = wmlsc.c

wmlsdasm_LDADD = libwmlscript.la $(top_builddir)/gwlib/libgwlib.la
wmlsdasm_SOURCES = wmlsdasm.c

man1_MANS = wmlsc.1 wmlsdasm.1

EXTRA_DIST = $(man1_MANS)

includedir = $(prefix)/include/kannel/wmlscript

include_HEADERS = \
	ws.h \
	wsalloc.h \
	wsasm.h \
	wsbc.h \
	wsbuffer.h \
	wsencode.h \
	wserror.h \
	wsfalloc.h \
	wsgram.h \
	wshash.h \
	wsieee754.h \
	wsint.h \
	wsopcodes.h \
	wsopt.h \
	wsstdlib.h \
	wsstream.h \
	wsstree.h \
	wsutf8.h

libwmlscript_la_SOURCES = \
	ws.c \
	wsalloc.c \
	wsasm.c \
	wsbc.c \
	wsbuffer.c \
	wsencode.c \
	wserror.c \
	wsfalloc.c \
	wsgram.c \
	wshash.c \
	wsieee754.c \
	wslexer.c \
	wsopt.c \
	wsstdlib.c \
	wsstream.c \
	wsstream_data.c \
	wsstream_file.c \
	wsstree.c \
	wsutf8.c


BUILT_SOURCES = wsopcodes.h wsgram.h wsgram.c

dist_noinst_SCRIPTS = make-op-table
dist_noinst_DATA = lexer.txt

make-op-table: make-op-table.in
	sed 's%@PERLPROG@%@PERL@%g' make-op-table.in \
		> make-op-table
	chmod a+x make-op-table

opcodes:
	./make-op-table wsasm.h \
		> wsopcodes.h

wsopcodes.h: make-op-table wsasm.h
	$(PERL) make-op-table wsasm.h \
		> wsopcodes.h
