//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class BLSBacklightSceneUpdate, BLSDesiredFidelityRequest, BLSFrameSpecifiersRequest;

@protocol BLSBacklightSceneEnvironmentUpdating <NSObject>
- (void)performFrameSpecifiersRequest:(BLSFrameSpecifiersRequest *)arg1;
- (void)performDesiredFidelityRequest:(BLSDesiredFidelityRequest *)arg1;
- (void)updatedEnvironmentWithDelta:(CDStruct_d3566df9)arg1 backlightSceneUpdate:(BLSBacklightSceneUpdate *)arg2;
@end

