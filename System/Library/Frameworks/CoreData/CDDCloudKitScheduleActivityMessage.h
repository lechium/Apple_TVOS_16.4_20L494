//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CDDCloudKitScheduleActivityMessage
{
    unsigned long long _activityType;	// 8 = 0x8
    NSString *_storePath;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000aa397
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000aa462
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000aa39f
- (void)dealloc;	// IMP=0x00000000000aa355

@end

