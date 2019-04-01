AUTOMAKE_OPTIONS = foreign

AM_CFLAGS = -I. -I$(top_builddir)/gwlib -I$(top_builddir) -I$(top_builddir)/gw

LDADD = $(top_builddir)/gwlib/libgwlib.la $(top_builddir)/wap/libwap.la \
		$(top_builddir)/radius/libradius.la $(top_builddir)/wmlscript/libwmlscript.la \
		$(top_builddir)/gw/libgwwap.la $(top_builddir)/gw/libgw.la

noinst_PROGRAMS = \
	check_counter \
	check_date \
	check_ipcheck \
	check_list \
	check_octstr

dist_noinst_SCRIPTS = \
	check_compiler.sh \
	check_fakesmsc.sh \
	check_fakewap.sh \
	check_headers.sh \
	check_http.sh \
	check_httpsmsc_kannel.sh \
	check_ppg.sh \
	check_sendsms.sh \
	check_smpp.sh

dist_noinst_DATA = \
	test_dates

check: all $(SUBDIRS)
	$(top_builddir)/utils/run-checks $(PROGRAMS) $(SCRIPTS)
