//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyAuthChallenge, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveChallenge : PBCodable
{
    PDURLSessionProxyAuthChallenge *_challenge;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000003f5b4
@property(retain, nonatomic) PDURLSessionProxyAuthChallenge *challenge; // @synthesize challenge=_challenge;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003f4d3
- (unsigned long long)hash;	// IMP=0x001000000003f486
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003f3be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003f320
- (void)copyTo:(id)arg1;	// IMP=0x001000000003f2bd
- (void)writeTo:(id)arg1;	// IMP=0x001000000003f260
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003f072
- (id)dictionaryRepresentation;	// IMP=0x001000000003ef9d
- (id)description;	// IMP=0x001000000003eeee
@property(readonly, nonatomic) _Bool hasChallenge;
@property(readonly, nonatomic) _Bool hasTask;

@end

