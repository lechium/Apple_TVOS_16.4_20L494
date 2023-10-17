//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMusicPlayerPlayParametersQueueDescriptor, MusicKit_SoftLinking_MPMusicPlayerPlayParameters, NSString;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPMusicPlayerPlayParametersQueueDescriptor : NSObject
{
    MPMusicPlayerPlayParametersQueueDescriptor *_underlyingQueueDescriptor;	// 8 = 0x8
    NSString *_playActivityFeatureName;	// 16 = 0x10
    MusicKit_SoftLinking_MPMusicPlayerPlayParameters *_startItemPlayParameters;	// 24 = 0x18
    MusicKit_SoftLinking_MPMusicPlayerPlayParameters *_containerPlayParameters;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000004662
@property(retain, nonatomic) MusicKit_SoftLinking_MPMusicPlayerPlayParameters *containerPlayParameters; // @synthesize containerPlayParameters=_containerPlayParameters;
@property(retain, nonatomic) MusicKit_SoftLinking_MPMusicPlayerPlayParameters *startItemPlayParameters; // @synthesize startItemPlayParameters=_startItemPlayParameters;
@property(copy, nonatomic) NSString *playActivityFeatureName; // @synthesize playActivityFeatureName=_playActivityFeatureName;
- (void)setEndTime:(double)arg1 forItemWithPlayParameters:(id)arg2;	// IMP=0x00000000000045ea
- (void)setStartTime:(double)arg1 forItemWithPlayParameters:(id)arg2;	// IMP=0x0000000000004590
@property(readonly, nonatomic) MPMusicPlayerPlayParametersQueueDescriptor *_underlyingQueueDescriptor;
- (id)initWithPlayParametersQueue:(id)arg1;	// IMP=0x0000000000004128

@end

