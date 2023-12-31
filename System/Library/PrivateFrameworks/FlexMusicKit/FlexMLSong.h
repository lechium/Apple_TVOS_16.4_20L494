//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface FlexMLSong
{
    NSString *_rootPath;	// 8 = 0x8
    NSString *_metadataPath;	// 16 = 0x10
    NSString *_audioFileExtension;	// 24 = 0x18
    CDStruct_1b6d18a9 _cachedNaturalDuration;	// 32 = 0x20
}

+ (id)loadSongAtPath:(id)arg1;	// IMP=0x0060000000009b07
- (void).cxx_destruct;	// IMP=0x000000000000f0a2
@property(nonatomic) CDStruct_1b6d18a9 cachedNaturalDuration; // @synthesize cachedNaturalDuration=_cachedNaturalDuration;
@property(retain, nonatomic) NSString *audioFileExtension; // @synthesize audioFileExtension=_audioFileExtension;
@property(readonly, nonatomic) NSString *metadataPath; // @synthesize metadataPath=_metadataPath;
@property(readonly, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
- (CDStruct_1b6d18a9)minimumDuration;	// IMP=0x000000000000ef6f
@property(readonly, nonatomic) NSURL *audioFileURL;
- (CDStruct_1b6d18a9)naturalDuration;	// IMP=0x000000000000e78f
- (id)idealDurations;	// IMP=0x000000000000e73f
- (_Bool)verifyRendition:(id)arg1 forDuration:(CDStruct_1b6d18a9)arg2 failureReason:(id *)arg3;	// IMP=0x000000000000d35d
- (id)timedMetadataItemsWithIdentifier:(id)arg1 forRendition:(id)arg2;	// IMP=0x000000000000a733
- (id)renditionForDuration:(CDStruct_1b6d18a9)arg1 withOptions:(id)arg2 testingContext:(id)arg3;	// IMP=0x000000000000a5cd
- (id)_summaryManager;	// IMP=0x000000000000a4c9
- (_Bool)isLoaded;	// IMP=0x000000000000a4c1
- (_Bool)canPlay;	// IMP=0x000000000000a4b9
- (void)updateAssets:(id)arg1;	// IMP=0x000000000000a48a
- (void)_setupInitialAssets:(id)arg1;	// IMP=0x000000000000a478
- (id)initWithFileAtPath:(id)arg1;	// IMP=0x0000000000009b54

@end

