//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsCache : NSObject
{
    unsigned long long _detectorModel;	// 8 = 0x8
    NSMutableDictionary *_originatingRequestSpecifierToOperationPoints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000205df2
- (id)sceneLabelOperationPointsForOriginatingRequestSpecifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000205c8e
- (id)initWithDetectorModel:(unsigned long long)arg1;	// IMP=0x0000000000205bf7

@end

