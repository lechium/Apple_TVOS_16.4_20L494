//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLDataProtectionManagerAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000006ac946
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000006ac92d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000006ac8d0
- (_Bool)syncgetDeviceUnlockedSinceFirstBoot;	// IMP=0x00200000006acd9a
- (int)syncgetDataAvailability;	// IMP=0x00100000006acd84
- (void)postDataAvailability;	// IMP=0x00100000006acb8b
- (void)fetchDataAvailabilityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000006acb5a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000006acb32
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000006acb05
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000006acadd
- (void *)adaptee;	// IMP=0x00100000006acaaa
- (void)endService;	// IMP=0x00100000006aca8f
- (void)beginService;	// IMP=0x00100000006ac9df
- (id)init;	// IMP=0x00100000006ac9a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
