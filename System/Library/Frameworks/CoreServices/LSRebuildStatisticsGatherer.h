//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface LSRebuildStatisticsGatherer : NSObject
{
    unsigned long long _totalRebuildTime;	// 8 = 0x8
    unsigned long long _systemContentScanTime;	// 16 = 0x10
    unsigned long long _systemContentSaveTime;	// 24 = 0x18
    unsigned long long _cryptexContentScanTime;	// 32 = 0x20
    unsigned long long _containerizedContentScanTime;	// 40 = 0x28
    unsigned long long _numPlugins;	// 48 = 0x30
    unsigned long long _numApplications;	// 56 = 0x38
    _Bool _onlyCryptexContent;	// 64 = 0x40
    _Bool _migratorRunning;	// 65 = 0x41
    _Bool _userRequested;	// 66 = 0x42
    unsigned short _rebuildReasonFlags;	// 68 = 0x44
    NSError *_rebuildError;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000e5aab
- (id)init;	// IMP=0x00000000000e4fee

@end

