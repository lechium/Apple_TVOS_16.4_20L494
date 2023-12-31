//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

@interface CLBluetoothServiceAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x002000000057833a
+ (id)getSilo;	// IMP=0x0010000000578126
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000057810d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000005780b0
- (MISSING_TYPE *)scan;	// IMP=0x00200000005783d3
- (_Bool)syncgetHasConnectedDevices;	// IMP=0x00100000005783b5
- (void)fetchHasConnectedDevicesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000578380
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000578312
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005782e5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000005782bd
- (void *)adaptee;	// IMP=0x001000000057828a
- (void)endService;	// IMP=0x001000000057826f
- (void)beginService;	// IMP=0x00100000005781bf
- (id)init;	// IMP=0x0010000000578182

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

