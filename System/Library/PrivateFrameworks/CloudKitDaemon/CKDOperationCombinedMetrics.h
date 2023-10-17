//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDOperationMetrics;

@interface CKDOperationCombinedMetrics : NSObject
{
    CKDOperationMetrics *_cloudKitMetrics;	// 8 = 0x8
    CKDOperationMetrics *_MMCSMetrics;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000032c16e
- (void).cxx_destruct;	// IMP=0x000000000032c57b
@property(readonly, copy, nonatomic) CKDOperationMetrics *MMCSMetrics; // @synthesize MMCSMetrics=_MMCSMetrics;
@property(readonly, copy, nonatomic) CKDOperationMetrics *cloudKitMetrics; // @synthesize cloudKitMetrics=_cloudKitMetrics;
- (id)description;	// IMP=0x000000000032c555
- (id)CKPropertiesDescription;	// IMP=0x000000000032c3c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000032c30d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000032c233
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000032c176
- (id)initWithCloudKitMetrics:(id)arg1 andMMCSMetrics:(id)arg2;	// IMP=0x000000000032c0a6

@end

