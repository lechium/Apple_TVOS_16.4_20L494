//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDataTaskWithRequestReply : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
    NSData *_taskInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000006e9a
@property(retain, nonatomic) NSData *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000006dd3
- (unsigned long long)hash;	// IMP=0x0010000000006d86
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000006cbe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000006c20
- (void)copyTo:(id)arg1;	// IMP=0x0010000000006bbd
- (void)writeTo:(id)arg1;	// IMP=0x0010000000006b60
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000006988
- (id)dictionaryRepresentation;	// IMP=0x00100000000068d8
- (id)description;	// IMP=0x0010000000006829
@property(readonly, nonatomic) _Bool hasTaskInfo;
@property(readonly, nonatomic) _Bool hasTask;

@end

