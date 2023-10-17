//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CRTextSequenceRecognizerModelCoreMLInput : NSObject
{
    MLMultiArray *_img_input;	// 8 = 0x8
    NSArray *_textFeatureInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000019a9b
@property(retain) NSArray *textFeatureInfo; // @synthesize textFeatureInfo=_textFeatureInfo;
@property(retain, nonatomic) MLMultiArray *img_input; // @synthesize img_input=_img_input;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000019a04
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithImg_input:(id)arg1 featureInfo:(id)arg2;	// IMP=0x0000000000019972

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

