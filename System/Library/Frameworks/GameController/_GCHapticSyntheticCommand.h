//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _GCHapticParameterCurve, _GCHapticTokenAndParams;

__attribute__((visibility("hidden")))
@interface _GCHapticSyntheticCommand : NSObject
{
    unsigned short _type;	// 8 = 0x8
    double _time;	// 16 = 0x10
    unsigned long long _channelOrSeqID;	// 24 = 0x18
    unsigned long long _identifier;	// 32 = 0x20
    float _value;	// 40 = 0x28
    unsigned long long _serverID;	// 48 = 0x30
    _GCHapticParameterCurve *_parameterCurve;	// 56 = 0x38
    _GCHapticTokenAndParams *_tokenAndParams;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000cea93
@property(readonly, nonatomic) _GCHapticTokenAndParams *tokenAndParams; // @synthesize tokenAndParams=_tokenAndParams;
@property(readonly, nonatomic) _GCHapticParameterCurve *parameterCurve; // @synthesize parameterCurve=_parameterCurve;
@property(readonly, nonatomic) float value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long serverID; // @synthesize serverID=_serverID;
- (id)description;	// IMP=0x00000000000cea20
@property(readonly, nonatomic) unsigned short command;
@property(readonly, nonatomic) unsigned long long paramID;
@property(readonly, nonatomic) unsigned long long eventID;
@property(readonly, nonatomic) unsigned long long sequenceID;
@property(readonly, nonatomic) unsigned long long channelID;
@property(readonly, nonatomic) double time;
@property(readonly, nonatomic) unsigned short type;
- (void)cancel;	// IMP=0x00000000000ce9cd
- (void)preprocessCommand:(const void *)arg1;	// IMP=0x00000000000ce93d
- (id)initWithHapticCommand:(const void *)arg1;	// IMP=0x00000000000ce84c

@end

