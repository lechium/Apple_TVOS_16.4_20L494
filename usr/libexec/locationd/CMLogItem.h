//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMLogItem : NSObject
{
    id _internalLogItem;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000c4d84
@property(readonly, nonatomic) double timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c4e2a
- (void)dealloc;	// IMP=0x00100000000c4def
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000c4dc7
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000c4d8c
- (id)initWithTimestamp:(double)arg1;	// IMP=0x00100000000c4d1e

@end

