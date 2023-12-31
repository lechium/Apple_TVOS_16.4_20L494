//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;
@protocol HMBLocalZoneID;

__attribute__((visibility("hidden")))
@interface HMBLocalSQLContextRowZone : HMFObject
{
    id <HMBLocalZoneID> _identifier;	// 8 = 0x8
    unsigned long long _zoneRow;	// 16 = 0x10
    NSUUID *_replication;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000032c94
@property(retain, nonatomic) NSUUID *replication; // @synthesize replication=_replication;
@property(nonatomic) unsigned long long zoneRow; // @synthesize zoneRow=_zoneRow;
@property(retain, nonatomic) id <HMBLocalZoneID> identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000032b7c
- (id)debugDescription;	// IMP=0x0000000000032ad0
- (id)initWithZoneRow:(unsigned long long)arg1 name:(id)arg2 token:(id)arg3;	// IMP=0x0000000000032a10
- (id)initWithZoneRow:(unsigned long long)arg1;	// IMP=0x00000000000329cc
- (id)init;	// IMP=0x000000000003299d

@end

