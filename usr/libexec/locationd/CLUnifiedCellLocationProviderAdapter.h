//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLUnifiedCellLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x0010000000662326
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000066230d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000006622b0
+ (_Bool)isSupported;	// IMP=0x001000000066253a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000662512
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000006624e5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000006624bd
- (void *)adaptee;	// IMP=0x001000000066248a
- (void)endService;	// IMP=0x001000000066246f
- (void)beginService;	// IMP=0x00100000006623bf
- (id)init;	// IMP=0x0010000000662382

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

