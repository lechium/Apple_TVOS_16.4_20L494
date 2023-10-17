//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSUUID;

@interface ESADefaultOperationLoggingContext : NSObject
{
    int _currentPID;	// 8 = 0x8
    NSDate *_currentTime;	// 16 = 0x10
    NSUUID *_currentBootId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000057b19
@property(nonatomic) int currentPID; // @synthesize currentPID=_currentPID;
@property(retain, nonatomic) NSUUID *currentBootId; // @synthesize currentBootId=_currentBootId;
@property(retain, nonatomic) NSDate *currentTime; // @synthesize currentTime=_currentTime;
@property(readonly) double operationTimeoutInterval;
@property(readonly) double activityRecordRetentionInterval;
@property(readonly) unsigned long long operationRecordRetentionMaxCount;
- (id)init;	// IMP=0x0010000000057a0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

