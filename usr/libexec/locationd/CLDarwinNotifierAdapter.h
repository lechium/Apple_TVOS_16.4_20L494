//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLDarwinNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000009ae816
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000009ae7fd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000009ae7a0
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000009aea02
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000009ae9d5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000009ae9ad
- (void *)adaptee;	// IMP=0x00100000009ae97a
- (void)endService;	// IMP=0x00100000009ae95f
- (void)beginService;	// IMP=0x00100000009ae8af
- (id)init;	// IMP=0x00100000009ae872

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

