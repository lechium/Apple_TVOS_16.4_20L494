//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModelDescription, NSString;
@protocol SNMLModel;

__attribute__((visibility("hidden")))
@interface SNMLLockedModel : NSObject
{
    id <SNMLModel> _model;	// 8 = 0x8
    struct mutex _lock;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000001f921
- (void).cxx_destruct;	// IMP=0x000000000001f8fb
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001f842
@property(readonly) MLModelDescription *modelDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
