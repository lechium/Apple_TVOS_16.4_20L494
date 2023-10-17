//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBSExternalControlFeature, PBSExternalControlSystem;

@interface PBVolumeControlService : NSObject
{
    PBSExternalControlSystem *_controlSystem;	// 8 = 0x8
    PBSExternalControlFeature *_volumeFeature;	// 16 = 0x10
    PBSExternalControlFeature *_muteFeature;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000087f69
@property(retain, nonatomic) PBSExternalControlFeature *muteFeature; // @synthesize muteFeature=_muteFeature;
@property(retain, nonatomic) PBSExternalControlFeature *volumeFeature; // @synthesize volumeFeature=_volumeFeature;
@property(retain, nonatomic) PBSExternalControlSystem *controlSystem; // @synthesize controlSystem=_controlSystem;
- (float)_absoluteVolumeLevelWithStep:(id)arg1;	// IMP=0x0010000000087d25
- (void)setIsMuted:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000087b56
- (void)adjustRelativeVolumeLevel:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000877f3
- (void)setAbsoluteVolumeLevel:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008769f
- (id)absoluteVolumeLevel;	// IMP=0x00100000000875a6
- (id)volumeControlCapabilities;	// IMP=0x0010000000087231
- (id)init;	// IMP=0x0010000000087162

@end
