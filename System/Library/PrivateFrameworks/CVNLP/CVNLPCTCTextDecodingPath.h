//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CVNLPTextDecodingPath.h"

@class CVNLPLanguageResourceBundle, CVNLPLexiconCursors, NSString;

@interface CVNLPCTCTextDecodingPath : CVNLPTextDecodingPath
{
    vector_3b74075b _tokenString;	// 48 = 0x30
    vector_3b74075b _histWordTokenIDs;	// 72 = 0x48
    unsigned long long _beginningCurrentWord;	// 96 = 0x60
    struct vector<double, std::allocator<double>> _cumulativeTokenLogProbabilities;	// 104 = 0x68
    struct vector<double, std::allocator<double>> _tokenBoundaryLogProbabilities;	// 128 = 0x80
    struct vector<unsigned long, std::allocator<unsigned long>> _tokenStringSegmentationPositions;	// 152 = 0x98
    struct vector<unsigned long, std::allocator<unsigned long>> _tokenMaxActivations;	// 176 = 0xb0
    struct vector<unsigned long, std::allocator<unsigned long>> _tokenCommitCharacterLengths;	// 200 = 0xc8
    _Bool _hasContext;	// 224 = 0xe0
    double _normalizedTotalLogProbability;	// 232 = 0xe8
    NSString *_latestExpandedSymbolIncludingPseudospace;	// 240 = 0xf0
    _Bool _hasExpanded;	// 248 = 0xf8
    _Bool _hasProblematicMixedScriptWords;	// 249 = 0xf9
    _Bool _hasCalculatedHasProblematicMixedScriptWords;	// 250 = 0xfa
    int _lastCodeUnitType;	// 252 = 0xfc
    _Bool _optimizingAlignment;	// 256 = 0x100
    double _blankLogProbability;	// 264 = 0x108
    double _nonBlankLogProbability;	// 272 = 0x110
    double _historyLexiconLogProbability;	// 280 = 0x118
    double _activeWordLexiconLogProbability;	// 288 = 0x120
    double _languageResourceLogProbability;	// 296 = 0x128
    CVNLPLexiconCursors *_cursors;	// 304 = 0x130
    struct CVNLPLanguageModelWithState *_characterLMState;	// 312 = 0x138
    CVNLPLanguageResourceBundle *_languageResourceBundle;	// 320 = 0x140
    CDUnknownBlockType _scoringFunction;	// 328 = 0x148
}

