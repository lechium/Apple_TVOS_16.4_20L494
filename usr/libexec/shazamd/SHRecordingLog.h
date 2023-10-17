//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SHRecordingLog : NSObject
{
    NSDate *_startedRecordingDate;	// 8 = 0x8
    NSDate *_endedRecordingDate;	// 16 = 0x10
    long long _assistantTapCount;	// 24 = 0x18
    long long _totalTapCount;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
}

+ (void)powerlogCallingProcessBundleID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x00400000000251e8
- (void).cxx_destruct;	// IMP=0x0020000000025220
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) long long totalTapCount; // @synthesize totalTapCount=_totalTapCount;
@property(readonly, nonatomic) long long assistantTapCount; // @synthesize assistantTapCount=_assistantTapCount;
@property(readonly, nonatomic) NSDate *endedRecordingDate; // @synthesize endedRecordingDate=_endedRecordingDate;
- (id);	// IMP=0x00100000000251ee
- (void)detachedTapForClient:(long long)arg1;	// IMP=0x00100000000250cb
- (void)attachedTapForClient:(long long)arg1;	// IMP=0x0010000000025041
- (id)initWithBundleID:(id)arg1;	// IMP=0x0010000000024fd6

// Remaining properties
@property(readonly, nonatomic) NSDate *startedRecordingDate; // @synthesize startedRecordingDate=_startedRecordingDate;

@end

