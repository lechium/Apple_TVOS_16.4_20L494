//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLCompanionNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000001b6bb6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b6b9d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000001b6b40
+ (_Bool)isSupported;	// IMP=0x00100000001b881d
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b6da2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b6d75
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b6d4d
- (void *)adaptee;	// IMP=0x00100000001b6d1a
- (void)endService;	// IMP=0x00100000001b6cff
- (void)beginService;	// IMP=0x00100000001b6c4f
- (id)init;	// IMP=0x00100000001b6c12
- (void)endService;	// IMP=0x00100000001b898f
- (void)beginService;	// IMP=0x00100000001b8825

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

