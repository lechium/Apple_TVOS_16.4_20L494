//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLGeomagneticModelProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x00100000001b4638
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b461f
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000001b45c2
+ (_Bool)isSupported;	// IMP=0x00100000001af530
- (void)fetchGeomagneticModelData:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b4a0f
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b49e7
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b49ba
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b4992
- (void *)adaptee;	// IMP=0x00000000001b495f
- (void)endService;	// IMP=0x00000000001b4944
- (void)beginService;	// IMP=0x00000000001b46d1
- (id)init;	// IMP=0x00000000001b4694

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
