//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveDataReply : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000038f44
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000038ec2
- (unsigned long long)hash;	// IMP=0x0010000000038ea5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000038e0b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000038d93
- (void)copyTo:(id)arg1;	// IMP=0x0010000000038d69
- (void)writeTo:(id)arg1;	// IMP=0x0010000000038d45
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000038ba4
- (id)dictionaryRepresentation;	// IMP=0x0010000000038b1a
- (id)description;	// IMP=0x0010000000038a6b
@property(readonly, nonatomic) _Bool hasTask;

@end

