//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface SharedChannelPublishResponse : PBCodable
{
    unsigned int _retryIntervalSeconds;	// 8 = 0x8
    int _status;	// 12 = 0xc
    CDStruct_00fd22b7 _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int retryIntervalSeconds; // @synthesize retryIntervalSeconds=_retryIntervalSeconds;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000384da
- (unsigned long long)hash;	// IMP=0x0000000000038495
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000383e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000038365
- (void)copyTo:(id)arg1;	// IMP=0x000000000003830b
- (void)writeTo:(id)arg1;	// IMP=0x000000000003829a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003828d
- (id)dictionaryRepresentation;	// IMP=0x0000000000037ef7
- (id)description;	// IMP=0x0000000000037e48
@property(nonatomic) _Bool hasRetryIntervalSeconds;
- (int)StringAsStatus:(id)arg1;	// IMP=0x0000000000037ccb
- (id)statusAsString:(int)arg1;	// IMP=0x0000000000037c82
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;

@end

