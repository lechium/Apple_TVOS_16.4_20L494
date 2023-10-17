//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface ADPeerInfo : NSObject
{
    _Bool _deviceOwnedByCurrentUser;	// 8 = 0x8
    NSString *_idsIdentifier;	// 16 = 0x10
    NSString *_productType;	// 24 = 0x18
    NSString *_buildVersion;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSString *_idsDeviceUniqueIdentifier;	// 48 = 0x30
    NSString *_assistantIdentifier;	// 56 = 0x38
    NSString *_idsFirstRoutableDestination;	// 64 = 0x40
    NSArray *_airPlayRouteIdentifiers;	// 72 = 0x48
    NSString *_rapportEffectiveIdentifier;	// 80 = 0x50
    NSString *_homeKitAccessoryIdentifier;	// 88 = 0x58
    NSString *_mediaSystemIdentifier;	// 96 = 0x60
    NSString *_roomName;	// 104 = 0x68
    unsigned long long _preferredMessagingOptionsForCommands;	// 112 = 0x70
    NSString *_userInterfaceIdiom;	// 120 = 0x78
    NSString *_aceVersion;	// 128 = 0x80
}

+ (void)updateSharedInfoWithIdentifier:(id)arg1 productType:(id)arg2 buildVersion:(id)arg3;	// IMP=0x00200000002b4177
+ (id)locallyPairedPeerInfo;	// IMP=0x00100000002b37e0
+ (id)_queue;	// IMP=0x00100000002b3753
- (void).cxx_destruct;	// IMP=0x00200000002b456d
@property(copy, nonatomic) NSString *aceVersion; // @synthesize aceVersion=_aceVersion;
@property(copy, nonatomic) NSString *userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(nonatomic) unsigned long long preferredMessagingOptionsForCommands; // @synthesize preferredMessagingOptionsForCommands=_preferredMessagingOptionsForCommands;
@property(copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(copy, nonatomic) NSString *mediaSystemIdentifier; // @synthesize mediaSystemIdentifier=_mediaSystemIdentifier;
@property(copy, nonatomic) NSString *homeKitAccessoryIdentifier; // @synthesize homeKitAccessoryIdentifier=_homeKitAccessoryIdentifier;
@property(copy, nonatomic) NSString *rapportEffectiveIdentifier; // @synthesize rapportEffectiveIdentifier=_rapportEffectiveIdentifier;
@property(copy, nonatomic) NSArray *airPlayRouteIdentifiers; // @synthesize airPlayRouteIdentifiers=_airPlayRouteIdentifiers;
@property(copy, nonatomic) NSString *idsFirstRoutableDestination; // @synthesize idsFirstRoutableDestination=_idsFirstRoutableDestination;
@property(copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property(nonatomic, getter=isDeviceOwnedByCurrentUser) _Bool deviceOwnedByCurrentUser; // @synthesize deviceOwnedByCurrentUser=_deviceOwnedByCurrentUser;
@property(copy, nonatomic) NSString *idsDeviceUniqueIdentifier; // @synthesize idsDeviceUniqueIdentifier=_idsDeviceUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002b42b7
- (unsigned long long)hash;	// IMP=0x00100000002b42a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002b4296
- (id)afPeerInfo;	// IMP=0x00100000002b3f67
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)description;	// IMP=0x00100000002b3e50
- (id)initWithAFPeerInfo:(id)arg1;	// IMP=0x00100000002b3ac6
- (id)initWithUniqueIdentifer:(id)arg1;	// IMP=0x00100000002b3a59
- (id)initWithIDSIdentifer:(id)arg1;	// IMP=0x00100000002b3a3f
- (id)initWithIDSIdentifer:(id)arg1 productType:(id)arg2 buildVersion:(id)arg3 name:(id)arg4;	// IMP=0x00100000002b392e

@end

