//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLLoiLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x00100000006deb24
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000006deb0b
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000006deaae
+ (_Bool)isSupported;	// IMP=0x00100000006ded38
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000006ded10
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000006dece3
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000006decbb
- (void *)adaptee;	// IMP=0x00100000006dec88
- (void)endService;	// IMP=0x00100000006dec6d
- (void);	// IMP=0x00100000006debbd
- (id)init;	// IMP=0x00100000006deb80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
