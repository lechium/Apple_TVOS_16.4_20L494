//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNVGGishCheeringModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000008100c
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000080f83
+ (id)URLOfModelInThisBundle;	// IMP=0x0060000000080c2e
- (void).cxx_destruct;	// IMP=0x00000000000815a1
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000081358
- (id)predictionFromInput1:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000812c6
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000811a3
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000081124
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000080f0b
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000080e93
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000080e0e
- (id)init;	// IMP=0x0000000000080db1
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000000080d20

@end

