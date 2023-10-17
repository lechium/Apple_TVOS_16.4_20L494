//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableDictionary, NSObject, NSString;
@protocol FlexSongAssetProviderProtocol;

@interface FlexSong
{
    NSDictionary *_analysisData;	// 8 = 0x8
    CDStruct_1b6d18a9 _cachedNaturalDuration;	// 16 = 0x10
    NSMutableDictionary *_segmentCache;	// 40 = 0x28
    NSString *_audioFileExtension;	// 48 = 0x30
    NSObject<FlexSongAssetProviderProtocol> *_assetProvider;	// 56 = 0x38
    NSArray *_bodySegments;	// 64 = 0x40
}

+ (id)loadSongInFolderWithPath:(id)arg1;	// IMP=0x0060000000038156
+ (_Bool)_transitionIsPossibleFromSegment:(id)arg1 toSegment:(id)arg2 forBodyClipPlaylist:(id)arg3;	// IMP=0x006000000003347a
+ (id)outroInfoForClipPlaylist:(id)arg1;	// IMP=0x0060000000031e42
+ (long long)_durationInSamplesToReserveForOutroSegment:(id)arg1 withOptions:(id)arg2;	// IMP=0x006000000002ee61
+ (long long)_findEarlyFadeStartOffsetInSamplesForOutroSegment:(id)arg1 withOptions:(id)arg2;	// IMP=0x006000000002ebc6
+ (long long)_findMinLengthInSamplesForEarlyFadeOutForOutroSegment:(id)arg1 withOptions:(id)arg2;	// IMP=0x006000000002eaf3
+ (long long)_findMaxLengthInSamplesToReserveForOutroSegment:(id)arg1 withOptions:(id)arg2;	// IMP=0x006000000002e9e6
+ (id)numberToString:(long long)arg1;	// IMP=0x006000000002785f
- (void).cxx_destruct;	// IMP=0x00000000000382b7
@property(readonly, nonatomic) NSArray *bodySegments; // @synthesize bodySegments=_bodySegments;
@property(readonly, nonatomic) NSObject<FlexSongAssetProviderProtocol> *assetProvider; // @synthesize assetProvider=_assetProvider;
@property(readonly, nonatomic) NSString *audioFileExtension; // @synthesize audioFileExtension=_audioFileExtension;
@property(readonly, nonatomic) NSArray *transSegments;
@property(readonly, nonatomic) NSArray *outroSegments;
@property(readonly, nonatomic) NSArray *introSegments;
@property(readonly, nonatomic) NSArray *crossFadeSegments;
@property(readonly, nonatomic) NSArray *mainSegments;
- (id)timedMetadataItemsWithIdentifier:(id)arg1 forRendition:(id)arg2;	// IMP=0x00000000000351c0
- (_Bool)verifyAssetsWithFailureReason:(id *)arg1;	// IMP=0x0000000000034f50
- (_Bool)_verifyAssetsForSegment:(id)arg1 withFailureReason:(id *)arg2;	// IMP=0x00000000000345fb
- (_Bool)verifyRendition:(id)arg1 forDuration:(CDStruct_1b6d18a9)arg2 failureReason:(id *)arg3;	// IMP=0x00000000000342e5
- (long long)_samplesForDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000342a1
- (_Bool)_validateAuthoringIssuesInRendition:(id)arg1 failureReason:(id *)arg2;	// IMP=0x0000000000033a08
- (_Bool)_validateTransitionsInRendition:(id)arg1 failureReason:(id *)arg2;	// IMP=0x0000000000031ffd
- (_Bool)_validateStructureForRendition:(id)arg1 failureReason:(id *)arg2;	// IMP=0x00000000000304de
- (id)_clipPlaylistForDuration:(CDStruct_1b6d18a9)arg1 withOptions:(id)arg2 testingContext:(id)arg3;	// IMP=0x00000000000303c2
- (id)renditionForDuration:(CDStruct_1b6d18a9)arg1 withOptions:(id)arg2 testingContext:(id)arg3;	// IMP=0x000000000002fe5e
- (id)_fullSongLoopedClipPlaylistForDuration:(CDStruct_1b6d18a9)arg1 withOptions:(id)arg2 testingContext:(id)arg3;	// IMP=0x000000000002f638
- (_Bool)_buildSegmentAssemblyList:(id)arg1 forDuration:(long long)arg2 withOptions:(id)arg3 testingContext:(id)arg4;	// IMP=0x000000000002ef73
- (_Bool)_buildIntroAndOutroOnlySegmentAssemblyList:(id)arg1 forDuration:(long long)arg2 testingContext:(id)arg3;	// IMP=0x000000000002e93a
- (_Bool)_rebuildBodySegmentsInAssemblyList:(id)arg1 forDuration:(long long)arg2 unusedDuration:(long long *)arg3 testingContext:(id)arg4;	// IMP=0x000000000002e8a2
- (_Bool)_addOutroSegmentsToAssemblyList:(id)arg1 forDuration:(long long)arg2 allowTrim:(_Bool)arg3 testingContext:(id)arg4;	// IMP=0x000000000002e0ba
- (_Bool)_addIntroSegmentsToAssemblyList:(id)arg1 forDuration:(long long)arg2 testingContext:(id)arg3;	// IMP=0x000000000002dd16
- (_Bool)_addBodySegmentsForAssemblyList:(id)arg1 forDuration:(long long)arg2 unusedDuration:(long long *)arg3 testingContext:(id)arg4 timedOut:(_Bool *)arg5;	// IMP=0x000000000002c34e
- (_Bool)_removeUnpermittedTransitionsInAssemblyList:(id)arg1 final:(_Bool)arg2 testingContext:(id)arg3 removedIndexes:(id)arg4 conflictList:(id)arg5;	// IMP=0x000000000002af4b
- (_Bool)_removeUnpermittedTransitionsInAssemblyList:(id)arg1 final:(_Bool)arg2 testingContext:(id)arg3 removedIndexes:(id)arg4;	// IMP=0x000000000002af28
- (_Bool)_updateTransitionBodySegmentsForAssemblyList:(id)arg1 usingNewSegment:(id)arg2 indexOfNewTransitionSegment:(id)arg3;	// IMP=0x000000000002a2af
- (void)_removeSegmentInfo:(id)arg1 fromAssemblyList:(id)arg2;	// IMP=0x000000000002a293
- (_Bool)_addSegment:(id)arg1 withDuration:(long long)arg2 toAssemblyList:(id)arg3 timeRemaining:(long long)arg4 reusedSegment:(id *)arg5 indexofNewSegment:(long long *)arg6;	// IMP=0x0000000000029951
- (_Bool)_addSegment:(id)arg1 withDuration:(long long)arg2 toAssemblyList:(id)arg3 indexOfNewSegment:(long long *)arg4;	// IMP=0x0000000000029931
- (void)_sequenceBodySegmentList:(id)arg1 forIndexes:(id)arg2;	// IMP=0x0000000000027cfe
- (id)_naturalDurationAssemblyList;	// IMP=0x00000000000279a3
- (long long)_minimumPermittedIntroAndOutroDuration;	// IMP=0x000000000002753b
- (long long)_actualOutroDurationForAssemblyList:(id)arg1 currentDuration:(long long)arg2;	// IMP=0x0000000000026f54
- (long long)_minOutroDuration;	// IMP=0x0000000000026f0b
- (long long)_maxOutroDuration;	// IMP=0x0000000000026ec2
- (long long)_minIntroDuration;	// IMP=0x0000000000026e79
- (long long)_maxIntroDuration;	// IMP=0x0000000000026e30
- (long long)_minBodySegmentDuration;	// IMP=0x0000000000026de7
- (long long)_sampleDurationOfClipPlaylist:(id)arg1;	// IMP=0x0000000000026cb7
- (id)_transitionSegmentForSegmentInfo:(id)arg1 toSegmentInfo:(id)arg2 fromBarIndex:(long long)arg3 inSegmentList:(id)arg4;	// IMP=0x00000000000268d8
- (id)_transitionSegmentForSegmentInfo:(id)arg1 fromBarIndex:(long long)arg2 inSegmentList:(id)arg3;	// IMP=0x00000000000268be
- (id)_sortFlexSegmentsShortestToLongest:(id)arg1;	// IMP=0x0000000000026800
- (unsigned long long)_highestIndexForSegmentType:(unsigned long long)arg1;	// IMP=0x000000000002662c
- (id)_longestSegmentForType:(unsigned long long)arg1;	// IMP=0x00000000000265ac
- (id)_longestSegmentsForType:(unsigned long long)arg1;	// IMP=0x000000000002647c
- (id)_shortestSegmentForType:(unsigned long long)arg1;	// IMP=0x00000000000263fc
- (id)_shortestSegmentsForType:(unsigned long long)arg1;	// IMP=0x0000000000026145
- (id)_segmentsForIndex:(unsigned long long)arg1 andType:(unsigned long long)arg2;	// IMP=0x0000000000025f3a
- (id)_segmentsforType:(unsigned long long)arg1;	// IMP=0x0000000000025de9
- (void)_loadSegments;	// IMP=0x0000000000025de3
- (void)_destroyCache;	// IMP=0x0000000000025dab
- (id)_mainSegmentsFromCache;	// IMP=0x0000000000025d92
- (id)_decodedMainSegmentsFromCache;	// IMP=0x0000000000025d79
- (id)_metadataDictFromCache;	// IMP=0x0000000000025d60
- (id)_cacheObjectForKey:(id)arg1;	// IMP=0x0000000000025c99
- (void)_populateCache;	// IMP=0x0000000000025a75
- (id)idealDurations;	// IMP=0x0000000000025a68
- (CDStruct_1b6d18a9)naturalDuration;	// IMP=0x0000000000025959
- (CDStruct_1b6d18a9)minimumDuration;	// IMP=0x00000000000258ff
- (id)description;	// IMP=0x000000000002586c
- (id)encodeAsDictionary;	// IMP=0x0000000000025439
- (void)_cacheSegmentsByType;	// IMP=0x0000000000025433
- (_Bool)isLoaded;	// IMP=0x000000000002542b
- (_Bool)canPlay;	// IMP=0x0000000000025423
- (id)analysisData;	// IMP=0x00000000000253bc
- (void)_loadAnalysisData;	// IMP=0x0000000000024e87
- (void)_setupInitialAssets:(id)arg1;	// IMP=0x0000000000024d56
- (id)initWithDictionary:(id)arg1 assets:(id)arg2;	// IMP=0x0000000000024ab0
- (id)initWithUID:(id)arg1 songName:(id)arg2 artistName:(id)arg3 tagIDs:(id)arg4 keywords:(id)arg5 hidden:(_Bool)arg6 sampleRate:(long long)arg7 mainSegments:(id)arg8 crossFadeSegments:(id)arg9 assets:(id)arg10 audioFileExtension:(id)arg11 audioEncoderPresetName:(id)arg12 metadataVersion:(long long)arg13 customOptions:(id)arg14;	// IMP=0x00000000000249e9
- (id)initCommonWithUID:(id)arg1 songName:(id)arg2 artistName:(id)arg3 tagIDs:(id)arg4 keywords:(id)arg5 hidden:(_Bool)arg6 sampleRate:(long long)arg7 mainSegments:(id)arg8 crossFadeSegments:(id)arg9 audioFileExtension:(id)arg10 audioEncoderPresetName:(id)arg11 metadataVersion:(long long)arg12 customOptions:(id)arg13;	// IMP=0x00000000000247d8

@end

