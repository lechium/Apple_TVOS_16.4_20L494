//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;

__attribute__((visibility("hidden")))
@interface VCAudioRedBuilder : NSObject
{
    int _redPayloadType;	// 8 = 0x8
    unsigned int _sampleRate;	// 12 = 0xc
    unsigned int _samplesPerFrame;	// 16 = 0x10
    unsigned int _numPayloads;	// 20 = 0x14
    unsigned int _maxDelay;	// 24 = 0x18
    _Bool _includeSequenceOffset;	// 28 = 0x1c
    struct tagVCAudioRedPayload _latestPrimaryPayload;	// 32 = 0x20
    NSPointerArray *_selectedRedPayloads;	// 64 = 0x40
    struct tagVCAudioRedPayload _redPayloadToSend;	// 72 = 0x48
    unsigned char _redPayloadBufferToSend[1472];	// 104 = 0x68
    struct tagVCAudioRedPayload _payloadHistory[9];	// 1576 = 0x628
    unsigned int _payloadHistoryCount;	// 1864 = 0x748
    char *_payloadBufferHistory;	// 1872 = 0x750
    int _payloadBufferHistoryIndex;	// 1880 = 0x758
}

+ (unsigned int)redOverheadForNumPayloads:(unsigned int)arg1;	// IMP=0x00600000001059c4
@property(readonly, nonatomic) int redPayloadType; // @synthesize redPayloadType=_redPayloadType;
@property(nonatomic) unsigned int numPayloads; // @synthesize numPayloads=_numPayloads;
@property(nonatomic) unsigned int maxDelay; // @synthesize maxDelay=_maxDelay;
- (id)initWithRedPayloadType:(int)arg1 sampleRate:(unsigned int)arg2 samplesPerFrame:(unsigned int)arg3 numPayloads:(unsigned int)arg4 maxDelay:(unsigned int)arg5 includeSequenceOffset:(_Bool)arg6;	// IMP=0x0000000000105890
- (void)dealloc;	// IMP=0x0000000000105816
- (void)resetPayloadHistory;	// IMP=0x0000000000105672
- (struct tagVCAudioRedPayload *)redPayloadForPrimaryPayload:(struct tagVCAudioRedPayload *)arg1;	// IMP=0x0000000000104fed
- (id)payloadHistoryDescription;	// IMP=0x0000000000104f07
- (id)redundantPayloadsDescription:(id)arg1;	// IMP=0x0000000000104e25
- (id)redPayloadDescription:(struct tagVCAudioRedPayload *)arg1;	// IMP=0x0000000000104db9
- (_Bool)redundantPayloads:(id)arg1 containsPointer:(void *)arg2;	// IMP=0x0000000000104d41
- (id)selectRedPayloadsForPrimaryPayload:(struct tagVCAudioRedPayload *)arg1;	// IMP=0x0000000000104563
- (struct tagVCAudioRedPayload *)nearestRedPayloadForTimestamp:(unsigned int)arg1;	// IMP=0x00000000001042b1
- (char *)resetOutputPayload:(struct tagVCAudioRedPayload *)arg1;	// IMP=0x0000000000104299
- (_Bool)isPayloadTimestampWithinThreshold:(struct tagVCAudioRedPayload *)arg1 forTimestamp:(unsigned int)arg2;	// IMP=0x0000000000104158
- (struct tagVCAudioRedPayload *)buildRedPayloadWithPrimaryPayload:(struct tagVCAudioRedPayload *)arg1 redPayloads:(id)arg2;	// IMP=0x0000000000103927

@end
