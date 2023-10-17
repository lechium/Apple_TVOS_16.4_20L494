//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySetTaskPriority : PBCodable
{
    unsigned int _priority;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    struct {
        unsigned int priority:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000067ec
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000673a
- (unsigned long long)hash;	// IMP=0x00100000000066e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000006627
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000658f
- (void)copyTo:(id)arg1;	// IMP=0x001000000000652c
- (void)writeTo:(id)arg1;	// IMP=0x00100000000064c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000006289
- (id)dictionaryRepresentation;	// IMP=0x00100000000061a4
- (id)description;	// IMP=0x00100000000060f5
@property(nonatomic) _Bool hasPriority;
@property(readonly, nonatomic) _Bool hasTask;

@end
