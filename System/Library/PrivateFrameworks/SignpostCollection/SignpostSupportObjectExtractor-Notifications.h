//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SignpostSupport/SignpostSupportObjectExtractor.h>

@interface SignpostSupportObjectExtractor (Notifications)
- (_Bool)processNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)arg1 shouldCalculateAnimationFramerate:(_Bool)arg2 targetQueue:(id)arg3 errorOut:(id *)arg4;	// IMP=0x003000000000211d
- (void)_processStreamedOSLogEventProxy:(id)arg1 shouldCalculateFramerate:(_Bool)arg2;	// IMP=0x0030000000001b95
- (_Bool)processNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)arg1 errorOut:(id *)arg2;	// IMP=0x0030000000001b78
- (_Bool)processLogArchiveWithPath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 errorOut:(id *)arg4;	// IMP=0x0030000000002b3f
- (_Bool)_processLogEventStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 errorOut:(id *)arg4;	// IMP=0x0030000000006d29
- (void)_processOSLogEventProxy:(id)arg1;	// IMP=0x0030000000006825
- (_Bool)processTraceFileWithPath:(id)arg1 errorOut:(id *)arg2;	// IMP=0x0030000000007587

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType timedOutBeginEventProcessingBlock;
@end

