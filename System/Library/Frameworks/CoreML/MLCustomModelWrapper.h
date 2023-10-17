//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MLModel.h"

@class NSObject;
@protocol MLCustomModel;

__attribute__((visibility("hidden")))
@interface MLCustomModelWrapper : MLModel
{
    NSObject<MLCustomModel> *_customModel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006d782
@property(retain) NSObject<MLCustomModel> *customModel; // @synthesize customModel=_customModel;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006d59a
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006d45c
- (id)initWithModelDescription:(id)arg1 customModel:(id)arg2 configuration:(id)arg3;	// IMP=0x000000000006d3c6

@end

