//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NWConcrete_nw_connection;
@protocol OS_dispatch_queue, OS_nw_error, OS_nw_establishment_report, OS_nw_path_evaluator, OS_nw_socks5_server;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_socks5_connection : NSObject
{
    unsigned long long sc_id;	// 8 = 0x8
    NWConcrete_nw_socks5_connection *sc_internally_retained_object;	// 16 = 0x10
    NSObject<OS_nw_socks5_server> *sc_parent;	// 24 = 0x18
    NWConcrete_nw_connection *sc_in_connection;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *sc_queue;	// 40 = 0x28
    CDUnknownBlockType sc_cancel;	// 48 = 0x30
    unsigned char sc_state;	// 56 = 0x38
    unsigned char sc_out_address_type;	// 57 = 0x39
    NSObject<OS_nw_path_evaluator> *sc_prefer_wifi_path_evaluator;	// 64 = 0x40
    int sc_prefer_wifi_previous_path_status;	// 72 = 0x48
    void *sc_udp_associate_verification_source;	// 80 = 0x50
    unsigned int sc_udp_associate_verification_count;	// 88 = 0x58
    union {
        char *byte_pointer;
        struct in_addr *ipv4_addr;
        struct in6_addr *ipv6_addr;
        char *domain;
    } sc_out_address;	// 96 = 0x60
    unsigned short sc_shoes_request_length_hbo;	// 104 = 0x68
    unsigned char sc_out_address_domain_length;	// 106 = 0x6a
    unsigned long long sc_busy_counter;	// 112 = 0x70
    unsigned long long sc_busy_start_time_nanos;	// 120 = 0x78
    unsigned long long sc_total_busy_time_nanos;	// 128 = 0x80
    unsigned long long sc_start_time_nanos;	// 136 = 0x88
    NWConcrete_nw_connection *sc_out_connection;	// 144 = 0x90
    NSObject<OS_nw_error> *sc_error;	// 152 = 0x98
    unsigned int sc_out_connection_failed_or_sent_write_close:1;	// 160 = 0xa0
    unsigned int sc_in_connection_failed_or_sent_write_close:1;	// 160 = 0xa0
    unsigned int sc_out_disable_proxy:1;	// 160 = 0xa0
    unsigned int sc_sent_reply:1;	// 160 = 0xa0
    unsigned int sc_has_read_from_in_connection:1;	// 160 = 0xa0
    unsigned int sc_out_udp:1;	// 160 = 0xa0
    unsigned int sc_should_prefer_wifi:1;	// 160 = 0xa0
    unsigned int sc_is_udp_associate:1;	// 160 = 0xa0
    unsigned int sc_processed_udp_associate_request:1;	// 161 = 0xa1
    unsigned int sc_in_connection_send_connected_endpoint:1;	// 161 = 0xa1
    unsigned int sc_in_connection_send_resolved_endpoint:1;	// 161 = 0xa1
    NWConcrete_nw_connection *sc_in_udp_associated_tcp_connection;	// 168 = 0xa8
    NSObject<OS_nw_establishment_report> *sc_out_establishment_report;	// 176 = 0xb0
    unsigned long long sc_out_connection_bytes_read;	// 184 = 0xb8
    unsigned long long sc_out_connection_bytes_written;	// 192 = 0xc0
    unsigned long long sc_in_connection_bytes_read;	// 200 = 0xc8
    unsigned long long sc_in_connection_bytes_written;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000000019bc90
- (void)dealloc;	// IMP=0x000000000019b700
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

