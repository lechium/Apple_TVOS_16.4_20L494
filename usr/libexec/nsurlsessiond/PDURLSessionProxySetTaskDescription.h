//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySetTaskDescription : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
    NSString *_taskDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002ed7b
@property(retain, nonatomic) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002ecb4
- (unsigned long long)hash;	// IMP=0x001000000002ec67
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002eb9f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002eb01
- (void)copyTo:(id)arg1;	// IMP=0x001000000002ea9e
- (void)writeTo:(id)arg1;	// IMP=0x001000000002ea41
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000002e869
- (id)dictionaryRepresentation;	// IMP=0x001000000002e7b9
- (id)description;	// IMP=0x001000000002e70a
@property(readonly, nonatomic) _Bool hasTaskDescription;
@property(readonly, nonatomic) _Bool hasTask;

@end

