//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLSimulatedLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x00100000003f52e6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000003f52cd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000003f5270
+ (_Bool)isSupported;	// IMP=0x00100000003f54fa
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000003f54d2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000003f54a5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000003f547d
- (void *)adaptee;	// IMP=0x00100000003f544a
- (void)endService;	// IMP=0x00100000003f542f
- (void)beginService;	// IMP=0x00100000003f537f
- (id)init;	// IMP=0x00100000003f5342

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

