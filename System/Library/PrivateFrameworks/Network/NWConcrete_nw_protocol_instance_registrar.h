//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_protocol_instance_registrar : NSObject
{
    struct os_unfair_lock_s lock;	// 8 = 0x8
    struct nw_protocol_entry_list instances;	// 16 = 0x10
    struct nw_protocol_identifier identifier;	// 24 = 0x18
    unsigned long long instance_count;	// 64 = 0x40
}

- (id)redactedDescription;	// IMP=0x0000000000069e70
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000069ce0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

