//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLAutopauseProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x002000000075db66
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000075db4d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000075daf0
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x002000000075dd52
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000075dd25
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000075dcfd
- (void *)adaptee;	// IMP=0x001000000075dcca
- (void)endService;	// IMP=0x001000000075dcaf
- (void)beginService;	// IMP=0x001000000075dbff
- (id)init;	// IMP=0x001000000075dbc2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

