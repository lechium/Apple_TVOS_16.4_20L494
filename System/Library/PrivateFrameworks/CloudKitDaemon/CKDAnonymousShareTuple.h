//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, CKRecordZoneID, NSString;

@interface CKDAnonymousShareTuple : NSObject
{
    CKRecordZoneID *_zoneID;	// 8 = 0x8
    CKRecordID *_shareID;	// 16 = 0x10
    NSString *_ckAnonymousShareHashIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001dd25e
- (void).cxx_destruct;	// IMP=0x00000000001dd5a7
@property(copy) NSString *ckAnonymousShareHashIdentifier; // @synthesize ckAnonymousShareHashIdentifier=_ckAnonymousShareHashIdentifier;
@property(readonly, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;
@property(readonly, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001dd459
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001dd349
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001dd266
- (id)initWithZoneID:(id)arg1 shareID:(id)arg2;	// IMP=0x00000000001dd1a5

@end

