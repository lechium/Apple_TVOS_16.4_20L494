//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMCameraSignificantEvent.h>

@class NSString, NSUUID;

@interface HMCameraSignificantEvent (HFDebugging)
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00200000000acf12
- (id)hf_reasonKey;	// IMP=0x00200000002ab0d0
- (id)hf_faceClassificationName;	// IMP=0x00200000002ab056

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

