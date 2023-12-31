//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CSAudioFileReaderDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CSAudioFileReader : NSObject
{
    struct OpaqueExtAudioFile *_fFile;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_audioFeedTimer;	// 24 = 0x18
    double _bufferDuration;	// 32 = 0x20
    struct AudioStreamBasicDescription _outASBD;	// 40 = 0x28
    id <CSAudioFileReaderDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000007c931
@property(nonatomic) __weak id <CSAudioFileReaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)close;	// IMP=0x001000000007c8f5
- (id)readSamplesFromChannelIdx:(unsigned int)arg1;	// IMP=0x001000000007c8ed
- (void)dealloc;	// IMP=0x001000000007c8af
- (void)stopRecording;	// IMP=0x001000000007c74b
- (void)_readAudioBufferAndFeed;	// IMP=0x001000000007c530
- (_Bool)startRecording;	// IMP=0x001000000007c28e
- (_Bool)prepareRecording:(id)arg1;	// IMP=0x001000000007bee3
- (_Bool)setRecordBufferDuration:(double)arg1;	// IMP=0x001000000007bed6
- (id)initWithURL:(id)arg1;	// IMP=0x001000000007be01

@end

