AUTOMAKE_OPTIONS = foreign

AM_CFLAGS = -I. -I$(top_builddir)/gwlib -I$(top_builddir) -I$(top_builddir)/gw

LDADD = $(top_builddir)/gwlib/libgwlib.la $(top_builddir)/wap/libwap.la \
		$(top_builddir)/radius/libradius.la $(top_builddir)/wmlscript/libwmlscript.la \
		$(top_builddir)/gw/libgwwap.la $(top_builddir)/gw/libgw.la

noinst_PROGRAMS = \
	decompile \
	drive_smpp \
	drive_wapbox \
	fakesmsc \
	fakewap \
	test_boxc \
	test_cfg \
	test_charset \
	test_cimd2 \
	test_conn \
	test_date \
	test_dbpool \
	test_dict \
	test_file_traversal \
	test_hash \
	test_headers \
	test_hmac \
	test_http \
	test_http_server \
	test_list \
	test_mem \
	test_mime \
	test_mime_multipart \
	test_msg \
	test_octstr_dump \
	test_octstr_format \
	test_octstr_immutables \
	test_ota \
	test_pap \
	test_pcre \
	test_pdu \
	test_ppg \
	test_prioqueue \
	test_radius_acct \
	test_radius_pdu \
	test_regex \
	test_si \
	test_sl \
	test_smsc \
	test_store_dump \
	test_udp \
	test_urltrans \
	test_uuid \
	test_wakeup \
	test_xmlrpc \
	timestamp \
	udpfeed \
	wapproxy \
	wml_tester
