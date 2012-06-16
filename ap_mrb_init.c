#include "ap_mrb_init.h"

int ap_mruby_class_init(mrb_state *mrb)
{

    class = mrb_define_module(mrb, "Apache");
    mrb_define_const(mrb, class, "OK", mrb_fixnum_value(OK));
    mrb_define_const(mrb, class, "DECLINED", mrb_fixnum_value(DECLINED));
    mrb_define_const(mrb, class, "HTTP_SERVICE_UNAVAILABLE", mrb_fixnum_value(HTTP_SERVICE_UNAVAILABLE));
    mrb_define_const(mrb, class, "HTTP_CONTINUE", mrb_fixnum_value(HTTP_CONTINUE));
    mrb_define_const(mrb, class, "HTTP_SWITCHING_PROTOCOLS", mrb_fixnum_value(HTTP_SWITCHING_PROTOCOLS));
    mrb_define_const(mrb, class, "HTTP_PROCESSING", mrb_fixnum_value(HTTP_PROCESSING));
    mrb_define_const(mrb, class, "HTTP_OK", mrb_fixnum_value(HTTP_OK));
    mrb_define_const(mrb, class, "HTTP_CREATED", mrb_fixnum_value(HTTP_CREATED));
    mrb_define_const(mrb, class, "HTTP_ACCEPTED", mrb_fixnum_value(HTTP_ACCEPTED));
    mrb_define_const(mrb, class, "HTTP_NON_AUTHORITATIVE", mrb_fixnum_value(HTTP_NON_AUTHORITATIVE));
    mrb_define_const(mrb, class, "HTTP_NO_CONTENT", mrb_fixnum_value(HTTP_NO_CONTENT));
    mrb_define_const(mrb, class, "HTTP_RESET_CONTENT", mrb_fixnum_value(HTTP_RESET_CONTENT));
    mrb_define_const(mrb, class, "HTTP_PARTIAL_CONTENT", mrb_fixnum_value(HTTP_PARTIAL_CONTENT));
    mrb_define_const(mrb, class, "HTTP_MULTI_STATUS", mrb_fixnum_value(HTTP_MULTI_STATUS));
    mrb_define_const(mrb, class, "HTTP_MULTIPLE_CHOICES", mrb_fixnum_value(HTTP_MULTIPLE_CHOICES));
    mrb_define_const(mrb, class, "HTTP_MOVED_PERMANENTLY", mrb_fixnum_value(HTTP_MOVED_PERMANENTLY));
    mrb_define_const(mrb, class, "HTTP_MOVED_TEMPORARILY", mrb_fixnum_value(HTTP_MOVED_TEMPORARILY));
    mrb_define_const(mrb, class, "HTTP_SEE_OTHER", mrb_fixnum_value(HTTP_SEE_OTHER));
    mrb_define_const(mrb, class, "HTTP_NOT_MODIFIED", mrb_fixnum_value(HTTP_NOT_MODIFIED));
    mrb_define_const(mrb, class, "HTTP_USE_PROXY", mrb_fixnum_value(HTTP_USE_PROXY));
    mrb_define_const(mrb, class, "HTTP_TEMPORARY_REDIRECT", mrb_fixnum_value(HTTP_TEMPORARY_REDIRECT));
    mrb_define_const(mrb, class, "HTTP_BAD_REQUEST", mrb_fixnum_value(HTTP_BAD_REQUEST));
    mrb_define_const(mrb, class, "HTTP_UNAUTHORIZED", mrb_fixnum_value(HTTP_UNAUTHORIZED));
    mrb_define_const(mrb, class, "HTTP_PAYMENT_REQUIRED", mrb_fixnum_value(HTTP_PAYMENT_REQUIRED));
    mrb_define_const(mrb, class, "HTTP_FORBIDDEN", mrb_fixnum_value(HTTP_FORBIDDEN));
    mrb_define_const(mrb, class, "HTTP_NOT_FOUND", mrb_fixnum_value(HTTP_NOT_FOUND));
    mrb_define_const(mrb, class, "HTTP_METHOD_NOT_ALLOWED", mrb_fixnum_value(HTTP_METHOD_NOT_ALLOWED));
    mrb_define_const(mrb, class, "HTTP_NOT_ACCEPTABLE", mrb_fixnum_value(HTTP_NOT_ACCEPTABLE));
    mrb_define_const(mrb, class, "HTTP_PROXY_AUTHENTICATION_REQUIRED", mrb_fixnum_value(HTTP_PROXY_AUTHENTICATION_REQUIRED));
    mrb_define_const(mrb, class, "HTTP_REQUEST_TIME_OUT", mrb_fixnum_value(HTTP_REQUEST_TIME_OUT));
    mrb_define_const(mrb, class, "HTTP_CONFLICT", mrb_fixnum_value(HTTP_CONFLICT));
    mrb_define_const(mrb, class, "HTTP_GONE", mrb_fixnum_value(HTTP_GONE));
    mrb_define_const(mrb, class, "HTTP_LENGTH_REQUIRED", mrb_fixnum_value(HTTP_LENGTH_REQUIRED));
    mrb_define_const(mrb, class, "HTTP_PRECONDITION_FAILED", mrb_fixnum_value(HTTP_PRECONDITION_FAILED));
    mrb_define_const(mrb, class, "HTTP_REQUEST_ENTITY_TOO_LARGE", mrb_fixnum_value(HTTP_REQUEST_ENTITY_TOO_LARGE));
    mrb_define_const(mrb, class, "HTTP_REQUEST_URI_TOO_LARGE", mrb_fixnum_value(HTTP_REQUEST_URI_TOO_LARGE));
    mrb_define_const(mrb, class, "HTTP_UNSUPPORTED_MEDIA_TYPE", mrb_fixnum_value(HTTP_UNSUPPORTED_MEDIA_TYPE));
    mrb_define_const(mrb, class, "HTTP_RANGE_NOT_SATISFIABLE", mrb_fixnum_value(HTTP_RANGE_NOT_SATISFIABLE));
    mrb_define_const(mrb, class, "HTTP_EXPECTATION_FAILED", mrb_fixnum_value(HTTP_EXPECTATION_FAILED));
    mrb_define_const(mrb, class, "HTTP_UNPROCESSABLE_ENTITY", mrb_fixnum_value(HTTP_UNPROCESSABLE_ENTITY));
    mrb_define_const(mrb, class, "HTTP_LOCKED", mrb_fixnum_value(HTTP_LOCKED));
    mrb_define_const(mrb, class, "HTTP_NOT_EXTENDED", mrb_fixnum_value(HTTP_NOT_EXTENDED));
    mrb_define_const(mrb, class, "DOCUMENT_FOLLOWS", mrb_fixnum_value(HTTP_OK));
    mrb_define_const(mrb, class, "PARTIAL_CONTENT", mrb_fixnum_value(HTTP_PARTIAL_CONTENT));
    mrb_define_const(mrb, class, "MULTIPLE_CHOICES", mrb_fixnum_value(HTTP_MULTIPLE_CHOICES));
    mrb_define_const(mrb, class, "MOVED", mrb_fixnum_value(HTTP_MOVED_PERMANENTLY));
    mrb_define_const(mrb, class, "REDIRECT", mrb_fixnum_value(HTTP_MOVED_TEMPORARILY));
    mrb_define_const(mrb, class, "USE_LOCAL_COPY", mrb_fixnum_value(HTTP_NOT_MODIFIED));
    mrb_define_const(mrb, class, "BAD_REQUEST", mrb_fixnum_value(HTTP_BAD_REQUEST));
    mrb_define_const(mrb, class, "AUTH_REQUIRED", mrb_fixnum_value(HTTP_UNAUTHORIZED));
    mrb_define_const(mrb, class, "FORBIDDEN", mrb_fixnum_value(HTTP_FORBIDDEN));
    mrb_define_const(mrb, class, "NOT_FOUND", mrb_fixnum_value(HTTP_NOT_FOUND));
    mrb_define_const(mrb, class, "METHOD_NOT_ALLOWED", mrb_fixnum_value(HTTP_METHOD_NOT_ALLOWED));
    mrb_define_const(mrb, class, "NOT_ACCEPTABLE", mrb_fixnum_value(HTTP_NOT_ACCEPTABLE));
    mrb_define_const(mrb, class, "LENGTH_REQUIRED", mrb_fixnum_value(HTTP_LENGTH_REQUIRED));
    mrb_define_const(mrb, class, "PRECONDITION_FAILED", mrb_fixnum_value(HTTP_PRECONDITION_FAILED));
    mrb_define_const(mrb, class, "SERVER_ERROR", mrb_fixnum_value(HTTP_INTERNAL_SERVER_ERROR));
    mrb_define_const(mrb, class, "NOT_IMPLEMENTED", mrb_fixnum_value(HTTP_NOT_IMPLEMENTED));
    mrb_define_const(mrb, class, "BAD_GATEWAY", mrb_fixnum_value(HTTP_BAD_GATEWAY));
    mrb_define_const(mrb, class, "VARIANT_ALSO_VARIES", mrb_fixnum_value(HTTP_VARIANT_ALSO_VARIES));
    mrb_define_const(mrb, class, "PROXYREQ_NONE", mrb_fixnum_value(PROXYREQ_NONE));
    mrb_define_const(mrb, class, "PROXYREQ_PROXY", mrb_fixnum_value(PROXYREQ_PROXY));
    mrb_define_const(mrb, class, "PROXYREQ_REVERSE", mrb_fixnum_value(PROXYREQ_REVERSE));
    mrb_define_const(mrb, class, "PROXYREQ_RESPONSE", mrb_fixnum_value(PROXYREQ_RESPONSE));
    mrb_define_class_method(mrb, class, "sleep", ap_mrb_sleep, ARGS_ANY());
    mrb_define_class_method(mrb, class, "rputs", ap_mrb_rputs, ARGS_ANY());
    mrb_define_class_method(mrb, class, "return", ap_mrb_return, ARGS_ANY());
    mrb_define_class_method(mrb, class, "errlogger", ap_mrb_errlogger, ARGS_ANY());
    mrb_define_class_method(mrb, class, "syslogger", ap_mrb_syslogger, ARGS_ANY());
    mrb_define_class_method(mrb, class, "write_request", ap_mrb_write_request, ARGS_ANY());

    class_server = mrb_define_class_under(mrb, class, "Server", mrb->object_class);
    mrb_define_method(mrb, class_server, "error_fname=", ap_mrb_set_server_error_fname, ARGS_ANY());
    mrb_define_method(mrb, class_server, "error_fname", ap_mrb_get_server_error_fname, ARGS_NONE());
    mrb_define_method(mrb, class_server, "document_root", ap_mrb_get_server_document_root, ARGS_NONE());
    mrb_define_method(mrb, class_server, "loglevel=", ap_mrb_set_server_loglevel, ARGS_ANY());
    mrb_define_method(mrb, class_server, "loglevel", ap_mrb_get_server_loglevel, ARGS_NONE());

    class_request = mrb_define_class_under(mrb, class, "Request", mrb->object_class);
    mrb_define_method(mrb, class_request, "Initialize", ap_mrb_init_request, ARGS_NONE());
    mrb_define_method(mrb, class_request, "request_rec_json", ap_mrb_get_request_rec_json, ARGS_NONE());
    mrb_define_method(mrb, class_request, "the_request=", ap_mrb_set_request_the_request, ARGS_ANY());
    mrb_define_method(mrb, class_request, "the_request", ap_mrb_get_request_the_request, ARGS_NONE());
    mrb_define_method(mrb, class_request, "protocol=", ap_mrb_set_request_protocol, ARGS_ANY());
    mrb_define_method(mrb, class_request, "protocol", ap_mrb_get_request_protocol, ARGS_NONE());
    mrb_define_method(mrb, class_request, "vlist_validator=", ap_mrb_set_request_vlist_validator, ARGS_ANY());
    mrb_define_method(mrb, class_request, "vlist_validator", ap_mrb_get_request_vlist_validator, ARGS_NONE());
    mrb_define_method(mrb, class_request, "user=", ap_mrb_set_request_user, ARGS_ANY());
    mrb_define_method(mrb, class_request, "user", ap_mrb_get_request_user, ARGS_NONE());
    mrb_define_method(mrb, class_request, "ap_auth_type=", ap_mrb_set_request_ap_auth_type, ARGS_ANY());
    mrb_define_method(mrb, class_request, "ap_auth_type", ap_mrb_get_request_ap_auth_type, ARGS_NONE());
    mrb_define_method(mrb, class_request, "unparsed_uri=", ap_mrb_set_request_unparsed_uri, ARGS_ANY());
    mrb_define_method(mrb, class_request, "unparsed_uri", ap_mrb_get_request_unparsed_uri, ARGS_NONE());
    mrb_define_method(mrb, class_request, "uri=", ap_mrb_set_request_uri, ARGS_ANY());
    mrb_define_method(mrb, class_request, "uri", ap_mrb_get_request_uri, ARGS_NONE());
    mrb_define_method(mrb, class_request, "filename=", ap_mrb_set_request_filename, ARGS_ANY());
    mrb_define_method(mrb, class_request, "filename", ap_mrb_get_request_filename, ARGS_NONE());
    mrb_define_method(mrb, class_request, "canonical_filename=", ap_mrb_set_request_canonical_filename, ARGS_ANY());
    mrb_define_method(mrb, class_request, "canonical_filename", ap_mrb_get_request_canonical_filename, ARGS_NONE());
    mrb_define_method(mrb, class_request, "path_info=", ap_mrb_set_request_path_info, ARGS_ANY());
    mrb_define_method(mrb, class_request, "path_info", ap_mrb_get_request_path_info, ARGS_NONE());
    mrb_define_method(mrb, class_request, "args=", ap_mrb_set_request_args, ARGS_ANY());
    mrb_define_method(mrb, class_request, "args", ap_mrb_get_request_args, ARGS_NONE());

    mrb_define_method(mrb, class_request, "hostname=", ap_mrb_set_request_hostname, ARGS_ANY());
    mrb_define_method(mrb, class_request, "hostname", ap_mrb_get_request_hostname, ARGS_NONE());
    mrb_define_method(mrb, class_request, "status_line=", ap_mrb_set_request_status_line, ARGS_ANY());
    mrb_define_method(mrb, class_request, "status_line", ap_mrb_get_request_status_line, ARGS_NONE());
    mrb_define_method(mrb, class_request, "method=", ap_mrb_set_request_method, ARGS_ANY());
    mrb_define_method(mrb, class_request, "method", ap_mrb_get_request_method, ARGS_NONE());
    mrb_define_method(mrb, class_request, "range=", ap_mrb_set_request_range, ARGS_ANY());
    mrb_define_method(mrb, class_request, "range", ap_mrb_get_request_range, ARGS_NONE());
    mrb_define_method(mrb, class_request, "content_type=", ap_mrb_set_request_content_type, ARGS_ANY());
    mrb_define_method(mrb, class_request, "content_type", ap_mrb_get_request_content_type, ARGS_NONE());
    mrb_define_method(mrb, class_request, "handler=", ap_mrb_set_request_handler, ARGS_ANY());
    mrb_define_method(mrb, class_request, "handler", ap_mrb_get_request_handler, ARGS_NONE());
    mrb_define_method(mrb, class_request, "content_encoding=", ap_mrb_set_request_content_encoding, ARGS_ANY());
    mrb_define_method(mrb, class_request, "content_encoding", ap_mrb_get_request_content_encoding, ARGS_NONE());

    mrb_define_method(mrb, class_request, "assbackwards", ap_mrb_get_request_assbackwards, ARGS_NONE());
    mrb_define_method(mrb, class_request, "proxyreq=", ap_mrb_set_request_proxyreq, ARGS_ANY());
    mrb_define_method(mrb, class_request, "proxyreq", ap_mrb_get_request_proxyreq, ARGS_NONE());
    mrb_define_method(mrb, class_request, "header_only", ap_mrb_get_request_header_only, ARGS_NONE());
    mrb_define_method(mrb, class_request, "proto_num", ap_mrb_get_request_proto_num, ARGS_NONE());
    mrb_define_method(mrb, class_request, "status", ap_mrb_get_request_status, ARGS_NONE());
    mrb_define_method(mrb, class_request, "method_number", ap_mrb_get_request_method_number, ARGS_NONE());
    mrb_define_method(mrb, class_request, "chunked", ap_mrb_get_request_chunked, ARGS_NONE());
    mrb_define_method(mrb, class_request, "read_body", ap_mrb_get_request_read_body, ARGS_NONE());
    mrb_define_method(mrb, class_request, "read_chunked", ap_mrb_get_request_read_chunked, ARGS_NONE());
    mrb_define_method(mrb, class_request, "used_path_info", ap_mrb_get_request_used_path_info, ARGS_NONE());
    mrb_define_method(mrb, class_request, "eos_sent", ap_mrb_get_request_eos_sent, ARGS_NONE());
    mrb_define_method(mrb, class_request, "no_cache", ap_mrb_get_request_no_cache, ARGS_NONE());
    mrb_define_method(mrb, class_request, "no_local_copy", ap_mrb_get_request_no_local_copy, ARGS_NONE());


    return OK;
}
