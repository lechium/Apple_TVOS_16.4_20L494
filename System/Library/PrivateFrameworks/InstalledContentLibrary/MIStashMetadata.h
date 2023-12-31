//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface MIStashMetadata : NSObject
{
    NSDate *_dateStashed;	// 8 = 0x8
    NSDate *_dateOriginallyInstalled;	// 16 = 0x10
}

+ (id)metadataFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000015574
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001507a
- (void).cxx_destruct;	// IMP=0x0000000000015b7a
@property(retain, nonatomic) NSDate *dateOriginallyInstalled; // @synthesize dateOriginallyInstalled=_dateOriginallyInstalled;
@property(retain, nonatomic) NSDate *dateStashed; // @synthesize dateStashed=_dateStashed;
- (_Bool)serializeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000158d8
- (id)description;	// IMP=0x00000000000154ab
- (unsigned long long)hash;	// IMP=0x000000000001541e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000152e5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000015237
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001514b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015082

@end

