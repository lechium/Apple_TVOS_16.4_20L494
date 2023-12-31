//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface FMFMapCacheImage : NSObject
{
    long long _count;	// 8 = 0x8
    NSString *_path;	// 16 = 0x10
    NSDate *_timestamp;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000003333
- (void).cxx_destruct;	// IMP=0x0000000000003440
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) long long count; // @synthesize count=_count;
- (id)description;	// IMP=0x000000000000333b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000032ae
- (void)boostPriority;	// IMP=0x0000000000003240
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000030e4
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000003047

@end

