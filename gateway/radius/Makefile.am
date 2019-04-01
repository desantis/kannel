AM_CFLAGS = -I. -I$(top_builddir)/gwlib -I$(top_builddir)

noinst_LTLIBRARIES = libradius.la

libradius_la_LIBADD = $(top_builddir)/gwlib/libgwlib.la

includedir = $(prefix)/include/kannel/wap/radius

include_HEADERS = \
	radius_acct.h \
	radius_attributes.def \
	radius_pdu.def \
	radius_pdu.h

libradius_la_SOURCES = \
	radius_acct.c \
	radius_pdu.c
