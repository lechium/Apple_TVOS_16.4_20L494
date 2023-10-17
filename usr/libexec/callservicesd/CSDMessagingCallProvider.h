//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSMutableArray, NSOrderedSet, NSSet, NSString, TUCallProvider;

@interface CSDMessagingCallProvider : PBCodable
{
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _protoSupportedHandleTypes;	// 8 = 0x8
    NSString *_bundleURLString;	// 32 = 0x20
    NSMutableArray *_emergencyHandles;	// 40 = 0x28
    NSMutableArray *_emergencyLabeledHandles;	// 48 = 0x30
    NSMutableArray *_handoffIdentifiers;	// 56 = 0x38
    NSString *_identifier;	// 64 = 0x40
    NSString *_localizedName;	// 72 = 0x48
    unsigned int _maximumCallGroups;	// 80 = 0x50
    unsigned int _maximumCallsPerCallGroup;	// 84 = 0x54
    NSString *_originalRingtoneSoundURLString;	// 88 = 0x58
    NSMutableArray *_prioritizedSenderIdentities;	// 96 = 0x60
    NSString *_ringtoneSoundURLString;	// 104 = 0x68
    _Bool _supportsAudioAndVideo;	// 112 = 0x70
    _Bool _supportsAudioOnly;	// 113 = 0x71
    _Bool _supportsEmergency;	// 114 = 0x72
    _Bool _supportsRecents;	// 115 = 0x73
    _Bool _supportsVoicemail;	// 116 = 0x74
    struct {
        unsigned int maximumCallGroups:1;
        unsigned int maximumCallsPerCallGroup:1;
        unsigned int supportsAudioAndVideo:1;
        unsigned int supportsAudioOnly:1;
        unsigned int supportsEmergency:1;
        unsigned int supportsRecents:1;
        unsigned int supportsVoicemail:1;
    } _has;	// 120 = 0x78
}

