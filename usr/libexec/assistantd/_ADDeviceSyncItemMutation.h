//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceSyncItem, NSDictionary, NSString, NSUUID;

@interface _ADDeviceSyncItemMutation : NSObject
{
    ADDeviceSyncItem *_base;	// 8 = 0x8
    NSUUID *_UUID;	// 16 = 0x10
    NSDictionary *_properties;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasUUID:1;
        unsigned int hasProperties:1;
    } _mutationFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000268781
- (void)setProperties:(id)arg1;	// IMP=0x0010000000268761
- (id)getProperties;	// IMP=0x0010000000268729
- (void)setUUID:(id)arg1;	// IMP=0x0010000000268709
- (id)getUUID;	// IMP=0x00100000002686d1
- (_Bool)isDirty;	// IMP=0x00100000002686c6
- (id)initWithBase:(id)arg1;	// IMP=0x001000000026865b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

