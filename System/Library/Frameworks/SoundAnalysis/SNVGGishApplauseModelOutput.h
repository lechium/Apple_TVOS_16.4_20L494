//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNVGGishApplauseModelOutput : NSObject
{
    MLMultiArray *_output1;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000077a3f
@property(retain, nonatomic) MLMultiArray *output1; // @synthesize output1=_output1;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000007799a
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithOutput1:(id)arg1;	// IMP=0x000000000007790f

@end