+ (Class)emergencyHandlesType;	// IMP=0x002000000007a8c4
+ (Class)prioritizedSenderIdentitiesType;	// IMP=0x001000000007a7f2
+ (Class)emergencyLabeledHandlesType;	// IMP=0x001000000007a6d5
+ (Class)handoffIdentifierType;	// IMP=0x001000000007a4d8
- (void).cxx_destruct;	// IMP=0x001000000007da51
@property(retain, nonatomic) NSMutableArray *emergencyHandles; // @synthesize emergencyHandles=_emergencyHandles;
@property(retain, nonatomic) NSMutableArray *prioritizedSenderIdentities; // @synthesize prioritizedSenderIdentities=_prioritizedSenderIdentities;
@property(nonatomic) _Bool supportsRecents; // @synthesize supportsRecents=_supportsRecents;
@property(retain, nonatomic) NSMutableArray *emergencyLabeledHandles; // @synthesize emergencyLabeledHandles=_emergencyLabeledHandles;
@property(retain, nonatomic) NSMutableArray *handoffIdentifiers; // @synthesize handoffIdentifiers=_handoffIdentifiers;
@property(retain, nonatomic) NSString *originalRingtoneSoundURLString; // @synthesize originalRingtoneSoundURLString=_originalRingtoneSoundURLString;
@property(retain, nonatomic) NSString *ringtoneSoundURLString; // @synthesize ringtoneSoundURLString=_ringtoneSoundURLString;
@property(nonatomic) _Bool supportsVoicemail; // @synthesize supportsVoicemail=_supportsVoicemail;
@property(nonatomic) _Bool supportsEmergency; // @synthesize supportsEmergency=_supportsEmergency;
@property(nonatomic) _Bool supportsAudioAndVideo; // @synthesize supportsAudioAndVideo=_supportsAudioAndVideo;
@property(nonatomic) _Bool supportsAudioOnly; // @synthesize supportsAudioOnly=_supportsAudioOnly;
@property(nonatomic) unsigned int maximumCallsPerCallGroup; // @synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup;
@property(nonatomic) unsigned int maximumCallGroups; // @synthesize maximumCallGroups=_maximumCallGroups;
@property(retain, nonatomic) NSString *bundleURLString; // @synthesize bundleURLString=_bundleURLString;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000007d2b6
- (unsigned long long)hash;	// IMP=0x001000000007d07e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007ccb2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007c589
- (void)copyTo:(id)arg1;	// IMP=0x001000000007c13f
- (void)writeTo:(id)arg1;	// IMP=0x001000000007bbd5
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007bbc8
- (id)dictionaryRepresentation;	// IMP=0x001000000007a984
- (id)description;	// IMP=0x001000000007a8d5
- (id)emergencyHandlesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000007a8a7
- (unsigned long long)emergencyHandlesCount;	// IMP=0x001000000007a88a
- (void)addEmergencyHandles:(id)arg1;	// IMP=0x001000000007a820
- (void)clearEmergencyHandles;	// IMP=0x001000000007a803
- (id)prioritizedSenderIdentitiesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000007a7d5
- (unsigned long long)prioritizedSenderIdentitiesCount;	// IMP=0x001000000007a7b8
- (void)addPrioritizedSenderIdentities:(id)arg1;	// IMP=0x001000000007a74e
- (void)clearPrioritizedSenderIdentities;	// IMP=0x001000000007a731
@property(nonatomic) _Bool hasSupportsRecents;
- (id)emergencyLabeledHandlesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000007a6b8
- (unsigned long long)emergencyLabeledHandlesCount;	// IMP=0x001000000007a69b
- (void)addEmergencyLabeledHandles:(id)arg1;	// IMP=0x001000000007a631
- (void)clearEmergencyLabeledHandles;	// IMP=0x001000000007a614
- (void)setProtoSupportedHandleTypes:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000007a5fd
- (unsigned int)protoSupportedHandleTypeAtIndex:(unsigned long long)arg1;	// IMP=0x001000000007a530
- (void)addProtoSupportedHandleType:(unsigned int)arg1;	// IMP=0x001000000007a51d
- (void)clearProtoSupportedHandleTypes;	// IMP=0x001000000007a50c
@property(readonly, nonatomic) unsigned int *protoSupportedHandleTypes;
@property(readonly, nonatomic) unsigned long long protoSupportedHandleTypesCount;
- (id)handoffIdentifierAtIndex:(unsigned long long)arg1;	// IMP=0x001000000007a4bb
- (unsigned long long)handoffIdentifiersCount;	// IMP=0x001000000007a49e
- (void)addHandoffIdentifier:(id)arg1;	// IMP=0x001000000007a434
- (void)clearHandoffIdentifiers;	// IMP=0x001000000007a417
@property(readonly, nonatomic) _Bool hasOriginalRingtoneSoundURLString;
@property(readonly, nonatomic) _Bool hasRingtoneSoundURLString;
@property(nonatomic) _Bool hasSupportsVoicemail;
@property(nonatomic) _Bool hasSupportsEmergency;
@property(nonatomic) _Bool hasSupportsAudioAndVideo;
@property(nonatomic) _Bool hasSupportsAudioOnly;
@property(nonatomic) _Bool hasMaximumCallsPerCallGroup;
@property(nonatomic) _Bool hasMaximumCallGroups;
@property(readonly, nonatomic) _Bool hasBundleURLString;
@property(readonly, nonatomic) _Bool hasLocalizedName;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)dealloc;	// IMP=0x001000000007a1b4
@property(copy, nonatomic, setter=setPrioritizedTUSenderIdentities:) NSOrderedSet *prioritizedTUSenderIdentities;
@property(copy, nonatomic) NSArray *emergencyTULabeledHandles;
@property(copy, nonatomic) NSArray *emergencyTUHandles;
@property(copy, nonatomic) NSSet *supportedHandleTypes;
@property(readonly, copy, nonatomic) TUCallProvider *provider;
- (id)initWithProvider:(id)arg1;	// IMP=0x00100000000a6323

@end

