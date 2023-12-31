//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CRTextSequenceRecognizerModelCoreMLOutput : NSObject
{
    NSArray *_textFeatureInfo;	// 8 = 0x8
    MLMultiArray *_output_label_prob_map;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000019bbe
@property(retain, nonatomic) MLMultiArray *output_label_prob_map; // @synthesize output_label_prob_map=_output_label_prob_map;
@property(retain) NSArray *textFeatureInfo; // @synthesize textFeatureInfo=_textFeatureInfo;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000019b27
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithOutput_label_prob_map:(id)arg1;	// IMP=0x0000000000019ac3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

