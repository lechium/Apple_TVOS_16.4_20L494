//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface SHSignatureMetrics : NSObject
{
    long long _audioRecordingSource;	// 8 = 0x8
    NSDate *_sessionStartDate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000b267
- (void).cxx_destruct;	// IMP=0x000000000000b5ac
@property(readonly, nonatomic) NSDate *sessionStartDate; // @synthesize sessionStartDate=_sessionStartDate;
@property(nonatomic) long long audioRecordingSource; // @synthesize audioRecordingSource=_audioRecordingSource;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b4da
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b43d
@property(readonly, nonatomic) double sessionDuration;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b2da
- (id)initWithSessionStartDate:(id)arg1;	// IMP=0x000000000000b26f

@end
