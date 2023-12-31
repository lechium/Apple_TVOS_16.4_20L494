//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNVGGishEmbeddingModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0060000000079b71
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000079ae8
+ (id)URLOfModelInThisBundle;	// IMP=0x0060000000079793
- (void).cxx_destruct;	// IMP=0x000000000007a106
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000079ebd
- (id)predictionFromInput1:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000079e2b
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000079d08
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000079c89
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000079a70
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000799f8
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000079973
- (id)init;	// IMP=0x0000000000079916
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000000079885

@end

