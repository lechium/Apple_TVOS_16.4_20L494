//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCSessionPresentationInfo : NSObject
{
    unsigned int _displayID;	// 8 = 0x8
    struct CGSize _displaySize;	// 16 = 0x10
    struct CGRect _appWindowRect;	// 32 = 0x20
    unsigned int _uiLayout;	// 64 = 0x40
    unsigned char _uiState;	// 68 = 0x44
    _Bool _hasPendingChanges;	// 69 = 0x45
    struct tagVCSpatialAudioMetadataGlobalInfo _metadataGlobalInfo;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000003c9024
+ (unsigned int)metadataSateWithUIState:(unsigned char)arg1;	// IMP=0x00100000003c8a62
+ (unsigned char)avcUIStateWithUIState:(unsigned char)arg1;	// IMP=0x00100000003c8a43
+ (unsigned char)uiStateWithAVCUIState:(unsigned char)arg1;	// IMP=0x00100000003c8a24
+ (unsigned int)avcLayoutWithLayout:(unsigned int)arg1;	// IMP=0x00100000003c8a1c
+ (unsigned int)layoutWithAVCLayout:(unsigned int)arg1;	// IMP=0x00100000003c8a14
@property(readonly, nonatomic) unsigned char uiState; // @synthesize uiState=_uiState;
@property(readonly, nonatomic) _Bool hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003c9144
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003c902c
@property(readonly, nonatomic) const struct tagVCSpatialAudioMetadataGlobalInfo *metadataGlobalInfo;
@property(nonatomic) struct tagAVCSessionPresentationInfo avcSessionPresentationInfo;
- (void)unserialize:(id)arg1;	// IMP=0x00000000003c8b32
- (id)serialize;	// IMP=0x00000000003c8a70
- (void)setDisplayID:(unsigned int)arg1;	// IMP=0x00000000003c8999
- (id)description;	// IMP=0x00000000003c8954
- (id)init;	// IMP=0x00000000003c88d8

@end