+ (id)_getQueue;	// IMP=0x0060000000039ae0
+ (void)applyWordLanguageModelProbabilityToPath:(id)arg1 stemmedFromPath:(id)arg2 isCommittingToken:(_Bool)arg3;	// IMP=0x00600000000382f0
- (id).cxx_construct;	// IMP=0x0000000000039e30
- (void).cxx_destruct;	// IMP=0x0000000000039d30
@property(readonly, nonatomic) CDUnknownBlockType scoringFunction; // @synthesize scoringFunction=_scoringFunction;
@property(readonly, retain, nonatomic) CVNLPLanguageResourceBundle *languageResourceBundle; // @synthesize languageResourceBundle=_languageResourceBundle;
@property(nonatomic) struct CVNLPLanguageModelWithState *characterLMState; // @synthesize characterLMState=_characterLMState;
@property(retain, nonatomic) CVNLPLexiconCursors *cursors; // @synthesize cursors=_cursors;
@property(readonly) _Bool optimizingAlignment; // @synthesize optimizingAlignment=_optimizingAlignment;
@property(readonly) double languageResourceLogProbability; // @synthesize languageResourceLogProbability=_languageResourceLogProbability;
@property double activeWordLexiconLogProbability; // @synthesize activeWordLexiconLogProbability=_activeWordLexiconLogProbability;
@property double historyLexiconLogProbability; // @synthesize historyLexiconLogProbability=_historyLexiconLogProbability;
@property double nonBlankLogProbability; // @synthesize nonBlankLogProbability=_nonBlankLogProbability;
@property double blankLogProbability; // @synthesize blankLogProbability=_blankLogProbability;
- (float)_wordLanguageModelLogProbabilityForString:(id)arg1 originalWordRanges:(id)arg2 originalWordIDs:(vector_3b74075b)arg3 wordRanges:(id)arg4 wordIDs:(vector_3b74075b)arg5;	// IMP=0x0000000000038dc0
- (void)_updateLexiconLogProbabilityForString:(id)arg1 stemmingFromPath:(id)arg2;	// IMP=0x00000000000379c0
- (void)_updateCharacterLanguageModelLogProbabilityForString:(id)arg1 stemmingFromPath:(id)arg2 normalizedCodepoint:(unsigned int)arg3;	// IMP=0x0000000000037750
- (id)pathByExtendingWithString:(id)arg1 extendedPathString:(id)arg2 blankLogProb:(double)arg3 nonBlankLogProb:(double)arg4 timestep:(long long)arg5 commitAction:(long long)arg6 symbolLogProb:(double)arg7;	// IMP=0x0000000000036d30
- (id)childPathWithBlankLogProb:(double)arg1;	// IMP=0x0000000000036670
- (void)updateLastTokenWithMaxActivation:(long long)arg1 totalLogProbability:(double)arg2 tokenBoundaryLogProbability:(double)arg3;	// IMP=0x0000000000036620
- (void)merge:(id)arg1 logProbCumulator:(CDUnknownBlockType)arg2;	// IMP=0x00000000000363d0
- (long long)compare:(id)arg1;	// IMP=0x0000000000036370
- (id)debugDescription;	// IMP=0x0000000000036230
- (id)description;	// IMP=0x0000000000036100
- (id)tokensWithTimestep:(long long)arg1 isFinalTimestep:(_Bool)arg2;	// IMP=0x0000000000035bb0
- (void)commitTokenAtTimestep:(long long)arg1 currentSymbolLogProbability:(double)arg2 commitAction:(long long)arg3 string:(id)arg4 stemmingFromPath:(id)arg5;	// IMP=0x0000000000035440
- (unsigned long long)_currentTokenStringLength;	// IMP=0x00000000000353a0
@property(readonly, nonatomic) _Bool hasExpanded;
@property(readonly, nonatomic) NSString *latestExpandedSymbol;
@property(readonly, nonatomic) NSString *latestExpandedSymbolIncludingPseudospace;
@property(readonly) double normalizedActivationLogProbability;
- (double)scoreForTokenIndex:(long long)arg1;	// IMP=0x00000000000352b0
@property double lastTokenBoundaryLogProbability;
- (_Bool)hasProblematicMixedScriptWords;	// IMP=0x0000000000035210
- (double)lexiconScore;	// IMP=0x00000000000351f0
@property(readonly) double normalizedTotalLogProbability;
- (double)modelLogProbability;	// IMP=0x0000000000035150
- (long long)tokenCount;	// IMP=0x0000000000035130
- (long long)pseudoSpaceCount;	// IMP=0x0000000000035110
- (long long)characterCount;	// IMP=0x00000000000350f0
- (void)setPseudoSpaceCount:(long long)arg1;	// IMP=0x0000000000035070
- (void)setCharacterCount:(long long)arg1;	// IMP=0x0000000000035050
- (void)setWordLanguageModelLogProbability:(double)arg1;	// IMP=0x0000000000035030
- (void)setCharacterLanguageModelLogProbability:(double)arg1;	// IMP=0x0000000000035010
- (void)dealloc;	// IMP=0x0000000000034f80
- (id)initWithLanguageResourceBundle:(id)arg1 scoringFunction:(CDUnknownBlockType)arg2 initialCharacterLMState:(struct CVNLPLanguageModelWithState *)arg3 characterTokenIDs:(vector_3b74075b)arg4 wordTokenIDs:(vector_3b74075b)arg5 optimizingAlignment:(_Bool)arg6 hasContext:(_Bool)arg7;	// IMP=0x0000000000034da0

@end
