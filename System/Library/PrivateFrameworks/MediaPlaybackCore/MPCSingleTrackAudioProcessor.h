//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine;
@protocol MPCSingleTrackAudioProcessing;

__attribute__((visibility("hidden")))
@interface MPCSingleTrackAudioProcessor : NSObject
{
    struct opaqueMTAudioProcessingTap *_audioProcessingTap;	// 8 = 0x8
    id <MPCSingleTrackAudioProcessing> _selfRef;	// 16 = 0x10
    MPCPlaybackEngine *_playbackEngine;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000031f8f9
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(retain, nonatomic) id <MPCSingleTrackAudioProcessing> selfRef; // @synthesize selfRef=_selfRef;
- (void)_destroyAudioTap;	// IMP=0x000000000031f8a2
- (void)_createAudioTap;	// IMP=0x000000000031f586
- (void)recreateAudioTap;	// IMP=0x000000000031f558
- (void)finalizeTap:(struct opaqueMTAudioProcessingTap *)arg1;	// IMP=0x000000000031f544
- (void)processTap:(struct opaqueMTAudioProcessingTap *)arg1 sampleIndex:(long long)arg2 numberFrames:(long long)arg3 flags:(unsigned int)arg4 audioBufferList:(struct AudioBufferList *)arg5 numberFramesOut:(long long *)arg6 flagsOut:(unsigned int *)arg7;	// IMP=0x000000000031f53e
- (void)unprepareTap:(struct opaqueMTAudioProcessingTap *)arg1;	// IMP=0x000000000031f538
- (void)prepareTap:(struct opaqueMTAudioProcessingTap *)arg1 maxFrames:(long long)arg2 processingFormat:(const struct AudioStreamBasicDescription *)arg3;	// IMP=0x000000000031f532
- (unsigned int)creationFlags;	// IMP=0x000000000031f527
- (_Bool)shouldAttachAudioTapToItem:(id)arg1;	// IMP=0x000000000031f51f
- (_Bool)configureQueueItem:(id)arg1;	// IMP=0x000000000031ec8b
- (void)dealloc;	// IMP=0x000000000031ec4d
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x000000000031ebd9

@end

