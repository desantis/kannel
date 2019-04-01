AUTOMAKE_OPTIONS = foreign subdir-objects

AM_CFLAGS = -I. -I$(top_builddir)/gwlib -I$(top_builddir)

lib_LTLIBRARIES = libgw.la libgwwap.la

libgw_la_LIBADD = $(top_builddir)/gwlib/libgwlib.la $(top_builddir)/wap/libwap.la
libgw_la_SOURCES = \
	bb_store.c \
	bb_store_file.c \
	bb_store_redis.c \
	bb_store_spool.c \
	dlr.c \
	dlr_cass.c \
	dlr_mem.c \
	dlr_mssql.c \
	dlr_mysql.c \
	dlr_oracle.c \
	dlr_pgsql.c \
	dlr_redis.c \
	dlr_sdb.c \
	dlr_spool.c \
	dlr_sqlite3.c \
	heartbeat.c \
	html.c \
	load.c \
	meta_data.c \
	mime_decompiler.c \
	msg.c \
	numhash.c \
	ota_compiler.c \
	ota_prov.c \
	shared.c \
	sms.c \
	urltrans.c \
	xml_shared.c \
	smsc/emimsg.c \
	smsc/smasi_pdu.c \
	smsc/smpp_pdu.c

libgwwap_la_LIBADD = $(top_builddir)/gwlib/libgwlib.la
libgwwap_la_SOURCES = \
	wap-error.c \
	wap-maps.c \
	wap_push_ota.c \
	wap_push_pap_compiler.c \
	wap_push_pap_mime.c \
	wap_push_ppg.c \
	wap_push_ppg_pushuser.c \
	wap_push_si_compiler.c \
	wap_push_sl_compiler.c \
	wml_compiler.c

sbin_PROGRAMS = bearerbox smsbox wapbox
man8_MANS = kannel.8

EXTRA_DIST = $(man8_MANS)

wapbox_LDADD = $(top_builddir)/gwlib/libgwlib.la libgwwap.la libgw.la $(top_builddir)/wap/libwap.la \
               $(top_builddir)/radius/libradius.la $(top_builddir)/wmlscript/libwmlscript.la
wapbox_SOURCES = \
	wap-appl.c \
	wapbox.c
	
bearerbox_LDADD = $(top_builddir)/gwlib/libgwlib.la libgw.la $(top_builddir)/wap/libwap.la \
                  $(top_builddir)/radius/libradius.la $(top_builddir)/wmlscript/libwmlscript.la
bearerbox_SOURCES = \
	bb_alog.c \
	bb_boxc.c \
	bb_http.c \
	bb_smscconn.c \
	bb_udp.c \
	smscconn.c \
	smsc/smsc.c \
	smsc/smsc_at.c \
	smsc/smsc_cgw.c \
	smsc/smsc_cimd.c \
	smsc/smsc_cimd2.c \
	smsc/smsc_emi.c \
	smsc/smsc_emi_x25.c \
	smsc/smsc_fake.c \
	smsc/http/brunet.c \
	smsc/http/clickatell.c \
	smsc/http/generic.c \
	smsc/http/kannel.c \
	smsc/http/xidris.c \
	smsc/smsc_http.c \
	smsc/smsc_loopback.c \
	smsc/smsc_ois.c \
	smsc/smsc_oisd.c \
	smsc/smsc_sema.c \
	smsc/smsc_smasi.c \
	smsc/smsc_smpp.c \
	smsc/smsc_soap.c \
	smsc/smsc_wrapper.c \
	bearerbox.c \
	bearerbox.h

#if BUILD_SOAP not ready TODO
## if defined GSOAP add it
#bearerbox_SOURCES += smsc/smsc_soap_parlayx.c $(soap_depend)
#bearerbox_LDADD   += $(top_builddir)/soap/libsoap_plugin.a
## end
#endif

smsbox_LDADD = $(top_builddir)/gwlib/libgwlib.la libgw.la
smsbox_SOURCES = \
	smsbox.c
	
includedir = $(prefix)/include/kannel/gw

nobase_include_HEADERS = \
	alt_charsets.h \
	bb.h \
	bb_smscconn_cb.h \
	bb_store.h \
	dlr.h \
	dlr_p.h \
	heartbeat.h \
	html.h \
	load.h \
	meta_data.h \
	mime_decompiler.h \
	msg-decl.h \
	msg.h \
	numhash.h \
	ota_compiler.h \
	ota_prov.h \
	ota_prov_attr.h \
	shared.h \
	sms.h \
	smscconn.h \
	smscconn_p.h \
	urltrans.h \
	xml_definitions.h \
	xml_shared.h \
	wap_ppg_push_machine.def \
	wap_ppg_session_machine.def \
	smsc/emimsg.h \
	smsc/smasi_pdu.h \
	smsc/smpp_pdu.h \
	smsc/smsc.h \
	smsc/smsc_at.h \
	smsc/smsc_p.h \
	smsc/smsc_http_p.h \
	smsc/smsc_sema.h \
	smsc/smasi_pdu.def \
	smsc/smpp_pdu.def \
	smsc/smpp_pdu_opt.def

nobase_include_HEADERS += \
	wbxml_tokens.def \
	wml_definitions.h \
	wap-appl.h \
	wap-error.h \
	wap-maps.h \
	wap_push_ota.h \
	wap_push_pap_compiler.h \
	wap_push_pap_mime.h \
	wap_push_ppg.h \
	wap_push_ppg_pushuser.h \
	wap_push_si_compiler.h \
	wap_push_sl_compiler.h \
	wml_compiler.h
	
