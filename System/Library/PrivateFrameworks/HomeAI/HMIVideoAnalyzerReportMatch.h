//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMIVideoAnalyzerReportMatch : HMFObject
{
    float _score;	// 8 = 0x8
    NSNumber *_truth;	// 16 = 0x10
    NSNumber *_prediction;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000034f65
@property(readonly) float score; // @synthesize score=_score;
@property(readonly) NSNumber *prediction; // @synthesize prediction=_prediction;
@property(readonly) NSNumber *truth; // @synthesize truth=_truth;
- (id)initWithTruth:(id)arg1 prediction:(id)arg2 score:(float)arg3;	// IMP=0x0000000000034e6f

@end

