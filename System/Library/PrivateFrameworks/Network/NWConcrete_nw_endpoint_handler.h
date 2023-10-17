//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NWConcrete_nw_endpoint_mode_handler, OS_nw_association, OS_nw_context, OS_nw_endpoint, OS_nw_object, OS_nw_parameters, OS_nw_path, OS_nw_path_evaluator, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_endpoint_handler : NSObject
{
    CDUnknownFunctionPointerType report_callback;	// 8 = 0x8
    NSObject<OS_nw_object> *callback_context;	// 16 = 0x10
    NSObject<OS_nw_endpoint> *endpoint;	// 24 = 0x18
    NSObject<OS_nw_parameters> *parameters;	// 32 = 0x20
    NSObject<OS_nw_context> *context;	// 40 = 0x28
    NSObject<OS_nw_association> *association;	// 48 = 0x30
    NSObject<OS_nw_path> *current_path;	// 56 = 0x38
    NWConcrete_nw_endpoint_handler *parent_handler;	// 64 = 0x40
    struct nw_endpoint_handler_event_s event;	// 72 = 0x48
    NSObject<OS_xpc_object> *inactive_agent_uuids;	// 80 = 0x50
    NSObject<OS_xpc_object> *inactive_agent_dictionaries;	// 88 = 0x58
    NSObject<OS_xpc_object> *triggered_agent_uuids;	// 96 = 0x60
    struct os_unfair_lock_s lock;	// 104 = 0x68
    int mode;	// 108 = 0x6c
    int state;	// 112 = 0x70
    unsigned long long start_time;	// 120 = 0x78
    void *fallback_timer;	// 128 = 0x80
    unsigned int top_id;	// 136 = 0x88
    _Atomic unsigned int last_child_id;	// 140 = 0x8c
    unsigned char id_chain[16];	// 144 = 0x90
    char id_str[75];	// 160 = 0xa0
    NSObject<NWConcrete_nw_endpoint_mode_handler> *mode_handler;	// 240 = 0xf0
    NSObject<OS_nw_path_evaluator> *override_evaluator;	// 248 = 0xf8
    int privacy_stance;	// 256 = 0x100
    unsigned int dry_run:1;	// 260 = 0x104
    unsigned int triggering_voluntary_agents:1;	// 260 = 0x104
    unsigned int reuse_association:1;	// 260 = 0x104
    unsigned int has_better_path:1;	// 260 = 0x104
    unsigned int has_finished_transport:1;	// 260 = 0x104
    unsigned int logging_disabled:1;	// 260 = 0x104
}

- (void).cxx_destruct;	// IMP=0x0000000000307870
- (void)dealloc;	// IMP=0x0000000000307010

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

