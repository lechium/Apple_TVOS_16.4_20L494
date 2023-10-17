//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SECSFAAction;

__attribute__((visibility("hidden")))
@interface SECSFARule : PBCodable
{
    long long _repeatAfterSeconds;	// 8 = 0x8
    SECSFAAction *_action;	// 16 = 0x10
    NSString *_eventType;	// 24 = 0x18
    NSData *_match;	// 32 = 0x20
    NSString *_process;	// 40 = 0x28
    struct {
        unsigned int repeatAfterSeconds:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002529d
@property(retain, nonatomic) NSString *process; // @synthesize process=_process;
@property(nonatomic) long long repeatAfterSeconds; // @synthesize repeatAfterSeconds=_repeatAfterSeconds;
@property(retain, nonatomic) SECSFAAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSData *match; // @synthesize match=_match;
@property(retain, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002511a
- (unsigned long long)hash;	// IMP=0x0000000000025070
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000024f13
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000024e04
- (void)copyTo:(id)arg1;	// IMP=0x0000000000024d40
- (void)writeTo:(id)arg1;	// IMP=0x0000000000024c84
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000024c77
- (id)dictionaryRepresentation;	// IMP=0x0000000000024b1d
- (id)description;	// IMP=0x0000000000024a6e
@property(readonly, nonatomic) _Bool hasProcess;
@property(nonatomic) _Bool hasRepeatAfterSeconds;
@property(readonly, nonatomic) _Bool hasAction;
@property(readonly, nonatomic) _Bool hasMatch;
@property(readonly, nonatomic) _Bool hasEventType;

@end

