//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_context, OS_nw_endpoint, OS_nw_interface, OS_nw_protocol_options;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_path_parameters : NSObject
{
    struct nw_parameters_path_value path_value;	// 8 = 0x8
    struct nw_parameters_joinable_path_value joinable_path_value;	// 81 = 0x51
    char *account_id;	// 88 = 0x58
    char *attribution_context;	// 96 = 0x60
    char *attributed_bundle;	// 104 = 0x68
    NSObject<OS_nw_context> *context;	// 112 = 0x70
    NSObject<OS_nw_protocol_options> *transport_options;	// 120 = 0x78
    NSObject<OS_nw_protocol_options> *internet_options;	// 128 = 0x80
    NSObject<OS_nw_endpoint> *local_address;	// 136 = 0x88
    NSObject<OS_nw_interface> *required_interface;	// 144 = 0x90
    struct nw_parameters_extended_objects *extended_objects;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000001f9910
- (void)dealloc;	// IMP=0x00000000001f96f0
- (id)init;	// IMP=0x00000000001f9470

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

