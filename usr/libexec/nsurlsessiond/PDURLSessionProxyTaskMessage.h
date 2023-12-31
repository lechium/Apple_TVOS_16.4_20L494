//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxySessionMessage;

@interface PDURLSessionProxyTaskMessage : PBCodable
{
    unsigned long long _taskIdentifier;	// 8 = 0x8
    PDURLSessionProxySessionMessage *_session;	// 16 = 0x10
    struct {
        unsigned int taskIdentifier:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000003dad8
@property(nonatomic) unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(retain, nonatomic) PDURLSessionProxySessionMessage *session; // @synthesize session=_session;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003da24
- (unsigned long long)hash;	// IMP=0x001000000003d9d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003d913
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003d87a
- (void)copyTo:(id)arg1;	// IMP=0x001000000003d816
- (void)writeTo:(id)arg1;	// IMP=0x001000000003d7b1
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003d7a4
- (id)dictionaryRepresentation;	// IMP=0x001000000003d6bf
- (id)description;	// IMP=0x001000000003d610
@property(nonatomic) _Bool hasTaskIdentifier;
@property(readonly, nonatomic) _Bool hasSession;

@end

