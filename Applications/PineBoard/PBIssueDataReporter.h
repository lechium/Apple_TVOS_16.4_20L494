//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PBIssueDataReporter : NSObject
{
}

- (void)_uploadSysdiagnoseAtPath:(id)arg1 toURL:(id)arg2 deleteAfterUpload:(_Bool)arg3;	// IMP=0x0040000000134281
- (id)_latestSysdiagnoseFilePath;	// IMP=0x0010000000133823
- (void)reportIssueDataAtPath:(id)arg1;	// IMP=0x00100000001333aa
- (void)_reportLatestIssueDataWithRemainingAttempts:(long long)arg1;	// IMP=0x001000000013323d
- (void)reportLatestIssueData;	// IMP=0x0010000000133225

@end

