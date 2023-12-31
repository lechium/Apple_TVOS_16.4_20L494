//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIDictationScoredToken
{
    double _confidenceScore;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009c7a41
@property(readonly, nonatomic) double confidenceScore; // @synthesize confidenceScore=_confidenceScore;
- (id)_descriptionExtra;	// IMP=0x00000000009c7c5b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009c7bbe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009c7b3f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009c7aad
- (id)initWithText:(id)arg1 removeSpaceBefore:(_Bool)arg2 removeSpaceAfter:(_Bool)arg3 confidenceScore:(double)arg4;	// IMP=0x00000000009c7a49

@end

