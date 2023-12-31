//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPDataCollection : NSObject
{
}

+ (void)reportMetric:(const struct __CFString *)arg1 withValue:(unsigned long long)arg2;	// IMP=0x004000000003d8a3
+ (unsigned long long)truncate:(unsigned long long)arg1;	// IMP=0x001000000003d819
+ (id)sharedDataCollection;	// IMP=0x001000000003d7c4
- (void)reportBackgroundAnalysisProgressMetrics:(id)arg1;	// IMP=0x004000000003efed
- (void)reportDailyBackgroundAnalysisMetrics:(id)arg1 withNormalizeRatio:(double)arg2;	// IMP=0x001000000003e171
- (void)reportDatabaseCorruption;	// IMP=0x001000000003e14c
- (void)reportDatabaseSizeBytes:(unsigned long long)arg1;	// IMP=0x001000000003e129
- (void)reportBlacklistedAssetCount:(unsigned long long)arg1;	// IMP=0x001000000003e106
- (void)reportLivePhotoStatistics:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x001000000003dc58
- (void)reportMovieStatistics:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x001000000003dc3d
- (void)reportPhotoStatistics:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x001000000003dc22
- (void)reportStatistics:(id)arg1 forMediaType:(long long)arg2 forPhotoLibrary:(id)arg3;	// IMP=0x001000000003d8a9

@end

