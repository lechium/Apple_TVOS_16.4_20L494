//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BMMultiStreamTimestampClockVector : NSObject
{
    NSMutableDictionary *_vectorClock;	// 8 = 0x8
}

+ (id)deserialize:(id)arg1 error:(id *)arg2;	// IMP=0x002000000000f2a4
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000f0f1
- (void).cxx_destruct;	// IMP=0x002000000000f31a
- (id)serialize:(id *)arg1;	// IMP=0x001000000000f280
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000f11c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000f0f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000edcc
- (unsigned long long)hash;	// IMP=0x001000000000ebb0
- (id)description;	// IMP=0x001000000000eb3d
- (id)allKeys;	// IMP=0x001000000000eb27
- (id)timestampClockVectorForStreamIdentifier:(id)arg1;	// IMP=0x001000000000eaf5
- (void)setVectorClockTo:(id)arg1 forStreamIdentifier:(id)arg2;	// IMP=0x001000000000ead3
- (id)init;	// IMP=0x001000000000ea7d

@end

