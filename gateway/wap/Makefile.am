AM_CFLAGS = -I. -I$(top_builddir)/gwlib -I$(top_builddir)

lib_LTLIBRARIES = libwap.la

libwap_la_LIBADD = $(top_builddir)/radius/libradius.la $(top_builddir)/gwlib/libgwlib.la

includedir = $(prefix)/include/kannel/wap

include_HEADERS = \
	wap_events.def \
	wsp_pdu.def \
	wsp_push_client_machine.def \
	wsp_push_client_states.def \
	wsp_server_method_machine.def \
	wsp_server_method_states.def \
	wsp_server_push_machine.def \
	wsp_server_push_states.def \
	wsp_server_session_machine.def \
	wsp_server_session_states.def \
	wsp_strings.def \
	wtp_init_machine.def \
	wtp_init_states.def \
	wtp_pdu.def \
	wtp_resp_machine.def \
	wtp_resp_states.def \
	cookies.h \
	timers.h \
	wap.h \
	wap_addr.h \
	wap_events.h \
	wsp.h \
	wsp_caps.h \
	wsp_headers.h \
	wsp_pdu.h \
	wsp_push_client.h \
	wsp_strings.h \
	wtls.h \
	wtls_machine-decl.h \
	wtls_pdu.h \
	wtls_pdusupport.h \
	wtls_state-decl.h \
	wtls_statesupport.h \
	wtp.h \
	wtp_init.h \
	wtp_pack.h \
	wtp_pdu.h \
	wtp_resp.h \
	wtp_tid.h
	
libwap_la_SOURCES = \
	cookies.c \
	timers.c \
	wap.c \
	wap_addr.c \
	wap_events.c \
	wsp.c \
	wsp_caps.c \
	wsp_headers.c \
	wsp_pdu.c \
	wsp_push_client.c \
	wsp_session.c \
	wsp_strings.c \
	wsp_unit.c \
	wtls-secmgr.c \
	wtls.c \
	wtls_pdu.c \
	wtls_pdusupport.c \
	wtls_statesupport.c \
	wtp.c \
	wtp_init.c \
	wtp_pack.c \
	wtp_pdu.c \
	wtp_resp.c \
	wtp_tid.c
