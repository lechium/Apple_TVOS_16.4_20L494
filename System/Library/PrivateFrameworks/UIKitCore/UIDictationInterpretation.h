//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIDictationInterpretation : NSObject
{
    NSArray *_tokens;	// 8 = 0x8
    double _averageConfidenceScore;	// 16 = 0x10
}

+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(const struct __CFString *)arg2;	// IMP=0x00100000009c816b
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009c7c9e
- (void).cxx_destruct;	// IMP=0x00000000009c866c
@property(nonatomic) double averageConfidenceScore; // @synthesize averageConfidenceScore=_averageConfidenceScore;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
- (id)description;	// IMP=0x00000000009c851b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009c8448
- (id)serializedInterpretationWithTransform:(const struct __CFString *)arg1;	// IMP=0x00000000009c80fc
@property(readonly, nonatomic) _Bool removeSpaceAfter;
@property(readonly, nonatomic) _Bool removeSpaceBefore;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009c7ff8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009c7ee4
- (id)initWithTokens:(id)arg1 score:(double)arg2;	// IMP=0x00000000009c7e4b
- (id)initWithTokens:(id)arg1;	// IMP=0x00000000009c7ca6

@end

