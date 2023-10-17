//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SECSFAActionAutomaticBugCapture, SECSFAActionDropEvent, SECSFAActionTapToRadar;

__attribute__((visibility("hidden")))
@interface SECSFAAction : PBCodable
{
    SECSFAActionAutomaticBugCapture *_abc;	// 8 = 0x8
    int _action;	// 16 = 0x10
    SECSFAActionDropEvent *_drop;	// 24 = 0x18
    NSString *_radarnumber;	// 32 = 0x20
    SECSFAActionTapToRadar *_ttr;	// 40 = 0x28
    struct {
        unsigned int action:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000226e8
@property(retain, nonatomic) SECSFAActionDropEvent *drop; // @synthesize drop=_drop;
@property(retain, nonatomic) SECSFAActionAutomaticBugCapture *abc; // @synthesize abc=_abc;
@property(retain, nonatomic) SECSFAActionTapToRadar *ttr; // @synthesize ttr=_ttr;
@property(retain, nonatomic) NSString *radarnumber; // @synthesize radarnumber=_radarnumber;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002257f
- (unsigned long long)hash;	// IMP=0x00000000000224c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000022363
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000022256
- (void)copyTo:(id)arg1;	// IMP=0x0000000000022193
- (void)writeTo:(id)arg1;	// IMP=0x00000000000220fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000220ef
- (id)dictionaryRepresentation;	// IMP=0x0000000000021f30
- (id)description;	// IMP=0x0000000000021e81
- (void)clearOneofValuesForAction;	// IMP=0x0000000000021e0f
- (int)StringAsAction:(id)arg1;	// IMP=0x0000000000021d60
- (id)actionAsString:(int)arg1;	// IMP=0x0000000000021d17
@property(nonatomic) _Bool hasAction;
@property(nonatomic) int action; // @synthesize action=_action;
@property(readonly, nonatomic) _Bool hasDrop;
@property(readonly, nonatomic) _Bool hasAbc;
@property(readonly, nonatomic) _Bool hasTtr;
@property(readonly, nonatomic) _Bool hasRadarnumber;

@end
