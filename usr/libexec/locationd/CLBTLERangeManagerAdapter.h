//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLBTLERangeManagerAdapter
{
}

+ (id)getSilo;	// IMP=0x00100000009d72f6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000009d72dd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000009d7280
+ (_Bool)isSupported;	// IMP=0x00100000009d750a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000009d74e2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000009d74b5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000009d748d
- (void *)adaptee;	// IMP=0x00100000009d745a
- (void)endService;	// IMP=0x00100000009d743f
- (void)beginService;	// IMP=0x00100000009d738f
- (id)init;	// IMP=0x00100000009d7352

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

