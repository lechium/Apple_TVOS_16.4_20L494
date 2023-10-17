//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SiriTTSOspreyRequest : NSObject
{
    _Bool _serverLogs;	// 8 = 0x8
    float _pitch;	// 12 = 0xc
    float _rate;	// 16 = 0x10
    float _volume;	// 20 = 0x14
    float _neuralSentencePitch;	// 24 = 0x18
    float _neuralSentencePitchRange;	// 28 = 0x1c
    float _neuralSentenceDuration;	// 32 = 0x20
    float _neuralSentenceEnergy;	// 36 = 0x24
    float _neuralSentenceTilt;	// 40 = 0x28
    NSString *_language;	// 48 = 0x30
    NSString *_text;	// 56 = 0x38
    NSString *_voiceName;	// 64 = 0x40
    NSString *_speechId;	// 72 = 0x48
    NSString *_appId;	// 80 = 0x50
    NSString *_experimentId;	// 88 = 0x58
    unsigned long long _requestCreatedTime;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000002a16e
@property(nonatomic) _Bool serverLogs; // @synthesize serverLogs=_serverLogs;
@property(nonatomic) float neuralSentenceTilt; // @synthesize neuralSentenceTilt=_neuralSentenceTilt;
@property(nonatomic) float neuralSentenceEnergy; // @synthesize neuralSentenceEnergy=_neuralSentenceEnergy;
@property(nonatomic) float neuralSentenceDuration; // @synthesize neuralSentenceDuration=_neuralSentenceDuration;
@property(nonatomic) float neuralSentencePitchRange; // @synthesize neuralSentencePitchRange=_neuralSentencePitchRange;
@property(nonatomic) float neuralSentencePitch; // @synthesize neuralSentencePitch=_neuralSentencePitch;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) float pitch; // @synthesize pitch=_pitch;
@property(nonatomic) unsigned long long requestCreatedTime; // @synthesize requestCreatedTime=_requestCreatedTime;
@property(copy, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *speechId; // @synthesize speechId=_speechId;
@property(copy, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
- (id)underlyingRequest;	// IMP=0x0000000000029ab8

@end

