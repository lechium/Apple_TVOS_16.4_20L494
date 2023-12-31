//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADDeviceSyncCommandPullDeltaRequest : NSObject
{
    NSString *_dataType;	// 8 = 0x8
    unsigned long long _generation;	// 16 = 0x10
    unsigned long long _limit;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002b94a7
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b90da
- (void).cxx_destruct;	// IMP=0x00100000002b96c7
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(readonly, copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002b95d0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002b94af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002b949c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002b93b0
- (unsigned long long)hash;	// IMP=0x00100000002b92fd
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000002b926b
- (id)description;	// IMP=0x00100000002b9257
- (id)initWithDataType:(id)arg1 generation:(unsigned long long)arg2 limit:(unsigned long long)arg3;	// IMP=0x00100000002b913b
- (id)init;	// IMP=0x00100000002b9127
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b8fc5
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b982d

@end

