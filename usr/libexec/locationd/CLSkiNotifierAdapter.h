//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLSkiNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x00100000006919a2
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000691989
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000069192c
+ (_Bool)isSupported;	// IMP=0x0010000000691c64
- (void)queryUsingRecord:(struct CLSkiEntry)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0020000000691b57
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000691b2f
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000691b02
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000691ada
- (void *)adaptee;	// IMP=0x0010000000691aa7
- (void)endService;	// IMP=0x0010000000691a8c
- (void)beginService;	// IMP=0x0010000000691a3b
- (id)init;	// IMP=0x00100000006919fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

