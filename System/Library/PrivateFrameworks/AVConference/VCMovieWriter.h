//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputMetadataAdaptor, NSString, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCMovieWriter : NSObject
{
    NSString *_transactionID;	// 8 = 0x8
    CDStruct_1b6d18a9 _lastVideoPresentationTime;	// 16 = 0x10
    CDStruct_1b6d18a9 _lastLocalAudioPresentationTime;	// 40 = 0x28
    CDStruct_1b6d18a9 _lastRemoteAudioPresentationTime;	// 64 = 0x40
    CDStruct_1b6d18a9 _startTime;	// 88 = 0x58
    CDStruct_1b6d18a9 _stillImageTime;	// 112 = 0x70
    AVAssetWriter *_assetWriter;	// 136 = 0x88
    AVAssetWriterInput *_videoInput;	// 144 = 0x90
    AVAssetWriterInput *_localAudioInput;	// 152 = 0x98
    AVAssetWriterInput *_remoteAudioInput;	// 160 = 0xa0
    AVAssetWriterInput *_metadataInput;	// 168 = 0xa8
    AVAssetWriterInputMetadataAdaptor *_adapter;	// 176 = 0xb0
    NSURL *_outputURL;	// 184 = 0xb8
    unsigned char _writerMode;	// 192 = 0xc0
    _Bool _isVideoStarted;	// 193 = 0xc1
    _Bool _isEndRTPTimestampSet;	// 194 = 0xc2
    unsigned int _startRTPTimeStamp;	// 196 = 0xc4
    unsigned int _endRTPTimeStamp;	// 200 = 0xc8
    _Bool _writingStarted;	// 204 = 0xcc
    struct opaqueCMBufferQueue *_videoQueue;	// 208 = 0xd0
    struct opaqueCMBufferQueue *_localAudioQueue;	// 216 = 0xd8
    struct opaqueCMBufferQueue *_remoteAudioQueue;	// 224 = 0xe0
    NSObject<OS_dispatch_queue> *_serializationQueue;	// 232 = 0xe8
    CDUnknownBlockType _completionHandler;	// 240 = 0xf0
    struct CGRect _contectRect;	// 248 = 0xf8
    double _visibleWidth;	// 280 = 0x118
    double _visibleHeight;	// 288 = 0x120
    struct __CVPixelBufferPool *_bufferPool;	// 296 = 0x128
    struct OpaqueVTPixelTransferSession *_transferSession;	// 304 = 0x130
    unsigned int _codec;	// 312 = 0x138
}

@property(retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly) unsigned char writerMode; // @synthesize writerMode=_writerMode;
@property unsigned int endRTPTimeStamp; // @synthesize endRTPTimeStamp=_endRTPTimeStamp;
@property unsigned int startRTPTimeStamp; // @synthesize startRTPTimeStamp=_startRTPTimeStamp;
- (void)setupInputs;	// IMP=0x00000000003677e0
- (void)startWritingAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000003676a8
- (void)appendMetaData;	// IMP=0x00000000003671cd
- (void)processSampleQueue:(struct opaqueCMBufferQueue *)arg1 input:(id)arg2 lastPresentationTime:(CDStruct_1b6d18a9 *)arg3;	// IMP=0x0000000000366e6e
- (void)setupInput:(id)arg1 queue:(struct opaqueCMBufferQueue *)arg2 dispatchGroup:(id)arg3 lastPresentationTime:(CDStruct_1b6d18a9 *)arg4;	// IMP=0x0000000000366c98
- (id)setupAssetWriterWithWidth:(int)arg1 height:(int)arg2 transactionID:(id)arg3;	// IMP=0x00000000003661dd
- (void)finishWritingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000365d29
- (void)setStillImageTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000365c03
- (_Bool)shouldFinishWritingSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 RTPtimeStamp:(unsigned int)arg2 mediaType:(unsigned char)arg3;	// IMP=0x00000000003656ab
- (_Bool)shouldAppendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 RTPtimeStamp:(unsigned int)arg2 mediaType:(unsigned char)arg3;	// IMP=0x0000000000365508
- (void)setEndRTPTimestampWithTimestamp:(unsigned int)arg1;	// IMP=0x00000000003654f5
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 mediaType:(unsigned char)arg2;	// IMP=0x00000000003653c9
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 cameraStatus:(unsigned char)arg2 mediaType:(unsigned char)arg3;	// IMP=0x00000000003653c3
- (void)setupContectRect:(struct CGRect)arg1 withCaptureHeight:(int)arg2;	// IMP=0x00000000003652d0
- (void)setupWriterWithMode:(unsigned char)arg1;	// IMP=0x00000000003652c4
- (void)dealloc;	// IMP=0x0000000000365174
- (id)initWithOutputURL:(id)arg1 transactionID:(id)arg2 videoCodec:(unsigned int)arg3;	// IMP=0x0000000000365006

@end
