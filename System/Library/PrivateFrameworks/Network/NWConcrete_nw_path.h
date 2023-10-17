//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_advertise_descriptor, OS_nw_array, OS_nw_browse_descriptor, OS_nw_endpoint, OS_nw_group_descriptor, OS_nw_interface, OS_nw_parameters, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_path : NSObject
{
    struct os_unfair_lock_s lock;	// 8 = 0x8
    NSObject<OS_nw_parameters> *parameters;	// 16 = 0x10
    NSObject<OS_nw_endpoint> *endpoint;	// 24 = 0x18
    NSObject<OS_nw_group_descriptor> *group_descriptor;	// 32 = 0x20
    NSObject<OS_nw_browse_descriptor> *browse_descriptor;	// 40 = 0x28
    NSObject<OS_nw_advertise_descriptor> *advertise_descriptor;	// 48 = 0x30
    NSObject<OS_nw_array> *discovered_endpoints;	// 56 = 0x38
    NSObject<OS_nw_array> *resolved_endpoints;	// 64 = 0x40
    NSObject<OS_nw_array> *flows;	// 72 = 0x48
    NSObject<OS_nw_endpoint> *override_local_endpoint;	// 80 = 0x50
    NSObject<OS_nw_interface> *override_interface;	// 88 = 0x58
    NSObject<OS_nw_interface> *direct;	// 96 = 0x60
    NSObject<OS_nw_interface> *delegate;	// 104 = 0x68
    NSObject<OS_nw_interface> *fallback_interface;	// 112 = 0x70
    unsigned char client_id[16];	// 120 = 0x78
    unsigned char flow_registration_id[16];	// 136 = 0x88
    unsigned char fallback_agent[16];	// 152 = 0x98
    NSObject<OS_xpc_object> *fallback_agent_domains;	// 168 = 0xa8
    NSObject<OS_xpc_object> *fallback_agent_types;	// 176 = 0xb0
    NSObject<OS_nw_array> *resolver_configs;	// 184 = 0xb8
    NSObject<OS_nw_array> *override_resolver_configs;	// 192 = 0xc0
    NSObject<OS_nw_array> *gateways;	// 200 = 0xc8
    NSObject<OS_nw_array> *group_members;	// 208 = 0xd0
    NSObject<OS_xpc_object> *network_agent_dictionary;	// 216 = 0xd8
    NSObject<OS_nw_array> *proxy_configs;	// 224 = 0xe0
    NSObject<OS_xpc_object> *proxy_settings;	// 232 = 0xe8
    char *reason_description;	// 240 = 0xf0
    struct nw_path_necp_result policy_result;	// 248 = 0xf8
    unsigned int effective_mtu;	// 344 = 0x158
    unsigned int effective_traffic_class;	// 348 = 0x15c
    unsigned int interface_time_delta;	// 352 = 0x160
    unsigned int fallback_generation;	// 356 = 0x164
    int status;	// 360 = 0x168
    int reason;	// 364 = 0x16c
    unsigned short custom_ethertype;	// 368 = 0x170
    unsigned char custom_ip_protocol;	// 370 = 0x172
    struct necp_client_result_estimated_throughput estimates;	// 371 = 0x173
    struct ipv6_prefix nat64_prefixes[4];	// 376 = 0x178
    unsigned char recommended_mss;	// 456 = 0x1c8
    unsigned int weak_fallback:1;	// 457 = 0x1c9
    unsigned int no_fallback_timer:1;	// 457 = 0x1c9
    unsigned int fallback_is_forced:1;	// 457 = 0x1c9
    unsigned int fallback_is_preferred:1;	// 457 = 0x1c9
    unsigned int is_local:1;	// 457 = 0x1c9
    unsigned int is_direct:1;	// 457 = 0x1c9
    unsigned int has_ipv4:1;	// 457 = 0x1c9
    unsigned int has_ipv6:1;	// 457 = 0x1c9
    unsigned int has_nat64:1;	// 458 = 0x1ca
    unsigned int traffic_mgmt_background:1;	// 458 = 0x1ca
    unsigned int necp_satisfied:1;	// 458 = 0x1ca
    unsigned int override_viable:1;	// 458 = 0x1ca
    unsigned int changed_from_previous:1;	// 458 = 0x1ca
    unsigned int probe_connectivity:1;	// 458 = 0x1ca
    unsigned int link_quality_abort:1;	// 458 = 0x1ca
    unsigned int checked_dns:1;	// 458 = 0x1ca
    unsigned int is_listener:1;	// 459 = 0x1cb
    unsigned int is_interpose:1;	// 459 = 0x1cb
    unsigned int specific_listener:1;	// 459 = 0x1cb
    unsigned int override_is_expensive:1;	// 459 = 0x1cb
    unsigned int override_is_constrained:1;	// 459 = 0x1cb
    unsigned int override_uses_wifi:1;	// 459 = 0x1cb
    unsigned int override_uses_cellular:1;	// 459 = 0x1cb
    unsigned int override_interface_scoped:1;	// 459 = 0x1cb
    unsigned int merged_proxy_configs:1;	// 460 = 0x1cc
    unsigned int has_kext_filter:1;	// 460 = 0x1cc
    unsigned int has_pf_rules:1;	// 460 = 0x1cc
    unsigned int has_application_level_firewall:1;	// 460 = 0x1cc
    unsigned int has_parental_controls:1;	// 460 = 0x1cc
    unsigned int __pad_bits:3;	// 460 = 0x1cc
}

- (void).cxx_destruct;	// IMP=0x0000000000651a60
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006519a0
- (id)redactedDescription;	// IMP=0x0000000000651980
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000006518b0
- (id)init;	// IMP=0x0000000000651630

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
