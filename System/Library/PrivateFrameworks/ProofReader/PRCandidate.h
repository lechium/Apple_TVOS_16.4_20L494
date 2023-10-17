//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PRCandidate : NSObject
{
    NSArray *_candidateWords;	// 8 = 0x8
    struct _NSRange _replacementRange;	// 16 = 0x10
    double _errorScore;	// 32 = 0x20
    double _linguisticScore;	// 40 = 0x28
    double _lexiconScore;	// 48 = 0x30
    _Bool _blocklisted;	// 56 = 0x38
    _Bool _hasCustomErrorScore;	// 57 = 0x39
}

+ (id)transpositionCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange)arg4 intendedFirstCharacter:(unsigned short)arg5 intendedSecondCharacter:(unsigned short)arg6 errorModel:(id)arg7 capitalizationDictionaryArray:(id)arg8;	// IMP=0x0060000000049e24
+ (id)replacementCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange)arg4 intendedCharacter:(unsigned short)arg5 actualCharacter:(unsigned short)arg6 errorModel:(id)arg7 capitalizationDictionaryArray:(id)arg8;	// IMP=0x0060000000049d85
+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange)arg4 errorType:(unsigned long long)arg5 errorModel:(id)arg6 capitalizationDictionaryArray:(id)arg7;	// IMP=0x0060000000049d26
+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange)arg4 errorScore:(double)arg5 capitalizationDictionaryArray:(id)arg6;	// IMP=0x0060000000049adc
+ (id)transpositionCandidateWithString:(id)arg1 replacementRange:(struct _NSRange)arg2 intendedFirstCharacter:(unsigned short)arg3 intendedSecondCharacter:(unsigned short)arg4 errorModel:(id)arg5;	// IMP=0x0060000000049a2e
+ (id)replacementCandidateWithString:(id)arg1 replacementRange:(struct _NSRange)arg2 intendedCharacter:(unsigned short)arg3 actualCharacter:(unsigned short)arg4 errorModel:(id)arg5;	// IMP=0x0060000000049980
+ (id)candidateWithString:(id)arg1 replacementRange:(struct _NSRange)arg2 errorType:(unsigned long long)arg3 errorModel:(id)arg4;	// IMP=0x0060000000049908
+ (id)candidateWithString:(id)arg1 replacementRange:(struct _NSRange)arg2 errorScore:(double)arg3;	// IMP=0x00600000000498b3
+ (id)candidateWithWords:(id)arg1 replacementRange:(struct _NSRange)arg2 errorType:(unsigned long long)arg3 errorModel:(id)arg4;	// IMP=0x0060000000049818
+ (id)candidateWithWords:(id)arg1 replacementRange:(struct _NSRange)arg2 errorScore:(double)arg3;	// IMP=0x0060000000049795
@property(nonatomic, getter=hasCustomErrorScore) _Bool customErrorScore; // @synthesize customErrorScore=_hasCustomErrorScore;
@property(nonatomic, getter=isBlocklisted) _Bool blocklisted; // @synthesize blocklisted=_blocklisted;
@property(nonatomic) double lexiconScore; // @synthesize lexiconScore=_lexiconScore;
@property(nonatomic) double linguisticScore; // @synthesize linguisticScore=_linguisticScore;
@property(nonatomic) double errorScore; // @synthesize errorScore=_errorScore;
@property(readonly, nonatomic) struct _NSRange replacementRange; // @synthesize replacementRange=_replacementRange;
@property(readonly, copy, nonatomic) NSArray *candidateWords; // @synthesize candidateWords=_candidateWords;
@property(readonly, nonatomic) double score;
@property(readonly, copy, nonatomic) NSString *string;
@property(readonly, nonatomic) unsigned long long numberOfWords;
- (void)dealloc;	// IMP=0x0000000000049f6e
- (id)description;	// IMP=0x0000000000049ec3
- (id)initWithString:(id)arg1 replacementRange:(struct _NSRange)arg2 errorScore:(double)arg3;	// IMP=0x000000000004971b
- (id)initWithCandidateWords:(id)arg1 replacementRange:(struct _NSRange)arg2 errorScore:(double)arg3;	// IMP=0x0000000000049694

@end

