//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLModeling-Protocol.h>

@class MLPredictionOptions, MLRegressorResult;
@protocol MLFeatureProvider;

@protocol MLRegressor <MLModeling>
- (MLRegressorResult *)regress:(id <MLFeatureProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id *)arg3;
@end

