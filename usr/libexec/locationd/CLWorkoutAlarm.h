//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLWorkoutAlarm : NSObject
{
    _Bool _eligibleForDataCollection;	// 8 = 0x8
    long long _eventType;	// 16 = 0x10
}

@property(nonatomic) _Bool eligibleForDataCollection; // @synthesize eligibleForDataCollection=_eligibleForDataCollection;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
- (id)initWithType:(long long)arg1 dataCollection:(_Bool)arg2;	// IMP=0x00100000006916d8

@end

