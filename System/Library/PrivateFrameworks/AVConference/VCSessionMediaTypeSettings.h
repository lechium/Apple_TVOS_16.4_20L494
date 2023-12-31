//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VCSessionMediaTypeSettings
{
    unsigned int _mediaType;	// 24 = 0x18
    unsigned int _mediaState;	// 28 = 0x1c
    NSMutableSet *_streamGroupIDs;	// 32 = 0x20
    unsigned int _remoteMediaState;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002ad7a4
+ (id)serializationClasses;	// IMP=0x00100000002ad648
+ (id)settingsWithMediaType:(unsigned int)arg1;	// IMP=0x00100000002ad502
@property(nonatomic) unsigned int remoteMediaState; // @synthesize remoteMediaState=_remoteMediaState;
@property(nonatomic) unsigned int mediaState; // @synthesize mediaState=_mediaState;
@property(readonly, nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002ad70c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002ad690
- (id)description;	// IMP=0x00000000002ad5f6
@property(readonly, nonatomic) NSSet *streamGroupIDs;
- (void)addStreamGroupID:(unsigned int)arg1;	// IMP=0x00000000002ad536
- (void)dealloc;	// IMP=0x00000000002ad49d
- (id)initWithMediaType:(unsigned int)arg1;	// IMP=0x00000000002ad279

@end

