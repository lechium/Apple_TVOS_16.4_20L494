//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_channel, OS_nw_interface;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_interface_status_monitor : NSObject
{
    NSObject<OS_nw_interface> *interface;	// 8 = 0x8
    NSObject<OS_nw_channel> *channel;	// 16 = 0x10
    CDUnknownBlockType packet_handler;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *packet_handler_queue;	// 32 = 0x20
    CDUnknownBlockType update_handler;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *update_handler_queue;	// 48 = 0x30
    void *channel_event_source;	// 56 = 0x38
    void *interface_advisory_source;	// 64 = 0x40
    unsigned int cancelled:1;	// 72 = 0x48
    unsigned int __pad_bits:7;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000007e1fa0
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000007e1f30
- (id)init;	// IMP=0x00000000007e1cb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

