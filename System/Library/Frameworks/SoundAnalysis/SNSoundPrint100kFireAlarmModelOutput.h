//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNSoundPrint100kFireAlarmModelOutput : NSObject
{
    MLMultiArray *_Sigmoid;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007af89
@property(retain, nonatomic) MLMultiArray *Sigmoid; // @synthesize Sigmoid=_Sigmoid;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000007aee4
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithSigmoid:(id)arg1;	// IMP=0x000000000007ae59

@end
