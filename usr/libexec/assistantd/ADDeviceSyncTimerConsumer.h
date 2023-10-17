//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADDeviceSyncTimerConsumer : NSObject
{
}

- (void)applySnapshot:(id)arg1 fromDeviceWithIdentifier:(id)arg2;	// IMP=0x002000000024c399
- (void)applyIncrementalChanges:(id)arg1 fromDeviceWithIdentifier:(id)arg2;	// IMP=0x001000000024c281
- (void)getGenerationForDeviceWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000024bfc0
- (long long)preferredPullingModeForDeviceWithIdentifier:(id)arg1 fromGeneration:(unsigned long long)arg2 toGeneration:(unsigned long long)arg3;	// IMP=0x001000000024bedd
- (void)finalizeForDeviceWithIdentifier:(id)arg1;	// IMP=0x001000000024bdc9
- (void)prepareForDeviceWithIdentifier:(id)arg1;	// IMP=0x001000000024bcb5
@property(readonly, nonatomic) NSString *type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
