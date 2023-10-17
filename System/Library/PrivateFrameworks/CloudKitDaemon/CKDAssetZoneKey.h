//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordZoneID;

@interface CKDAssetZoneKey : NSObject
{
    CKRecordZoneID *_destinationZoneID;	// 8 = 0x8
    CKRecordZoneID *_sourceZoneID;	// 16 = 0x10
    long long _sourceDatabaseScope;	// 24 = 0x18
    long long _destinationDatabaseScope;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000dad2d
@property(nonatomic) long long destinationDatabaseScope; // @synthesize destinationDatabaseScope=_destinationDatabaseScope;
@property(nonatomic) long long sourceDatabaseScope; // @synthesize sourceDatabaseScope=_sourceDatabaseScope;
@property(retain, nonatomic) CKRecordZoneID *sourceZoneID; // @synthesize sourceZoneID=_sourceZoneID;
@property(retain, nonatomic) CKRecordZoneID *destinationZoneID; // @synthesize destinationZoneID=_destinationZoneID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dacc4
- (unsigned long long)hash;	// IMP=0x00000000000dac85
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000daa44
- (id)description;	// IMP=0x00000000000daa32
- (id)CKPropertiesDescription;	// IMP=0x00000000000da7f8
@property(readonly, nonatomic) _Bool isCrossOwner;
- (id)initWithDestinationZoneID:(id)arg1 destinationDatabaseScope:(long long)arg2 sourceZoneID:(id)arg3 sourceDatabaseScope:(long long)arg4;	// IMP=0x00000000000da6aa
- (id)initWithDestinationZoneID:(id)arg1 destinationDatabaseScope:(long long)arg2;	// IMP=0x00000000000da692

@end

