//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLPencilStateAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000883d8a
+ (id)getSilo;	// IMP=0x0010000000883b76
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000883b5d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000883b00
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000883d62
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000883d35
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000883d0d
- (void *)adaptee;	// IMP=0x0010000000883cda
- (void)endService;	// IMP=0x0010000000883cbf
- (void)beginService;	// IMP=0x0010000000883c0f
- (id)init;	// IMP=0x0010000000883bd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

