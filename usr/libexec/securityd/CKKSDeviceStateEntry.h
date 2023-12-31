//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSDate, NSString, OTCliqueStatusWrapper;
@protocol OctagonStateString;

@interface CKKSDeviceStateEntry
{
    int _circleStatus;	// 8 = 0x8
    NSString *_device;	// 16 = 0x10
    NSString *_osVersion;	// 24 = 0x18
    NSDate *_lastUnlockTime;	// 32 = 0x20
    NSString *_circlePeerID;	// 40 = 0x28
    NSString *_octagonPeerID;	// 48 = 0x30
    OTCliqueStatusWrapper *_octagonStatus;	// 56 = 0x38
    NSString<OctagonStateString> *_keyState;	// 64 = 0x40
    NSString *_currentTLKUUID;	// 72 = 0x48
    NSString *_currentClassAUUID;	// 80 = 0x50
    NSString *_currentClassCUUID;	// 88 = 0x58
}

+ (_Bool)intransactionRecordDeleted:(id)arg1 contextID:(id)arg2 resync:(_Bool)arg3 error:(id *)arg4;	// IMP=0x004000000015dd74
+ (_Bool)intransactionRecordChanged:(id)arg1 contextID:(id)arg2 resync:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000015d768
+ (id)intransactionCreateDeviceStateForView:(id)arg1 accountTracker:(id)arg2 lockStateTracker:(id)arg3 error:(id *)arg4;	// IMP=0x001000000015c11a
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x001000000015bb1f
+ (id)sqlColumns;	// IMP=0x001000000015bb12
+ (id)sqlTable;	// IMP=0x001000000015bb05
+ (id)allInZone:(id)arg1 error:(id *)arg2;	// IMP=0x001000000015b9f3
+ (id)tryFromDatabaseFromCKRecordID:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000015b7c5
+ (id)tryFromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000015b5ab
+ (id)fromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000015b391
+ (id)nameFromCKRecordID:(id)arg1;	// IMP=0x001000000015b30f
- (void).cxx_destruct;	// IMP=0x002000000015b256
@property(retain) NSString *currentClassCUUID; // @synthesize currentClassCUUID=_currentClassCUUID;
@property(retain) NSString *currentClassAUUID; // @synthesize currentClassAUUID=_currentClassAUUID;
@property(retain) NSString *currentTLKUUID; // @synthesize currentTLKUUID=_currentTLKUUID;
@property(retain) NSString<OctagonStateString> *keyState; // @synthesize keyState=_keyState;
@property(retain) OTCliqueStatusWrapper *octagonStatus; // @synthesize octagonStatus=_octagonStatus;
@property int circleStatus; // @synthesize circleStatus=_circleStatus;
@property(retain) NSString *octagonPeerID; // @synthesize octagonPeerID=_octagonPeerID;
@property(retain) NSString *circlePeerID; // @synthesize circlePeerID=_circlePeerID;
@property(retain) NSDate *lastUnlockTime; // @synthesize lastUnlockTime=_lastUnlockTime;
@property(retain) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain) NSString *device; // @synthesize device=_device;
- (id)sqlValues;	// IMP=0x001000000015a94f
- (id)whereClauseToFindSelf;	// IMP=0x001000000015a81e
- (void)setFromCKRecord:(id)arg1;	// IMP=0x001000000015a327
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x0010000000159b3b
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000001592e7
- (id)CKRecordName;	// IMP=0x001000000015927b
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000015865a
- (id)description;	// IMP=0x0010000000158334
- (id)cktypeToOTCliqueStatusWrapper:(id)arg1;	// IMP=0x0010000000158161
- (id)cliqueStatusToCKType:(id)arg1;	// IMP=0x00100000001580d5
- (int)cktypeToSOSCCStatus:(id)arg1;	// IMP=0x0010000000157fd0
- (MISSING_TYPE *)sosCCStatusToCKType: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000157f9c
- (id)initForDevice:(id)arg1 contextID:(id)arg2 osVersion:(id)arg3 lastUnlockTime:(id)arg4 octagonPeerID:(id)arg5 octagonStatus:(id)arg6 circlePeerID:(id)arg7 circleStatus:(int)arg8 keyState:(id)arg9 currentTLKUUID:(id)arg10 currentClassAUUID:(id)arg11 currentClassCUUID:(id)arg12 zoneID:(id)arg13 encodedCKRecord:(id)arg14;	// IMP=0x0010000000157d93

@end

