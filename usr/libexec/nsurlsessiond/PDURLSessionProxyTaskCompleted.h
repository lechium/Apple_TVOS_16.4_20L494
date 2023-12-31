//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PDURLSessionProxyError, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyTaskCompleted : PBCodable
{
    PDURLSessionProxyError *_error;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    NSData *_taskInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000005931b
@property(retain, nonatomic) NSData *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) PDURLSessionProxyError *error; // @synthesize error=_error;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000591f5
- (unsigned long long)hash;	// IMP=0x0010000000059188
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000059090
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000058fcc
- (void)copyTo:(id)arg1;	// IMP=0x0010000000058f49
- (void)writeTo:(id)arg1;	// IMP=0x0010000000058ecf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000058cb7
- (id)dictionaryRepresentation;	// IMP=0x0010000000058bbb
- (id)description;	// IMP=0x0010000000058b0c
@property(readonly, nonatomic) _Bool hasTaskInfo;
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasTask;

@end

