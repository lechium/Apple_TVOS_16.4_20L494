//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSAESSIVKey, CKKSWrappedAESSIVKey, CKRecordZoneID, NSString;
@protocol SecCKKSKeyClass;

@interface CKKSKeychainBackedKey : NSObject
{
    NSString *_uuid;	// 8 = 0x8
    NSString *_parentKeyUUID;	// 16 = 0x10
    NSString<SecCKKSKeyClass> *_keyclass;	// 24 = 0x18
    CKRecordZoneID *_zoneID;	// 32 = 0x20
    CKKSWrappedAESSIVKey *_wrappedkey;	// 40 = 0x28
    CKKSAESSIVKey *_aessivkey;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001bfe95
+ (id)loadFromProtobuf:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bfba0
+ (id)fetchKeyMaterialItemFromKeychain:(id)arg1 resave:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x00100000001bebde
+ (id)queryKeyMaterialInKeychain:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bea87
+ (id)setKeyMaterialInKeychain:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001be699
+ (id)key:(id)arg1 wrappedByKey:(id)arg2 uuid:(id)arg3 parentKeyUUID:(id)arg4 keyclass:(id)arg5 zoneID:(id)arg6 error:(id *)arg7;	// IMP=0x00100000001be4c8
+ (id)keyWrappedBySelf:(id)arg1 uuid:(id)arg2 keyclass:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x00100000001be498
+ (id)randomKeyWrappedBySelf:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001be39c
+ (id)randomKeyWrappedByParent:(id)arg1 keyclass:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001be1fd
+ (id)randomKeyWrappedByParent:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001be171
- (void).cxx_destruct;	// IMP=0x00200000001be11d
@property(retain) CKKSAESSIVKey *aessivkey; // @synthesize aessivkey=_aessivkey;
@property(retain) CKKSWrappedAESSIVKey *wrappedkey; // @synthesize wrappedkey=_wrappedkey;
@property(retain) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain) NSString<SecCKKSKeyClass> *keyclass; // @synthesize keyclass=_keyclass;
@property(retain) NSString *parentKeyUUID; // @synthesize parentKeyUUID=_parentKeyUUID;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001bded7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001bdd8b
- (id)serializeAsProtobuf:(id *)arg1;	// IMP=0x00100000001bdbb3
- (id)description;	// IMP=0x00100000001bdaa4
- (_Bool)deleteKeyMaterialFromKeychain:(id *)arg1;	// IMP=0x00100000001bd749
- (_Bool)loadKeyMaterialFromKeychain:(id *)arg1;	// IMP=0x00100000001bd379
- (_Bool)saveKeyMaterialToKeychain:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000001bca9f
- (_Bool)saveKeyMaterialToKeychain:(id *)arg1;	// IMP=0x00100000001bca85
- (id)decryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001bc9e3
- (id)encryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001bc941
- (id)unwrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bc8b5
- (id)wrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bc829
- (_Bool)trySelfWrappedKeyCandidate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bc657
- (id)ensureKeyLoadedFromKeychain:(id *)arg1;	// IMP=0x00100000001bc5de
- (_Bool)unwrapSelfWithAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bc549
- (_Bool)wrapUnder:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bc39b
- (_Bool)wrapsSelf;	// IMP=0x00100000001bc327
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001bc061
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001bbf25
- (id)initWithAESKey:(id)arg1 wrappedAESKey:(id)arg2 uuid:(id)arg3 parentKeyUUID:(id)arg4 keyclass:(id)arg5 zoneID:(id)arg6;	// IMP=0x00100000001bbe0a
- (id)initWithWrappedAESKey:(id)arg1 uuid:(id)arg2 parentKeyUUID:(id)arg3 keyclass:(id)arg4 zoneID:(id)arg5;	// IMP=0x00100000001bbde1

@end

